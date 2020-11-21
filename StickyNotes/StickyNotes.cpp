#include "StickyNotes.h"
#include <QPushButton>
#include <QIcon>
#include <QMouseEvent>

StickyNotes::StickyNotes(QWidget* parent)
        : QWidget(parent)
{
        ui.setupUi(this);
        setWindowFlags(Qt::CustomizeWindowHint);

        controls.close = new QPushButton(this);
        QIcon ico("./img/close.png");
        controls.close->setIcon(ico);
        controls.close->setIconSize(QSize(12, 12));
        controls.close->setFlat(true);

        connect(controls.close, SIGNAL(clicked()), this, SLOT(close_click()));
}

void StickyNotes::close_click()
{
        this->close();
}

void StickyNotes::mousePressEvent(QMouseEvent* event)
{
        if (event->button() == Qt::LeftButton)
        {
                left_pressed = true;
                start_point = event->globalPos();
                windows_point = this->frameGeometry().topLeft();
        }
}

void StickyNotes::mouseMoveEvent(QMouseEvent* event)
{
        if (event->buttons() & Qt::LeftButton )
        {
                QPoint pos = event->globalPos() - start_point;
                this->move(windows_point + pos);
        }
}

void StickyNotes::mouseReleaseEvent(QMouseEvent* event)
{
        if (event->button() == Qt::LeftButton)
        {
                left_pressed = false;
        }
}

void StickyNotes::resizeEvent(QResizeEvent* event)
{
        printf("w = %d height = %d\n", this->width(), this->height());
}
