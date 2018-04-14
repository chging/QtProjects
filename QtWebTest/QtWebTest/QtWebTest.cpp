#include "QtWebTest.h"

#include <QtWebEngineWidgets/QWebEngineView>
#include "MyWebEngineView.h"

QtWebTest::QtWebTest(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);

    webView = new MyWebEngineView(this);
    ui.verticalLayout->addWidget(webView, 1);
    webView->load(QUrl("https://www.baidu.com"));

    connect(ui.pushButton_back, SIGNAL(clicked()), webView, SLOT(back()));
    connect(ui.pushButton_front, SIGNAL(clicked()), webView, SLOT(forward()));
    connect(ui.pushButton_refresh, SIGNAL(clicked()), webView, SLOT(reload()));
    connect(ui.pushButton_go, SIGNAL(clicked()), this, SLOT(GoUrl()));
    connect(webView, SIGNAL(urlChanged(const QUrl&)), this,
            SLOT(WebViewUrlChanged(const QUrl&)));
    connect(ui.lineEdit_url, SIGNAL(returnPressed()), this, SLOT(GoUrl()));
}

void QtWebTest::GoUrl() {
    QString url = ui.lineEdit_url->text();
    webView->load(QUrl(url));
}

void QtWebTest::WebViewUrlChanged(const QUrl& url) {
    QUrl old_url = QUrl(ui.lineEdit_url->text());
    if (old_url != url) {
        webView->load(url);
        ui.lineEdit_url->setText(url.toString());
    }
}
