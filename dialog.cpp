#include "dialog.h"
#include "ui_dialog.h"
#include "qimagemat.h"
#include "qdir.h"
#include <string>
#include "qdatetime.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QString num;
    num=ui->lineEdit->text();
    m_second=num.toInt();
    num=ui->lineEdit_mean->text();
    m_mean_num=num.toInt();
    num=ui->lineEdit_loop->text();
    m_loop_max=num.toInt();
    num=ui->lineEdit_save_num->text();
    m_save_num=num.toInt();
    ui->radioButton_0->setEnabled(false);
    ui->radioButton_1->setEnabled(false);
    ui->radioButton_2->setEnabled(false);
    ui->radioButton_3->setEnabled(false);
    ui->radioButton_4->setEnabled(false);
    ui->radioButton_5->setEnabled(false);
    m_loop=0;
    m_num=0;
    m_check=0;
    m_height=720;
    m_width=1280;
    VideoCapture cap;
    for(int i=6;i>=0;i--)
    {
        cap.open(i);
        cap.set(CV_CAP_PROP_FRAME_HEIGHT,m_height);
        cap.set(CV_CAP_PROP_FRAME_WIDTH,m_width);
        //cap.set(CV_CAP_PROP_FPS,1);
        if(cap.isOpened())
        {
            m_num++;
            m_cap.push_back(cap);
        }
    }
    if(m_num==0)
    {
        ui->label_num->setText("no camera");
        ui->pushButton_save->setEnabled(false);
        ui->pushButton_start->setEnabled(false);
        ui->pushButton_stop->setEnabled(false);
    }
    else
    {
        ui->label_num->setText(QString::number(m_num));
        ui->pushButton_start->setEnabled(false);
        ui->pushButton_stop->setEnabled(true);
        ui->pushButton_save->setEnabled(true);
        ui->radioButton_0->setEnabled(true);
        ui->radioButton_0->setChecked(true);
        ui->label_message->setText(" ");
        connect(&m_timer,SIGNAL(timeout()),this,SLOT(on_timer()));
        m_timer.start(m_second);
    }

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_start_clicked()
{
    m_timer.stop();
    ui->pushButton_start->setEnabled(false);
    ui->pushButton_stop->setEnabled(true);
    ui->label_message->setText("开始预览");
    m_timer.start(m_second);
}
void Dialog::on_pushButton_stop_clicked()
{
    ui->pushButton_start->setEnabled(true);
    ui->pushButton_stop->setEnabled(false);
    m_timer.stop();
    ui->label_message->setText("停止预览");
}
void Dialog::on_pushButton_save_clicked()
{
    if(ui->pushButton_stop->isEnabled())
    {
        ui->label_message->setText("请先停止预览");
    }
    else
    {
        ui->label_message->setText("保存中");
        ui->label_message->update();
        if(m_num!=6)
        {
            ui->label_message->setText("摄像头未全部连接");
            //m_timer.start(m_second);
            //return;
        }
        QDir *temp = new QDir;
        bool exist = temp->exists("D://Imagefiles");
        if(!exist)
        {
            bool ok = temp->mkdir("D://Imagefiles");
            if(!ok )
                ui->label_message->setText("D://Imagefiles文件夹创建失败");
            else
                ui->label_message->setText("保存至D://Imagefile");
        }
        Mat src;
        string filename;
        QDateTime time=QDateTime::currentDateTime();
        QString str=time.toString("yyyy_MM_dd_hh_mm_ss_");

        for(int i=0;i<m_save_num;i++)
        {
            stringstream ss;
            ss<<i;
            string s_num=ss.str();
            switch(m_num){
            case 6:
                exist = temp->exists("D://Imagefiles//camera6");
                if(!exist) temp->mkdir("D://Imagefiles//camera6");
                GetMeanImg(m_cap[5],m_mean_num,src);
                //m_cap[5]>>src;
                filename="D:\\Imagefiles\\camera6\\camera6_"+str.toStdString()+s_num+".jpg";
                imwrite(filename,src);
            case 5:
                exist = temp->exists("D://Imagefiles//camera5");
                if(!exist) temp->mkdir("D://Imagefiles//camera5");
                GetMeanImg(m_cap[4],m_mean_num,src);
                //m_cap[4]>>src;
                filename="D:\\Imagefiles\\camera5\\camera5_"+str.toStdString()+s_num+".jpg";
                imwrite(filename,src);
            case 4:
                exist = temp->exists("D://Imagefiles//camera4");
                if(!exist) temp->mkdir("D://Imagefiles//camera4");
                GetMeanImg(m_cap[3],m_mean_num,src);
                //m_cap[3]>>src;
                filename="D:\\Imagefiles\\camera4\\camera4_"+str.toStdString()+s_num+".jpg";
                imwrite(filename,src);
            case 3:
                exist = temp->exists("D://Imagefiles//camera3");
                if(!exist) temp->mkdir("D://Imagefiles//camera3");
                GetMeanImg(m_cap[2],m_mean_num,src);
                //m_cap[2]>>src;
                filename="D:\\Imagefiles\\camera3\\camera3_"+str.toStdString()+s_num+".jpg";
                imwrite(filename,src);
            case 2:
                exist = temp->exists("D://Imagefiles//camera2");
                if(!exist) temp->mkdir("D://Imagefiles//camera2");
                GetMeanImg(m_cap[1],m_mean_num,src);
                //m_cap[1]>>src;
                filename="D:\\Imagefiles\\camera2\\camera2_"+str.toStdString()+s_num+".jpg";
                imwrite(filename,src);
            case 1:
                exist = temp->exists("D://Imagefiles//camera1");
                if(!exist) temp->mkdir("D://Imagefiles//camera1");
                GetMeanImg(m_cap[0],m_mean_num,src);
                //m_cap[0]>>src;
                filename="D:\\Imagefiles\\camera1\\camera1_"+str.toStdString()+s_num+".jpg";
                imwrite(filename,src);
            default:
                 ui->label_message->setText("成功保存至D:\\Imagefiles");
            }
        }
        ui->pushButton_start->setEnabled(false);
        ui->pushButton_stop->setEnabled(true);
        m_loop++;
        ui->label_loop->setText("当前第"+QString::number(m_loop,10)+"次保存");
        if(m_loop==m_loop_max)
        {
            m_loop=0;
        }
        m_timer.start(m_second);

    }

}
void Dialog::on_timer()
{
    Mat src;
    QImage image,imagescaled;
    switch(m_num){
    case 6:
        m_cap[5]>>src;
        image=MatToQImage(src);
        imagescaled=image.scaled(220,120,Qt::KeepAspectRatio);
        ui->label_pre_5->setPixmap(QPixmap::fromImage(imagescaled));
        ui->radioButton_5->setEnabled(true);
    case 5:
        m_cap[4]>>src;
        image=MatToQImage(src);
        imagescaled=image.scaled(220,120,Qt::KeepAspectRatio);
        ui->label_pre_4->setPixmap(QPixmap::fromImage(imagescaled));
        ui->radioButton_4->setEnabled(true);
    case 4:
        m_cap[3]>>src;
        image=MatToQImage(src);
        imagescaled=image.scaled(220,120,Qt::KeepAspectRatio);
        ui->label_pre_3->setPixmap(QPixmap::fromImage(imagescaled));
        ui->radioButton_3->setEnabled(true);
    case 3:
        m_cap[2]>>src;
        image=MatToQImage(src);
        imagescaled=image.scaled(220,120,Qt::KeepAspectRatio);
        ui->label_pre_2->setPixmap(QPixmap::fromImage(imagescaled));
        ui->radioButton_2->setEnabled(true);
    case 2:
        m_cap[1]>>src;
        image=MatToQImage(src);
        imagescaled=image.scaled(220,120,Qt::KeepAspectRatio);
        ui->label_pre_1->setPixmap(QPixmap::fromImage(imagescaled));
        ui->radioButton_1->setEnabled(true);
    case 1:
        m_cap[0]>>src;
        image=MatToQImage(src);
        imagescaled=image.scaled(220,120,Qt::KeepAspectRatio);
        ui->label_pre_0->setPixmap(QPixmap::fromImage(imagescaled));
        ui->radioButton_0->setEnabled(true);
    default:
        if(m_num>0){
            m_cap[m_check]>>src;
            image=MatToQImage(src);
            imagescaled=image.scaled(640,360,Qt::KeepAspectRatio);
            ui->label_show->setPixmap(QPixmap::fromImage(imagescaled));
        }
    }
}




void Dialog::on_radioButton_0_clicked()
{
    m_check=0;
}

void Dialog::on_radioButton_1_clicked()
{
    m_check=1;
}

void Dialog::on_radioButton_2_clicked()
{
    m_check=2;
}

void Dialog::on_radioButton_3_clicked()
{
    m_check=3;
}

void Dialog::on_radioButton_4_clicked()
{
    m_check=4;
}

void Dialog::on_radioButton_5_clicked()
{
    m_check=5;
}

void Dialog::on_pushButton_init_clicked()
{
    m_timer.stop();
    m_cap.erase(m_cap.begin(),m_cap.end());
    ui->radioButton_0->setEnabled(false);
    ui->radioButton_1->setEnabled(false);
    ui->radioButton_2->setEnabled(false);
    ui->radioButton_3->setEnabled(false);
    ui->radioButton_4->setEnabled(false);
    ui->radioButton_5->setEnabled(false);
    ui->label_pre_0->setText("摄像头1");
    ui->label_pre_1->setText("摄像头2");
    ui->label_pre_2->setText("摄像头3");
    ui->label_pre_3->setText("摄像头4");
    ui->label_pre_4->setText("摄像头5");
    ui->label_pre_5->setText("摄像头6");
    m_num=0;
    m_check=0;
    VideoCapture cap;
    for(int i=6;i>=0;i--)
    {
        cap.open(i);
        cap.set(CV_CAP_PROP_FRAME_HEIGHT,m_height);
        cap.set(CV_CAP_PROP_FRAME_WIDTH,m_width);
        if(cap.isOpened())
        {
            m_num++;
            m_cap.push_back(cap);
        }
    }
    if(m_num==0)
    {
        ui->label_num->setText("no camera");
        ui->pushButton_save->setEnabled(false);
        ui->pushButton_start->setEnabled(false);
        ui->pushButton_stop->setEnabled(false);
    }
    else
    {
        ui->label_num->setText(QString::number(m_num));
        ui->pushButton_start->setEnabled(false);
        ui->pushButton_stop->setEnabled(true);
        ui->pushButton_save->setEnabled(true);
        ui->radioButton_0->setEnabled(true);
        ui->radioButton_0->setChecked(true);
        ui->label_message->setText(" ");
        m_timer.start(m_second);
    }

}

void Dialog::on_lineEdit_editingFinished()
{
    QString num;
    num=ui->lineEdit->text();
    m_second=num.toInt();
}

void Dialog::on_lineEdit_mean_editingFinished()
{
    QString num;
    num=ui->lineEdit_mean->text();
    m_mean_num=num.toInt();
    if(m_mean_num>50){
        ui->label_message->setText("平均次数最大50");
        m_mean_num=50;
        ui->lineEdit_mean->setText("50");
    }

}
void Dialog::GetMeanImg(VideoCapture & cap,int mean_num,Mat & mean_img)
{
    Mat mean;
    Mat src,dst;
    for(int i=0;i<mean_num;i++)
    {
        cap>>src;
        src.convertTo(dst,CV_32FC3,1.0/255.0);
        if(i==0)
            mean=dst/mean_num;
        else
            mean+=dst/mean_num;
    }
    mean.convertTo(mean_img,CV_8UC3,255.0);
}

void Dialog::on_lineEdit_loop_editingFinished()
{
    QString num;
    num=ui->lineEdit_loop->text();
    m_loop_max=num.toInt();
    m_loop=0;
}

void Dialog::on_lineEdit_save_num_editingFinished()
{
    QString num;
    num=ui->lineEdit_save_num->text();
    m_save_num=num.toInt();
}
