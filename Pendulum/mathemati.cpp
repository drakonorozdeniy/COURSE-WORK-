#define _USE_MATH_DEFINES
#include "mathemati.h"
#include "ui_mathemati.h"
#include <iostream>
#include <QPainter>
#include <tgmath.h>
#include <math.h>
#include <QPixmap>
#include <QIcon>


double formula (double k);
double polinom (double k);

Mathemati::Mathemati(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mathemati)
{
    ui->setupUi(this);

    ui->pushButton->setIcon(QIcon(":resourses/images/exit.png"));

    timer = new QTimer(this);
    ConnectSignalsWithSlots();

    h=0.1 ;
    xBegin=0;
    xEnd=20 ;

    tic=0.02;
    t=0;
    aAcc=0;
    aVel=0;

    len=0.2;


}



Mathemati::~Mathemati()
{
    delete ui;
}

void Mathemati::on_pushButton_clicked()
{
    this->close();
    emit firstwindow();
}

void Mathemati :: ConnectSignalsWithSlots()
{
  QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_2_clicked()));
  connect(timer, SIGNAL(timeout()),this,SLOT(TimerSlot()));
}

void Mathemati::on_pushButton_2_clicked()
{
    t=0;
    tic=0.02;
    alpha_0=0;
    aAcc=0;
    aVel=0;

    // Забираем значение угла, которое установил клиент
    alpha_0=ui->spinBox->value();
    alpha=alpha_0*(M_PI/180);

    // Забираем значение ускорения свободного падения, которое установил клиент
    g=ui->spinBox_2->value();

    // Задаем угловое ускорение
    w=sqrt(g/len);

    //Вычисляем k, а также периоды
    k=sin(alpha_0/2);
    T=2*M_PI*sqrt(len/g);
    Tconst= 4*sqrt(len/g)*formula(k);

    // Выводим вычисленные значения периодов на экран
    ui->label_2->setText(QString::number(T) + QString("c"));
    ui->label_7->setText(QString::number(Tconst) + QString("c"));
    ui->label_8->setText(QString::number(round(100-((T*100)/Tconst))) + QString("%"));

    //Механика построения графика
    ui->widget->clearGraphs();
    time = 0;
    if (alpha==0)
        timer->start(0);
    else
        timer->start(40);
    x.clear();
    y.clear();
    alpha_2=alpha;
    y.push_back(alpha_0);
    ui->widget->xAxis->setRange(0,20);
    ui->widget->yAxis->setRange(-alpha_0,alpha_0);
    N=(xEnd-xBegin)/h+3;
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
}

void Mathemati::paintEvent(QPaintEvent *)
{
    // Механика изображения геометрической модели
    //математического матяника на экране
    l=160;
    x0 = 640;
    y0 = 440;
    x1=640;
    y1=600;

    //Изменение координаты x
    x1 =-1*l * sin(alpha_2);

    //Изменение координаты y
    y1 = l * cos(alpha_2);

    QPainter painter;
    painter.begin(this);
    QPen pen = painter.pen();
    pen.setWidth(2);
    painter.setPen(pen);
    painter.drawLine(x0, y0, x0 + x1, y0 + y1);
    painter.drawEllipse(QPoint(x0 + x1, y0 + y1), 10, 10);
    painter.end();

}

void Mathemati::TimerSlot()
{
    // Данная функция реализует механику таймера,
    // c помощью которого была реализована анимация
    // изображения точек на графике
    if(time <= 20*N){
        if( t <= xEnd){
            // Добавление временного интервала
            x.push_back(t);
            // Реализация основного закона движения
            // математического маятника(график)
            y.push_back(alpha_0*cos(w*tic+alpha));
            tic+=0.02;
            t +=0.1;
        }
        time +=20;
    }
    else {
        time=0;
        timer->stop();
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();

    // Реализация основного закона движения
    // математического маятника (Геометрическая
    // модель )
    aAcc=(-1*(g/l)*sin(alpha_2));
    aVel +=aAcc;
    alpha_2+=aVel;

    this->repaint();
}



void Mathemati::on_pushButton_3_clicked()
{
    timer->stop();
}


double formula (double k) {
    // Данная функция вычисляет полный эллиптический интеграл первого рода
    double a=0 , b=M_PI/2 ,eps=0.000001;

    double integral=eps +1 , I1=0 ;


    for (int N = 2; (N <= 4) || (
            fabs(I1 - integral) > eps); N *= 2)
        {
            double h, sum2 = 0, sum4 = 0, sum = 0;
            //Шаг интегрирования.
            h = (b - a) / (2 * N);
            for (int i = 1; i <= 2 * N - 1; i += 2)
            {

                //Значения с нечётными индексами, которые нужно умножить на 4.Также в sum4 и sum2 заключена основная формула
                // нахождения полного эллиптического интеграла первого рода
                sum4 += (1 / sqrt(1 - (pow(k, 2) * pow(sin(a+h*i),2))));

                //Значения с чётными индексами, которые нужно умножить на 2.
                sum2 += (1 / sqrt(1 - (pow(k, 2) * pow(sin(a+h*(i+1)),2))));
            }
            //Отнимаем значение f(b) так как ранее прибавили его дважды.
            sum = (1 / sqrt(1 - (pow(k, 2) * pow(sin(a),2)))) + 4 * sum4 + 2 * sum2 - (1 / sqrt(1 - (pow(k, 2) * pow(sin(b),2))));
            integral = I1;
            I1 = (h / 3) * sum;
        }
    return I1;
}

double polinom (double k) {
    // дополнительная функция вычисляющая эллиптический интеграл первого рода
    double t = 1 - k * k;
    double a = (((0.01451196212 * t + 0.03742563713) * t
                 + 0.03590092383) * t + 0.09666344259) * t + 1.38629436112;
    double b = (((0.00441787012 * t + 0.03328355346) * t + 0.06880248576)
                * t + 0.12498593597) * t + 0.5;

        return (a - b * log(t));
}

