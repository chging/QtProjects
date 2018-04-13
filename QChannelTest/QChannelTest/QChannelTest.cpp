#include "QChannelTest.h"
#include "bridge.h"

#include <QWebEngineView>
#include <QWebChannel>
#include <QDir>
#include <QApplication>

QChannelTest::QChannelTest(QWidget *parent)
    : QDialog(parent) {
    ui.setupUi(this);

    m_view = new QWebEngineView(this);
    QWebChannel *channel = new QWebChannel(this);
    channel->registerObject("bridge", (QObject*)bridge::instance());
    m_view->page()->setWebChannel(channel);
    m_view->page()->load(QUrl(QString("file:////%1/%2").arg(
                                  QApplication::applicationDirPath()).arg("index.html")));

    QString dir = QApplication::applicationDirPath();

    ui.verticalLayout->addWidget(m_view);
    connect(ui.pushButton, &QPushButton::clicked, [this]() {
        m_view->page()->runJavaScript("showAlert()");
    });

}
