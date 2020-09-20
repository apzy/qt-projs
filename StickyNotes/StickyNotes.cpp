#include "StickyNotes.h"
#include <QPushButton>
#include <QIcon>

StickyNotes::StickyNotes(QWidget* parent)
        : QWidget(parent)
{
        ui.setupUi(this);
        setWindowFlags(Qt::CustomizeWindowHint);

        QPushButton* close = new QPushButton(this);
        QIcon ico("./img/close.png");
        close->setIcon(ico);
        close->setIconSize(QSize(12, 12));
        close->setFlat(true);
}
