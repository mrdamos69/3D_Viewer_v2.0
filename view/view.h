#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include "widget.h"
#include <QFileDialog>
#include <QVector>
#include <QImage>
#include <QPainter>
#include <QPixmap>
#include <QSize>

QT_BEGIN_NAMESPACE
namespace Ui { class view; }
QT_END_NAMESPACE

class view : public QMainWindow
{
    Q_OBJECT

public:
    view(QWidget *parent = nullptr);
    ~view();
    int flag = 0;
    Widget *p_test;
    QVector<QImage> mas_image;

private slots:
    void on_download_obj_clicked();

    void on_change_move_clicked();

    void on_change_rot_clicked();

    void on_change_scale_clicked();

    void on_background_white_clicked();

    void on_change_vertex_color_clicked();

    void on_change_vertex_size_clicked();

    void on_change_edge_color_clicked();

    void on_change_edge_size_clicked();

    void on_stipple_on_clicked();

    void on_stipple_off_clicked();

    void on_vertextype_round_clicked();

    void on_vertextype_square_clicked();

    void on_vertextype_none_clicked();

    void on_screenshot_clicked();

    void create_screen();

    void on_start_image_clicked();

    void on_stop_image_clicked();

    void information_of_file();

private:
    Ui::view *ui;
};
#endif // VIEW_H
