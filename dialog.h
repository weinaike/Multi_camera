#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "opencv.hpp"
#include "qtimer.h"
#include "qdebug.h"
#include <vector>
using namespace cv;
using namespace std;
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void GetMeanImg(VideoCapture & cap,int mean_num,Mat & mean_img);

private slots:
    void on_pushButton_start_clicked();
    void on_timer();

    void on_pushButton_stop_clicked();

    void on_pushButton_save_clicked();

    void on_radioButton_0_clicked();

    void on_radioButton_1_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_pushButton_init_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_mean_editingFinished();


    void on_lineEdit_loop_editingFinished();

    void on_lineEdit_save_num_editingFinished();

private:
    Ui::Dialog *ui;
    QTimer m_timer;
    vector<VideoCapture> m_cap;
    vector<QImage> m_image;
    int m_height;
    int m_width;
    int m_check;
    int m_second;
    int m_mean_num;
    int m_loop;
    int m_loop_max;
    int m_save_num;

    VideoCapture m_cap_1;
    VideoCapture m_cap_2;
    VideoCapture m_cap_3;
    Mat m_src1,m_src2,m_src3;
    QImage m_image_1,m_image_2,m_image_3;
    int m_num;

};

#endif // DIALOG_H
