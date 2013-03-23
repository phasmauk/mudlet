/********************************************************************************
** Form generated from reading UI file 'room_exits.ui'
**
** Created: Tue Mar 19 20:57:25 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM_EXITS_H
#define UI_ROOM_EXITS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include "exitstreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_roomExits
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *lnw;
    QLineEdit *nw;
    QPushButton *ln;
    QLineEdit *n;
    QPushButton *lne;
    QLineEdit *ne;
    QPushButton *lup;
    QLineEdit *up;
    QPushButton *lw;
    QLineEdit *w;
    QPushButton *le;
    QLineEdit *e;
    QSpacerItem *horizontalSpacer;
    QPushButton *ldown;
    QLineEdit *down;
    QPushButton *lsw;
    QLineEdit *sw;
    QPushButton *ls;
    QLineEdit *s;
    QPushButton *lse;
    QLineEdit *se;
    QPushButton *lin;
    QLineEdit *in;
    QPushButton *lout;
    QLineEdit *out;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    ExitsTreeWidget *specialExits;
    QPushButton *addSpecialExit;
    QPushButton *saveButton;
    QPushButton *pushButton_14;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *roomExits)
    {
        if (roomExits->objectName().isEmpty())
            roomExits->setObjectName(QString::fromUtf8("roomExits"));
        roomExits->resize(747, 486);
        gridLayout = new QGridLayout(roomExits);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(roomExits);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lnw = new QPushButton(groupBox);
        lnw->setObjectName(QString::fromUtf8("lnw"));
        lnw->setFocusPolicy(Qt::NoFocus);
        lnw->setCheckable(true);

        gridLayout_2->addWidget(lnw, 0, 0, 1, 1);

        nw = new QLineEdit(groupBox);
        nw->setObjectName(QString::fromUtf8("nw"));

        gridLayout_2->addWidget(nw, 0, 1, 1, 1);

        ln = new QPushButton(groupBox);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setFocusPolicy(Qt::NoFocus);
        ln->setCheckable(true);

        gridLayout_2->addWidget(ln, 0, 2, 1, 1);

        n = new QLineEdit(groupBox);
        n->setObjectName(QString::fromUtf8("n"));

        gridLayout_2->addWidget(n, 0, 3, 1, 1);

        lne = new QPushButton(groupBox);
        lne->setObjectName(QString::fromUtf8("lne"));
        lne->setFocusPolicy(Qt::NoFocus);
        lne->setCheckable(true);

        gridLayout_2->addWidget(lne, 0, 4, 1, 1);

        ne = new QLineEdit(groupBox);
        ne->setObjectName(QString::fromUtf8("ne"));

        gridLayout_2->addWidget(ne, 0, 5, 1, 1);

        lup = new QPushButton(groupBox);
        lup->setObjectName(QString::fromUtf8("lup"));
        lup->setFocusPolicy(Qt::NoFocus);
        lup->setCheckable(true);

        gridLayout_2->addWidget(lup, 0, 7, 1, 1);

        up = new QLineEdit(groupBox);
        up->setObjectName(QString::fromUtf8("up"));

        gridLayout_2->addWidget(up, 0, 8, 1, 1);

        lw = new QPushButton(groupBox);
        lw->setObjectName(QString::fromUtf8("lw"));
        lw->setFocusPolicy(Qt::NoFocus);
        lw->setCheckable(true);

        gridLayout_2->addWidget(lw, 1, 0, 1, 1);

        w = new QLineEdit(groupBox);
        w->setObjectName(QString::fromUtf8("w"));

        gridLayout_2->addWidget(w, 1, 1, 1, 1);

        le = new QPushButton(groupBox);
        le->setObjectName(QString::fromUtf8("le"));
        le->setFocusPolicy(Qt::NoFocus);
        le->setCheckable(true);

        gridLayout_2->addWidget(le, 1, 4, 1, 1);

        e = new QLineEdit(groupBox);
        e->setObjectName(QString::fromUtf8("e"));

        gridLayout_2->addWidget(e, 1, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 6, 1, 1);

        ldown = new QPushButton(groupBox);
        ldown->setObjectName(QString::fromUtf8("ldown"));
        ldown->setFocusPolicy(Qt::NoFocus);
        ldown->setCheckable(true);

        gridLayout_2->addWidget(ldown, 1, 7, 1, 1);

        down = new QLineEdit(groupBox);
        down->setObjectName(QString::fromUtf8("down"));

        gridLayout_2->addWidget(down, 1, 8, 1, 1);

        lsw = new QPushButton(groupBox);
        lsw->setObjectName(QString::fromUtf8("lsw"));
        lsw->setFocusPolicy(Qt::NoFocus);
        lsw->setCheckable(true);

        gridLayout_2->addWidget(lsw, 2, 0, 1, 1);

        sw = new QLineEdit(groupBox);
        sw->setObjectName(QString::fromUtf8("sw"));

        gridLayout_2->addWidget(sw, 2, 1, 1, 1);

        ls = new QPushButton(groupBox);
        ls->setObjectName(QString::fromUtf8("ls"));
        ls->setFocusPolicy(Qt::NoFocus);
        ls->setCheckable(true);

        gridLayout_2->addWidget(ls, 2, 2, 1, 1);

        s = new QLineEdit(groupBox);
        s->setObjectName(QString::fromUtf8("s"));

        gridLayout_2->addWidget(s, 2, 3, 1, 1);

        lse = new QPushButton(groupBox);
        lse->setObjectName(QString::fromUtf8("lse"));
        lse->setFocusPolicy(Qt::NoFocus);
        lse->setCheckable(true);

        gridLayout_2->addWidget(lse, 2, 4, 1, 1);

        se = new QLineEdit(groupBox);
        se->setObjectName(QString::fromUtf8("se"));

        gridLayout_2->addWidget(se, 2, 5, 1, 1);

        lin = new QPushButton(groupBox);
        lin->setObjectName(QString::fromUtf8("lin"));
        lin->setFocusPolicy(Qt::NoFocus);
        lin->setCheckable(true);

        gridLayout_2->addWidget(lin, 2, 7, 1, 1);

        in = new QLineEdit(groupBox);
        in->setObjectName(QString::fromUtf8("in"));

        gridLayout_2->addWidget(in, 2, 8, 1, 1);

        lout = new QPushButton(groupBox);
        lout->setObjectName(QString::fromUtf8("lout"));
        lout->setFocusPolicy(Qt::NoFocus);
        lout->setCheckable(true);

        gridLayout_2->addWidget(lout, 3, 7, 1, 1);

        out = new QLineEdit(groupBox);
        out->setObjectName(QString::fromUtf8("out"));

        gridLayout_2->addWidget(out, 3, 8, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 4);

        groupBox_2 = new QGroupBox(roomExits);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        specialExits = new ExitsTreeWidget(groupBox_2);
        specialExits->setObjectName(QString::fromUtf8("specialExits"));
        specialExits->setRootIsDecorated(false);
        specialExits->setItemsExpandable(false);
        specialExits->setColumnCount(3);
        specialExits->header()->setStretchLastSection(true);

        gridLayout_3->addWidget(specialExits, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 4);

        addSpecialExit = new QPushButton(roomExits);
        addSpecialExit->setObjectName(QString::fromUtf8("addSpecialExit"));

        gridLayout->addWidget(addSpecialExit, 2, 0, 1, 1);

        saveButton = new QPushButton(roomExits);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout->addWidget(saveButton, 2, 2, 1, 1);

        pushButton_14 = new QPushButton(roomExits);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout->addWidget(pushButton_14, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        QWidget::setTabOrder(addSpecialExit, saveButton);
        QWidget::setTabOrder(saveButton, pushButton_14);

        retranslateUi(roomExits);
        QObject::connect(lnw, SIGNAL(clicked(bool)), nw, SLOT(setDisabled(bool)));
        QObject::connect(ln, SIGNAL(clicked(bool)), n, SLOT(setDisabled(bool)));
        QObject::connect(lne, SIGNAL(clicked(bool)), ne, SLOT(setDisabled(bool)));
        QObject::connect(lup, SIGNAL(clicked(bool)), up, SLOT(setDisabled(bool)));
        QObject::connect(lw, SIGNAL(clicked(bool)), w, SLOT(setDisabled(bool)));
        QObject::connect(le, SIGNAL(clicked(bool)), e, SLOT(setDisabled(bool)));
        QObject::connect(ldown, SIGNAL(clicked(bool)), down, SLOT(setDisabled(bool)));
        QObject::connect(lsw, SIGNAL(clicked(bool)), sw, SLOT(setDisabled(bool)));
        QObject::connect(ls, SIGNAL(clicked(bool)), s, SLOT(setDisabled(bool)));
        QObject::connect(lse, SIGNAL(clicked(bool)), se, SLOT(setDisabled(bool)));
        QObject::connect(lin, SIGNAL(clicked(bool)), in, SLOT(setDisabled(bool)));
        QObject::connect(lout, SIGNAL(clicked(bool)), out, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_14, SIGNAL(clicked()), roomExits, SLOT(reject()));

        QMetaObject::connectSlotsByName(roomExits);
    } // setupUi

    void retranslateUi(QDialog *roomExits)
    {
        roomExits->setWindowTitle(QApplication::translate("roomExits", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("roomExits", "General exits", 0, QApplication::UnicodeUTF8));
        lnw->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nw->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the northwest here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nw->setPlaceholderText(QApplication::translate("roomExits", "NW exit...", 0, QApplication::UnicodeUTF8));
        ln->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        n->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the north here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        n->setPlaceholderText(QApplication::translate("roomExits", "N exit...", 0, QApplication::UnicodeUTF8));
        lne->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ne->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the northeast here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ne->setPlaceholderText(QApplication::translate("roomExits", "NE exit...", 0, QApplication::UnicodeUTF8));
        lup->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        up->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the up here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        up->setPlaceholderText(QApplication::translate("roomExits", "Up exit...", 0, QApplication::UnicodeUTF8));
        lw->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        w->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the west here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        w->setText(QString());
        w->setPlaceholderText(QApplication::translate("roomExits", "W exit...", 0, QApplication::UnicodeUTF8));
        le->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        e->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the east here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        e->setPlaceholderText(QApplication::translate("roomExits", "E exit...", 0, QApplication::UnicodeUTF8));
        ldown->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        down->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the down here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        down->setPlaceholderText(QApplication::translate("roomExits", "Down exit...", 0, QApplication::UnicodeUTF8));
        lsw->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sw->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the southwest here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sw->setPlaceholderText(QApplication::translate("roomExits", "SW exit...", 0, QApplication::UnicodeUTF8));
        ls->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        s->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the south here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        s->setPlaceholderText(QApplication::translate("roomExits", "S exit...", 0, QApplication::UnicodeUTF8));
        lse->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        se->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the southeast here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        se->setPlaceholderText(QApplication::translate("roomExits", "SE exit...", 0, QApplication::UnicodeUTF8));
        lin->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        in->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the in here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        in->setPlaceholderText(QApplication::translate("roomExits", "In exit...", 0, QApplication::UnicodeUTF8));
        lout->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        out->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the out here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        out->setPlaceholderText(QApplication::translate("roomExits", "Out exit...", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("roomExits", "Special exits", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = specialExits->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("roomExits", "Command or script (Lua scripts need to be prefixed with \"script:\")", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("roomExits", "Exit room ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("roomExits", "Locked?", 0, QApplication::UnicodeUTF8));
        addSpecialExit->setText(QApplication::translate("roomExits", "add special exit", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("roomExits", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("roomExits", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class roomExits: public Ui_roomExits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM_EXITS_H
