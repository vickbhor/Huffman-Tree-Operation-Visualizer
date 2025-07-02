/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QSplitter *splitter;
    QWidget *leftPanel;
    QVBoxLayout *leftLayout;
    QGroupBox *inputGroup;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *fileIOLayout;
    QPushButton *openFileButton;
    QPushButton *saveEncodedFileButton;
    QTextEdit *inputTextEdit;
    QHBoxLayout *buttonLayout;
    QPushButton *buildTreeButton;
    QPushButton *encodeButton;
    QPushButton *decodeButton;
    QGroupBox *encodedGroup;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *outputTextEdit;
    QGroupBox *decodedGroup;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *decodedTextEdit;
    QGroupBox *statsGroup;
    QHBoxLayout *horizontalLayout;
    QLabel *entropyLabelTitle;
    QLabel *entropyLabel;
    QLabel *entropyUnit;
    QSpacerItem *horizontalSpacer;
    QLabel *ratioLabelTitle;
    QLabel *ratioLabel;
    QLabel *ratioUnit;
    QWidget *rightPanel;
    QVBoxLayout *rightLayout;
    QGroupBox *treeViewGroup;
    QVBoxLayout *verticalLayout_5;
    QGraphicsView *graphicsView;
    QHBoxLayout *treeControlsLayout;
    QPushButton *zoomInButton;
    QPushButton *zoomOutButton;
    QPushButton *fitViewButton;
    QGroupBox *legendGroup;
    QVBoxLayout *legendLayout;
    QLabel *legendLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 927);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"  background-color: #f5f7fa;\n"
"}\n"
"QWidget#centralwidget {\n"
"background-color: #f5f7fa;\n"
"}\n"
"QTextEdit, QLineEdit {\n"
"border: 1px solid #ddd;\n"
"border-radius: 4px;\n"
"padding: 8px;\n"
"background-color: white;\n"
"selection-background-color: #4a6fa5;\n"
"}\n"
"QTextEdit:focus, QLineEdit:focus {\n"
"border: 1px solid #4a6fa5;\n"
"}\n"
"QPushButton {\n"
"background-color: #4a6fa5;\n"
"color: white;\n"
"border: none;\n"
"border-radius: 4px;\n"
"padding: 8px 16px;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #385a8a;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: #2d4a73;\n"
"}\n"
"QPushButton#encodeButton {\n"
"background-color: #28a745;\n"
"}\n"
"QPushButton#encodeButton:hover {\n"
"background-color: #218838;\n"
"}\n"
"QPushButton#decodeButton {\n"
"background-color: #17a2b8;\n"
"}\n"
"QPushButton#decodeButton:hover {\n"
"background-color: #138496;\n"
"}\n"
"QLabel {\n"
"color: #333;\n"
"font-weight: bold;\n"
"}\n"
"QGroupBox {\n"
"border: 1p"
                        "x solid #ddd;\n"
"border-radius: 4px;\n"
"margin-top: 12px;\n"
"background-color: white;\n"
"padding: 8px;\n"
"}\n"
"QGroupBox::title {\n"
"subcontrol-origin: margin;\n"
"left: 10px;\n"
"padding: 0 5px 0 5px;\n"
"color: #4a6fa5;\n"
"}\n"
"QSplitter::handle {\n"
"background-color: #ddd;\n"
"width: 2px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(16, 16, 16, 16);
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("color: #4a6fa5;"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setHandleWidth(6);
        splitter->setChildrenCollapsible(false);
        leftPanel = new QWidget(splitter);
        leftPanel->setObjectName("leftPanel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftPanel->sizePolicy().hasHeightForWidth());
        leftPanel->setSizePolicy(sizePolicy);
        leftLayout = new QVBoxLayout(leftPanel);
        leftLayout->setObjectName("leftLayout");
        leftLayout->setContentsMargins(0, 0, 0, 0);
        inputGroup = new QGroupBox(leftPanel);
        inputGroup->setObjectName("inputGroup");
        verticalLayout_2 = new QVBoxLayout(inputGroup);
        verticalLayout_2->setObjectName("verticalLayout_2");
        fileIOLayout = new QHBoxLayout();
        fileIOLayout->setObjectName("fileIOLayout");
        openFileButton = new QPushButton(inputGroup);
        openFileButton->setObjectName("openFileButton");
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(85, 85, 127, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(127, 127, 190, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(106, 106, 158, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(42, 42, 63, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(57, 57, 85, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 127));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush8);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush6);
        QBrush brush9(QColor(42, 42, 63, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(60, 60, 89, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        openFileButton->setPalette(palette);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        openFileButton->setIcon(icon);

        fileIOLayout->addWidget(openFileButton);

        saveEncodedFileButton = new QPushButton(inputGroup);
        saveEncodedFileButton->setObjectName("saveEncodedFileButton");
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        QBrush brush11(QColor(74, 111, 165, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush11);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush4);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush11);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush10);
#endif
        saveEncodedFileButton->setPalette(palette1);
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        saveEncodedFileButton->setIcon(icon1);

        fileIOLayout->addWidget(saveEncodedFileButton);


        verticalLayout_2->addLayout(fileIOLayout);

        inputTextEdit = new QTextEdit(inputGroup);
        inputTextEdit->setObjectName("inputTextEdit");
        inputTextEdit->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(inputTextEdit);


        leftLayout->addWidget(inputGroup);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(10);
        buttonLayout->setObjectName("buttonLayout");
        buildTreeButton = new QPushButton(leftPanel);
        buildTreeButton->setObjectName("buildTreeButton");

        buttonLayout->addWidget(buildTreeButton);

        encodeButton = new QPushButton(leftPanel);
        encodeButton->setObjectName("encodeButton");

        buttonLayout->addWidget(encodeButton);

        decodeButton = new QPushButton(leftPanel);
        decodeButton->setObjectName("decodeButton");

        buttonLayout->addWidget(decodeButton);


        leftLayout->addLayout(buttonLayout);

        encodedGroup = new QGroupBox(leftPanel);
        encodedGroup->setObjectName("encodedGroup");
        verticalLayout_3 = new QVBoxLayout(encodedGroup);
        verticalLayout_3->setObjectName("verticalLayout_3");
        outputTextEdit = new QTextEdit(encodedGroup);
        outputTextEdit->setObjectName("outputTextEdit");
        outputTextEdit->setMinimumSize(QSize(0, 80));
        outputTextEdit->setStyleSheet(QString::fromUtf8("background-color: #f8f9fa;"));
        outputTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(outputTextEdit);


        leftLayout->addWidget(encodedGroup);

        decodedGroup = new QGroupBox(leftPanel);
        decodedGroup->setObjectName("decodedGroup");
        verticalLayout_4 = new QVBoxLayout(decodedGroup);
        verticalLayout_4->setObjectName("verticalLayout_4");
        decodedTextEdit = new QTextEdit(decodedGroup);
        decodedTextEdit->setObjectName("decodedTextEdit");
        decodedTextEdit->setMinimumSize(QSize(0, 80));
        decodedTextEdit->setStyleSheet(QString::fromUtf8("background-color: #f8f9fa;"));
        decodedTextEdit->setReadOnly(true);

        verticalLayout_4->addWidget(decodedTextEdit);


        leftLayout->addWidget(decodedGroup);

        statsGroup = new QGroupBox(leftPanel);
        statsGroup->setObjectName("statsGroup");
        statsGroup->setStyleSheet(QString::fromUtf8("QGroupBox#statsGroup {\n"
"background-color: #e8f0ff;\n"
"}"));
        horizontalLayout = new QHBoxLayout(statsGroup);
        horizontalLayout->setObjectName("horizontalLayout");
        entropyLabelTitle = new QLabel(statsGroup);
        entropyLabelTitle->setObjectName("entropyLabelTitle");

        horizontalLayout->addWidget(entropyLabelTitle);

        entropyLabel = new QLabel(statsGroup);
        entropyLabel->setObjectName("entropyLabel");
        entropyLabel->setStyleSheet(QString::fromUtf8("color: #4a6fa5;\n"
"font-size: 14px;"));

        horizontalLayout->addWidget(entropyLabel);

        entropyUnit = new QLabel(statsGroup);
        entropyUnit->setObjectName("entropyUnit");

        horizontalLayout->addWidget(entropyUnit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ratioLabelTitle = new QLabel(statsGroup);
        ratioLabelTitle->setObjectName("ratioLabelTitle");

        horizontalLayout->addWidget(ratioLabelTitle);

        ratioLabel = new QLabel(statsGroup);
        ratioLabel->setObjectName("ratioLabel");
        ratioLabel->setStyleSheet(QString::fromUtf8("color: #4a6fa5;\n"
"font-size: 14px;"));

        horizontalLayout->addWidget(ratioLabel);

        ratioUnit = new QLabel(statsGroup);
        ratioUnit->setObjectName("ratioUnit");

        horizontalLayout->addWidget(ratioUnit);


        leftLayout->addWidget(statsGroup);

        splitter->addWidget(leftPanel);
        rightPanel = new QWidget(splitter);
        rightPanel->setObjectName("rightPanel");
        sizePolicy.setHeightForWidth(rightPanel->sizePolicy().hasHeightForWidth());
        rightPanel->setSizePolicy(sizePolicy);
        rightLayout = new QVBoxLayout(rightPanel);
        rightLayout->setObjectName("rightLayout");
        rightLayout->setContentsMargins(0, 0, 0, 0);
        treeViewGroup = new QGroupBox(rightPanel);
        treeViewGroup->setObjectName("treeViewGroup");
        verticalLayout_5 = new QVBoxLayout(treeViewGroup);
        verticalLayout_5->setObjectName("verticalLayout_5");
        graphicsView = new QGraphicsView(treeViewGroup);
        graphicsView->setObjectName("graphicsView");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(300, 600));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: white;"));

        verticalLayout_5->addWidget(graphicsView);

        treeControlsLayout = new QHBoxLayout();
        treeControlsLayout->setObjectName("treeControlsLayout");
        zoomInButton = new QPushButton(treeViewGroup);
        zoomInButton->setObjectName("zoomInButton");

        treeControlsLayout->addWidget(zoomInButton);

        zoomOutButton = new QPushButton(treeViewGroup);
        zoomOutButton->setObjectName("zoomOutButton");

        treeControlsLayout->addWidget(zoomOutButton);

        fitViewButton = new QPushButton(treeViewGroup);
        fitViewButton->setObjectName("fitViewButton");

        treeControlsLayout->addWidget(fitViewButton);


        verticalLayout_5->addLayout(treeControlsLayout);


        rightLayout->addWidget(treeViewGroup);

        legendGroup = new QGroupBox(rightPanel);
        legendGroup->setObjectName("legendGroup");
        legendGroup->setStyleSheet(QString::fromUtf8("QGroupBox#legendGroup {\n"
"background-color: #f0f8ff;\n"
"}"));
        legendLayout = new QVBoxLayout(legendGroup);
        legendLayout->setObjectName("legendLayout");
        legendLabel = new QLabel(legendGroup);
        legendLabel->setObjectName("legendLabel");

        legendLayout->addWidget(legendLabel);


        rightLayout->addWidget(legendGroup);

        splitter->addWidget(rightPanel);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Huffman Coding Tool", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Huffman Coding Tool", nullptr));
        inputGroup->setTitle(QCoreApplication::translate("MainWindow", "Input Text", nullptr));
        openFileButton->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        saveEncodedFileButton->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        inputTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter text to compress...", nullptr));
        buildTreeButton->setText(QCoreApplication::translate("MainWindow", "Build Tree", nullptr));
        encodeButton->setText(QCoreApplication::translate("MainWindow", "Encode", nullptr));
        decodeButton->setText(QCoreApplication::translate("MainWindow", "Decode", nullptr));
        encodedGroup->setTitle(QCoreApplication::translate("MainWindow", "Encoded Output", nullptr));
        outputTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Encoded bitstream will appear here...", nullptr));
        decodedGroup->setTitle(QCoreApplication::translate("MainWindow", "Decoded Output", nullptr));
        decodedTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Decoded output will appear here...", nullptr));
        statsGroup->setTitle(QCoreApplication::translate("MainWindow", "Statistics", nullptr));
        entropyLabelTitle->setText(QCoreApplication::translate("MainWindow", "Entropy:", nullptr));
        entropyLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        entropyUnit->setText(QCoreApplication::translate("MainWindow", "bits/symbol", nullptr));
        ratioLabelTitle->setText(QCoreApplication::translate("MainWindow", "Compression Ratio:", nullptr));
        ratioLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ratioUnit->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        treeViewGroup->setTitle(QCoreApplication::translate("MainWindow", "Huffman Tree Visualization", nullptr));
        zoomInButton->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
        zoomOutButton->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
        fitViewButton->setText(QCoreApplication::translate("MainWindow", "Fit View", nullptr));
        legendGroup->setTitle(QCoreApplication::translate("MainWindow", "Legend", nullptr));
        legendLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body>\n"
"<p><span style=\"color:#4a6fa5;\">\342\227\217</span> Internal nodes - Combined frequency</p>\n"
"<p><span style=\"color:#28a745;\">\342\227\217</span> Leaf nodes - Character & frequency</p>\n"
"<p>Edge labels (0/1) represent the Huffman code bits</p>\n"
"</body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
