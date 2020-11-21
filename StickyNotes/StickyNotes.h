#pragma once

#include <QtWidgets/QWidget>
#include "ui_StickyNotes.h"
#include <QPushButton>

class StickyNotesControls
{
public:
        QPushButton* close;
};

class StickyNotes : public QWidget
{
        Q_OBJECT

public:
        StickyNotes(QWidget* parent = Q_NULLPTR);

protected:
        void mousePressEvent(QMouseEvent* event);
        void mouseMoveEvent(QMouseEvent* event);
        void mouseReleaseEvent(QMouseEvent* event);
        void resizeEvent(QResizeEvent* event);

private:
        Ui::StickyNotesClass ui;
        bool left_pressed = false;
        QPoint start_point, windows_point;
        StickyNotesControls controls;

private slots:
        void close_click();
};

