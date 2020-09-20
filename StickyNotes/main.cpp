#include "StickyNotes.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StickyNotes w;
    w.show();
    return a.exec();
}
