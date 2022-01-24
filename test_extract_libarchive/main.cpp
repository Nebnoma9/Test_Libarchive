#include "mainwindow.h"
#include <iostream>
#include <archive.h>
#include <archive_entry.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <QApplication>
#include <QLabel>

#include "ArchiveExtraction.h"
#include "Archives.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

    ArchiveExtraction ar;
    const char* chaine;
    chaine="C:/Users/ASUS/Downloads/ComicBookReader-1.0/TestSamples/Injustice2.cbr";
    bool resultat;
    resultat = ar.DecompresserArchive(chaine);

   // w.show();

    return app.exec();
}
