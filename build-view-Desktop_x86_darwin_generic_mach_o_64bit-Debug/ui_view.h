/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_25;
    QWidget *widget;
    QPushButton *download_obj;
    QLineEdit *lineEdit_open;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *change_move_y;
    QPushButton *change_move_x;
    QPushButton *change_move_x2;
    QDoubleSpinBox *dSpinBox_move;
    QDoubleSpinBox *dSpinBox_move_2;
    QDoubleSpinBox *dSpinBox_move_3;
    QPushButton *change_move_y2;
    QPushButton *change_move_z2;
    QPushButton *change_move_z;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *screenshot;
    QPushButton *start_image;
    QPushButton *stop_image;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *background_white;
    QPushButton *change_vertex_color;
    QPushButton *change_edge_color;
    QLabel *label_of_inf_2;
    QLabel *label_of_inf;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QSpinBox *sBox_vertex_size;
    QLabel *label_3;
    QSpinBox *sBox_line_size;
    QComboBox *cBox_vertex_type;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *cBox_line_type;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *change_rot_y2;
    QDoubleSpinBox *dSpinBox_rot;
    QDoubleSpinBox *dSpinBox_rot_2;
    QPushButton *change_rot_x;
    QPushButton *change_rot_y;
    QPushButton *change_rot_x2;
    QPushButton *change_rot_z;
    QPushButton *change_rot_z2;
    QDoubleSpinBox *dSpinBox_rot_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *change_zoom;
    QDoubleSpinBox *dSpinBox_zoom;
    QPushButton *change_zoom_2;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *view)
    {
        if (view->objectName().isEmpty())
            view->setObjectName(QString::fromUtf8("view"));
        view->resize(1600, 997);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy);
        view->setMinimumSize(QSize(1600, 997));
        view->setMaximumSize(QSize(1600, 997));
        centralwidget = new QWidget(view);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setGeometry(QRect(1651, 1041, 131, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1161, 861));
        download_obj = new QPushButton(centralwidget);
        download_obj->setObjectName(QString::fromUtf8("download_obj"));
        download_obj->setGeometry(QRect(920, 910, 231, 31));
        lineEdit_open = new QLineEdit(centralwidget);
        lineEdit_open->setObjectName(QString::fromUtf8("lineEdit_open"));
        lineEdit_open->setGeometry(QRect(30, 910, 871, 30));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(1170, 590, 411, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        change_move_y = new QPushButton(gridLayoutWidget);
        change_move_y->setObjectName(QString::fromUtf8("change_move_y"));

        gridLayout->addWidget(change_move_y, 2, 0, 1, 1);

        change_move_x = new QPushButton(gridLayoutWidget);
        change_move_x->setObjectName(QString::fromUtf8("change_move_x"));

        gridLayout->addWidget(change_move_x, 1, 0, 1, 1);

        change_move_x2 = new QPushButton(gridLayoutWidget);
        change_move_x2->setObjectName(QString::fromUtf8("change_move_x2"));

        gridLayout->addWidget(change_move_x2, 1, 2, 1, 1);

        dSpinBox_move = new QDoubleSpinBox(gridLayoutWidget);
        dSpinBox_move->setObjectName(QString::fromUtf8("dSpinBox_move"));
        dSpinBox_move->setAlignment(Qt::AlignCenter);
        dSpinBox_move->setMinimum(0.100000000000000);
        dSpinBox_move->setMaximum(10.000000000000000);
        dSpinBox_move->setSingleStep(0.100000000000000);
        dSpinBox_move->setValue(0.100000000000000);

        gridLayout->addWidget(dSpinBox_move, 1, 1, 1, 1);

        dSpinBox_move_2 = new QDoubleSpinBox(gridLayoutWidget);
        dSpinBox_move_2->setObjectName(QString::fromUtf8("dSpinBox_move_2"));
        dSpinBox_move_2->setAlignment(Qt::AlignCenter);
        dSpinBox_move_2->setMinimum(0.100000000000000);
        dSpinBox_move_2->setMaximum(10.000000000000000);
        dSpinBox_move_2->setSingleStep(0.100000000000000);
        dSpinBox_move_2->setValue(0.100000000000000);

        gridLayout->addWidget(dSpinBox_move_2, 2, 1, 1, 1);

        dSpinBox_move_3 = new QDoubleSpinBox(gridLayoutWidget);
        dSpinBox_move_3->setObjectName(QString::fromUtf8("dSpinBox_move_3"));
        dSpinBox_move_3->setAlignment(Qt::AlignCenter);
        dSpinBox_move_3->setMinimum(0.100000000000000);
        dSpinBox_move_3->setMaximum(10.000000000000000);
        dSpinBox_move_3->setSingleStep(0.100000000000000);
        dSpinBox_move_3->setValue(0.100000000000000);

        gridLayout->addWidget(dSpinBox_move_3, 3, 1, 1, 1);

        change_move_y2 = new QPushButton(gridLayoutWidget);
        change_move_y2->setObjectName(QString::fromUtf8("change_move_y2"));

        gridLayout->addWidget(change_move_y2, 2, 2, 1, 1);

        change_move_z2 = new QPushButton(gridLayoutWidget);
        change_move_z2->setObjectName(QString::fromUtf8("change_move_z2"));

        gridLayout->addWidget(change_move_z2, 3, 2, 1, 1);

        change_move_z = new QPushButton(gridLayoutWidget);
        change_move_z->setObjectName(QString::fromUtf8("change_move_z"));

        gridLayout->addWidget(change_move_z, 3, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(1170, 880, 411, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        screenshot = new QPushButton(horizontalLayoutWidget);
        screenshot->setObjectName(QString::fromUtf8("screenshot"));

        horizontalLayout_2->addWidget(screenshot);

        start_image = new QPushButton(horizontalLayoutWidget);
        start_image->setObjectName(QString::fromUtf8("start_image"));

        horizontalLayout_2->addWidget(start_image);

        stop_image = new QPushButton(horizontalLayoutWidget);
        stop_image->setObjectName(QString::fromUtf8("stop_image"));

        horizontalLayout_2->addWidget(stop_image);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(1170, 780, 411, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        background_white = new QPushButton(horizontalLayoutWidget_2);
        background_white->setObjectName(QString::fromUtf8("background_white"));

        horizontalLayout_3->addWidget(background_white);

        change_vertex_color = new QPushButton(horizontalLayoutWidget_2);
        change_vertex_color->setObjectName(QString::fromUtf8("change_vertex_color"));

        horizontalLayout_3->addWidget(change_vertex_color);

        change_edge_color = new QPushButton(horizontalLayoutWidget_2);
        change_edge_color->setObjectName(QString::fromUtf8("change_edge_color"));

        horizontalLayout_3->addWidget(change_edge_color);

        label_of_inf_2 = new QLabel(centralwidget);
        label_of_inf_2->setObjectName(QString::fromUtf8("label_of_inf_2"));
        label_of_inf_2->setGeometry(QRect(1190, 80, 367, 31));
        label_of_inf = new QLabel(centralwidget);
        label_of_inf->setObjectName(QString::fromUtf8("label_of_inf"));
        label_of_inf->setGeometry(QRect(1190, 30, 361, 31));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(1170, 190, 411, 151));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        sBox_vertex_size = new QSpinBox(gridLayoutWidget_2);
        sBox_vertex_size->setObjectName(QString::fromUtf8("sBox_vertex_size"));
        sBox_vertex_size->setAlignment(Qt::AlignCenter);
        sBox_vertex_size->setMinimum(1);
        sBox_vertex_size->setMaximum(10);

        gridLayout_2->addWidget(sBox_vertex_size, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        sBox_line_size = new QSpinBox(gridLayoutWidget_2);
        sBox_line_size->setObjectName(QString::fromUtf8("sBox_line_size"));
        sBox_line_size->setAlignment(Qt::AlignCenter);
        sBox_line_size->setMinimum(1);
        sBox_line_size->setMaximum(10);

        gridLayout_2->addWidget(sBox_line_size, 3, 1, 1, 1);

        cBox_vertex_type = new QComboBox(gridLayoutWidget_2);
        cBox_vertex_type->addItem(QString());
        cBox_vertex_type->addItem(QString());
        cBox_vertex_type->addItem(QString());
        cBox_vertex_type->setObjectName(QString::fromUtf8("cBox_vertex_type"));

        gridLayout_2->addWidget(cBox_vertex_type, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        cBox_line_type = new QComboBox(gridLayoutWidget_2);
        cBox_line_type->addItem(QString());
        cBox_line_type->addItem(QString());
        cBox_line_type->addItem(QString());
        cBox_line_type->addItem(QString());
        cBox_line_type->addItem(QString());
        cBox_line_type->addItem(QString());
        cBox_line_type->setObjectName(QString::fromUtf8("cBox_line_type"));

        gridLayout_2->addWidget(cBox_line_type, 2, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(1170, 420, 411, 171));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        change_rot_y2 = new QPushButton(gridLayoutWidget_3);
        change_rot_y2->setObjectName(QString::fromUtf8("change_rot_y2"));

        gridLayout_3->addWidget(change_rot_y2, 1, 2, 1, 1);

        dSpinBox_rot = new QDoubleSpinBox(gridLayoutWidget_3);
        dSpinBox_rot->setObjectName(QString::fromUtf8("dSpinBox_rot"));
        dSpinBox_rot->setAlignment(Qt::AlignCenter);
        dSpinBox_rot->setMinimum(0.100000000000000);
        dSpinBox_rot->setMaximum(10.000000000000000);
        dSpinBox_rot->setSingleStep(0.100000000000000);
        dSpinBox_rot->setValue(0.100000000000000);

        gridLayout_3->addWidget(dSpinBox_rot, 0, 1, 1, 1);

        dSpinBox_rot_2 = new QDoubleSpinBox(gridLayoutWidget_3);
        dSpinBox_rot_2->setObjectName(QString::fromUtf8("dSpinBox_rot_2"));
        dSpinBox_rot_2->setAlignment(Qt::AlignCenter);
        dSpinBox_rot_2->setMinimum(0.100000000000000);
        dSpinBox_rot_2->setMaximum(10.000000000000000);
        dSpinBox_rot_2->setSingleStep(0.100000000000000);
        dSpinBox_rot_2->setValue(0.100000000000000);

        gridLayout_3->addWidget(dSpinBox_rot_2, 1, 1, 1, 1);

        change_rot_x = new QPushButton(gridLayoutWidget_3);
        change_rot_x->setObjectName(QString::fromUtf8("change_rot_x"));

        gridLayout_3->addWidget(change_rot_x, 0, 0, 1, 1);

        change_rot_y = new QPushButton(gridLayoutWidget_3);
        change_rot_y->setObjectName(QString::fromUtf8("change_rot_y"));

        gridLayout_3->addWidget(change_rot_y, 1, 0, 1, 1);

        change_rot_x2 = new QPushButton(gridLayoutWidget_3);
        change_rot_x2->setObjectName(QString::fromUtf8("change_rot_x2"));

        gridLayout_3->addWidget(change_rot_x2, 0, 2, 1, 1);

        change_rot_z = new QPushButton(gridLayoutWidget_3);
        change_rot_z->setObjectName(QString::fromUtf8("change_rot_z"));

        gridLayout_3->addWidget(change_rot_z, 2, 0, 1, 1);

        change_rot_z2 = new QPushButton(gridLayoutWidget_3);
        change_rot_z2->setObjectName(QString::fromUtf8("change_rot_z2"));

        gridLayout_3->addWidget(change_rot_z2, 2, 2, 1, 1);

        dSpinBox_rot_3 = new QDoubleSpinBox(gridLayoutWidget_3);
        dSpinBox_rot_3->setObjectName(QString::fromUtf8("dSpinBox_rot_3"));
        dSpinBox_rot_3->setAlignment(Qt::AlignCenter);
        dSpinBox_rot_3->setMinimum(0.100000000000000);
        dSpinBox_rot_3->setMaximum(10.000000000000000);
        dSpinBox_rot_3->setSingleStep(0.100000000000000);
        dSpinBox_rot_3->setValue(0.100000000000000);

        gridLayout_3->addWidget(dSpinBox_rot_3, 2, 1, 1, 1);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(1170, 360, 411, 61));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        change_zoom = new QPushButton(horizontalLayoutWidget_4);
        change_zoom->setObjectName(QString::fromUtf8("change_zoom"));

        horizontalLayout_4->addWidget(change_zoom);

        dSpinBox_zoom = new QDoubleSpinBox(horizontalLayoutWidget_4);
        dSpinBox_zoom->setObjectName(QString::fromUtf8("dSpinBox_zoom"));
        dSpinBox_zoom->setAlignment(Qt::AlignCenter);
        dSpinBox_zoom->setMinimum(0.100000000000000);
        dSpinBox_zoom->setMaximum(10.000000000000000);
        dSpinBox_zoom->setSingleStep(0.100000000000000);
        dSpinBox_zoom->setValue(0.100000000000000);

        horizontalLayout_4->addWidget(dSpinBox_zoom);

        change_zoom_2 = new QPushButton(horizontalLayoutWidget_4);
        change_zoom_2->setObjectName(QString::fromUtf8("change_zoom_2"));

        horizontalLayout_4->addWidget(change_zoom_2);

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(1230, 130, 311, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(horizontalLayoutWidget_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QFont font;
        font.setPointSize(15);
        radioButton->setFont(font);

        horizontalLayout_5->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);

        horizontalLayout_5->addWidget(radioButton_2);

        view->setCentralWidget(centralwidget);
        menubar = new QMenuBar(view);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1600, 27));
        view->setMenuBar(menubar);

        retranslateUi(view);

        cBox_line_type->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(view);
    } // setupUi

    void retranslateUi(QMainWindow *view)
    {
        view->setWindowTitle(QCoreApplication::translate("view", "3D viewer v2.0", nullptr));
        pushButton_25->setText(QCoreApplication::translate("view", "Screenshot", nullptr));
        download_obj->setText(QCoreApplication::translate("view", "Open .obj", nullptr));
        change_move_y->setText(QCoreApplication::translate("view", "Move Y +", nullptr));
        change_move_x->setText(QCoreApplication::translate("view", "Move X +", nullptr));
        change_move_x2->setText(QCoreApplication::translate("view", "Move X -", nullptr));
        change_move_y2->setText(QCoreApplication::translate("view", "Move Y -", nullptr));
        change_move_z2->setText(QCoreApplication::translate("view", "Move Z -", nullptr));
        change_move_z->setText(QCoreApplication::translate("view", "Move Z +", nullptr));
        screenshot->setText(QCoreApplication::translate("view", "Screenshot", nullptr));
        start_image->setText(QCoreApplication::translate("view", "Start GIF", nullptr));
        stop_image->setText(QCoreApplication::translate("view", "Stop GIF", nullptr));
        background_white->setText(QCoreApplication::translate("view", "Background\n"
" color", nullptr));
        change_vertex_color->setText(QCoreApplication::translate("view", "Vertex\n"
" color", nullptr));
        change_edge_color->setText(QCoreApplication::translate("view", "Line\n"
"Color", nullptr));
        label_of_inf_2->setText(QCoreApplication::translate("view", "Number of polygons: ", nullptr));
        label_of_inf->setText(QCoreApplication::translate("view", "Number of vertex: ", nullptr));
        label_3->setText(QCoreApplication::translate("view", "Vertex Type", nullptr));
        cBox_vertex_type->setItemText(0, QCoreApplication::translate("view", "None", nullptr));
        cBox_vertex_type->setItemText(1, QCoreApplication::translate("view", "Round", nullptr));
        cBox_vertex_type->setItemText(2, QCoreApplication::translate("view", "Square", nullptr));

        label_2->setText(QCoreApplication::translate("view", "Vertex Size", nullptr));
        label_5->setText(QCoreApplication::translate("view", "Line Size", nullptr));
        label_4->setText(QCoreApplication::translate("view", "Line Type", nullptr));
        cBox_line_type->setItemText(0, QCoreApplication::translate("view", "NoPan", nullptr));
        cBox_line_type->setItemText(1, QCoreApplication::translate("view", "SolidLine", nullptr));
        cBox_line_type->setItemText(2, QCoreApplication::translate("view", "DashLine", nullptr));
        cBox_line_type->setItemText(3, QCoreApplication::translate("view", "DotLine", nullptr));
        cBox_line_type->setItemText(4, QCoreApplication::translate("view", "DashDotLine", nullptr));
        cBox_line_type->setItemText(5, QCoreApplication::translate("view", "DashDotDotLine", nullptr));

        change_rot_y2->setText(QCoreApplication::translate("view", "Rotation Y -", nullptr));
        change_rot_x->setText(QCoreApplication::translate("view", "Rotation X +", nullptr));
        change_rot_y->setText(QCoreApplication::translate("view", "Rotation Y +", nullptr));
        change_rot_x2->setText(QCoreApplication::translate("view", "Rotation X -", nullptr));
        change_rot_z->setText(QCoreApplication::translate("view", "Rotation Z +", nullptr));
        change_rot_z2->setText(QCoreApplication::translate("view", "Rotation Z -", nullptr));
        change_zoom->setText(QCoreApplication::translate("view", "Zoom +", nullptr));
        change_zoom_2->setText(QCoreApplication::translate("view", "Zoom -", nullptr));
        radioButton->setText(QCoreApplication::translate("view", "Central", nullptr));
        radioButton_2->setText(QCoreApplication::translate("view", "Parellel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view: public Ui_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
