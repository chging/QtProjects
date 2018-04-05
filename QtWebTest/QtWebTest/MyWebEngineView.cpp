#include "MyWebEngineView.h"

MyWebEngineView::MyWebEngineView(QWidget* parent /*= Q_NULLPTR*/) {

}

MyWebEngineView::~MyWebEngineView() {
}

QWebEngineView * MyWebEngineView::createWindow(QWebEnginePage::WebWindowType type) {
    Q_UNUSED(type)
    return this;
}
