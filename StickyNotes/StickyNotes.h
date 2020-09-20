#pragma once

#include <QtWidgets/QWidget>
#include "ui_StickyNotes.h"

class StickyNotes : public QWidget
{
    Q_OBJECT

public:
    StickyNotes(QWidget *parent = Q_NULLPTR);

private:
    Ui::StickyNotesClass ui;
};
