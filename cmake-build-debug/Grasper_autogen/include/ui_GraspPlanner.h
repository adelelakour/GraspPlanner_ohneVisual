/********************************************************************************
** Form generated from reading UI file 'GraspPlanner.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRASPPLANNER_H
#define UI_GRASPPLANNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraspPlanner
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frameViewer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxColModel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QSpinBox *spinBoxGraspNumber;
    QLabel *label_12;
    QLabel *label;
    QSpinBox *spinBoxTimeOut;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBoxQuality;
    QCheckBox *checkBoxFoceClosure;
    QCheckBox *checkBoxPropagateJointValues;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonPlanBatch;
    QPushButton *pushButtonOpen;
    QLabel *label_10;
    QCheckBox *checkBoxGrasps;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonPlan;
    QPushButton *pushButtonLoadObject;
    QPushButton *pushButtonClose;
    QLabel *labelInfo;
    QPushButton *pushButtonSave;
    QCheckBox *checkBoxHighlight;
    QCheckBox *checkBoxCones;
    QComboBox *comboBoxObject;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GraspPlanner)
    {
        if (GraspPlanner->objectName().isEmpty())
            GraspPlanner->setObjectName(QString::fromUtf8("GraspPlanner"));
        GraspPlanner->resize(1079, 819);
        centralwidget = new QWidget(GraspPlanner);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frameViewer = new QFrame(centralwidget);
        frameViewer->setObjectName(QString::fromUtf8("frameViewer"));
        frameViewer->setFrameShape(QFrame::StyledPanel);
        frameViewer->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frameViewer, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(200, 16777215));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBoxColModel = new QCheckBox(groupBox);
        checkBoxColModel->setObjectName(QString::fromUtf8("checkBoxColModel"));

        gridLayout_2->addWidget(checkBoxColModel, 8, 0, 1, 2);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        spinBoxGraspNumber = new QSpinBox(groupBox_2);
        spinBoxGraspNumber->setObjectName(QString::fromUtf8("spinBoxGraspNumber"));
        spinBoxGraspNumber->setMinimum(1);
        spinBoxGraspNumber->setMaximum(10000000);

        gridLayout_3->addWidget(spinBoxGraspNumber, 1, 0, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 3, 0, 1, 1);

        spinBoxTimeOut = new QSpinBox(groupBox_2);
        spinBoxTimeOut->setObjectName(QString::fromUtf8("spinBoxTimeOut"));
        spinBoxTimeOut->setMinimum(0);
        spinBoxTimeOut->setMaximum(10000000);
        spinBoxTimeOut->setValue(30);

        gridLayout_3->addWidget(spinBoxTimeOut, 4, 0, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 5, 0, 1, 1);

        doubleSpinBoxQuality = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxQuality->setObjectName(QString::fromUtf8("doubleSpinBoxQuality"));
        doubleSpinBoxQuality->setDecimals(3);
        doubleSpinBoxQuality->setMaximum(1.000000000000000);
        doubleSpinBoxQuality->setSingleStep(0.001000000000000);
        doubleSpinBoxQuality->setValue(0.010000000000000);

        gridLayout_3->addWidget(doubleSpinBoxQuality, 6, 0, 1, 1);

        checkBoxFoceClosure = new QCheckBox(groupBox_2);
        checkBoxFoceClosure->setObjectName(QString::fromUtf8("checkBoxFoceClosure"));
        checkBoxFoceClosure->setChecked(true);

        gridLayout_3->addWidget(checkBoxFoceClosure, 7, 0, 1, 1);

        checkBoxPropagateJointValues = new QCheckBox(groupBox_2);
        checkBoxPropagateJointValues->setObjectName(QString::fromUtf8("checkBoxPropagateJointValues"));

        gridLayout_3->addWidget(checkBoxPropagateJointValues, 8, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 13, 0, 1, 1);

        pushButtonPlanBatch = new QPushButton(groupBox);
        pushButtonPlanBatch->setObjectName(QString::fromUtf8("pushButtonPlanBatch"));

        gridLayout_2->addWidget(pushButtonPlanBatch, 4, 1, 1, 1);

        pushButtonOpen = new QPushButton(groupBox);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));

        gridLayout_2->addWidget(pushButtonOpen, 5, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);

        gridLayout_2->addWidget(label_10, 7, 0, 1, 2);

        checkBoxGrasps = new QCheckBox(groupBox);
        checkBoxGrasps->setObjectName(QString::fromUtf8("checkBoxGrasps"));

        gridLayout_2->addWidget(checkBoxGrasps, 10, 0, 1, 2);

        pushButtonReset = new QPushButton(groupBox);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));

        gridLayout_2->addWidget(pushButtonReset, 0, 0, 1, 2);

        pushButtonPlan = new QPushButton(groupBox);
        pushButtonPlan->setObjectName(QString::fromUtf8("pushButtonPlan"));

        gridLayout_2->addWidget(pushButtonPlan, 4, 0, 1, 1);

        pushButtonLoadObject = new QPushButton(groupBox);
        pushButtonLoadObject->setObjectName(QString::fromUtf8("pushButtonLoadObject"));

        gridLayout_2->addWidget(pushButtonLoadObject, 1, 0, 1, 2);

        pushButtonClose = new QPushButton(groupBox);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));

        gridLayout_2->addWidget(pushButtonClose, 5, 0, 1, 1);

        labelInfo = new QLabel(groupBox);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(labelInfo, 12, 0, 1, 2);

        pushButtonSave = new QPushButton(groupBox);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        gridLayout_2->addWidget(pushButtonSave, 6, 0, 1, 2);

        checkBoxHighlight = new QCheckBox(groupBox);
        checkBoxHighlight->setObjectName(QString::fromUtf8("checkBoxHighlight"));

        gridLayout_2->addWidget(checkBoxHighlight, 11, 0, 1, 2);

        checkBoxCones = new QCheckBox(groupBox);
        checkBoxCones->setObjectName(QString::fromUtf8("checkBoxCones"));

        gridLayout_2->addWidget(checkBoxCones, 9, 0, 1, 2);

        comboBoxObject = new QComboBox(groupBox);
        comboBoxObject->setObjectName(QString::fromUtf8("comboBoxObject"));

        gridLayout_2->addWidget(comboBoxObject, 2, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        GraspPlanner->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GraspPlanner);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1079, 22));
        GraspPlanner->setMenuBar(menubar);
        statusbar = new QStatusBar(GraspPlanner);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GraspPlanner->setStatusBar(statusbar);

        retranslateUi(GraspPlanner);

        QMetaObject::connectSlotsByName(GraspPlanner);
    } // setupUi

    void retranslateUi(QMainWindow *GraspPlanner)
    {
        GraspPlanner->setWindowTitle(QApplication::translate("GraspPlanner", "GraspStudio - GraspPlanner", nullptr));
        groupBox->setTitle(QString());
        checkBoxColModel->setText(QApplication::translate("GraspPlanner", "Collision Model", nullptr));
        groupBox_2->setTitle(QApplication::translate("GraspPlanner", "Grasp Planning Options", nullptr));
        label_11->setText(QApplication::translate("GraspPlanner", "Number of Grasps", nullptr));
        label_12->setText(QApplication::translate("GraspPlanner", "Timeout, seconds", nullptr));
        label->setText(QApplication::translate("GraspPlanner", " (0=endless)", nullptr));
        label_13->setText(QApplication::translate("GraspPlanner", "Min quality", nullptr));
        checkBoxFoceClosure->setText(QApplication::translate("GraspPlanner", "Force closure", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxPropagateJointValues->setToolTip(QApplication::translate("GraspPlanner", "This might lead to infinite loops", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxPropagateJointValues->setText(QApplication::translate("GraspPlanner", "Propagate joints", nullptr));
        pushButtonPlanBatch->setText(QApplication::translate("GraspPlanner", "Plan batch", nullptr));
        pushButtonOpen->setText(QApplication::translate("GraspPlanner", "Open", nullptr));
        label_10->setText(QApplication::translate("GraspPlanner", "Visualization", nullptr));
        checkBoxGrasps->setText(QApplication::translate("GraspPlanner", "Show grasps", nullptr));
        pushButtonReset->setText(QApplication::translate("GraspPlanner", "Reset", nullptr));
        pushButtonPlan->setText(QApplication::translate("GraspPlanner", "Plan grasp(s)", nullptr));
        pushButtonLoadObject->setText(QApplication::translate("GraspPlanner", "Load Object", nullptr));
        pushButtonClose->setText(QApplication::translate("GraspPlanner", "Close", nullptr));
        labelInfo->setText(QApplication::translate("GraspPlanner", "Grasps: 0", nullptr));
        pushButtonSave->setText(QApplication::translate("GraspPlanner", "Save", nullptr));
        checkBoxHighlight->setText(QApplication::translate("GraspPlanner", "Highlight", nullptr));
        checkBoxCones->setText(QApplication::translate("GraspPlanner", "Friction Cones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraspPlanner: public Ui_GraspPlanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRASPPLANNER_H
