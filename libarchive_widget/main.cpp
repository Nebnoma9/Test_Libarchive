#include "mainwindow.h"
#include <iostream>
#include <archive.h>
#include <archive_entry.h>

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    struct archive *a;
    struct archive_entry *entry;
    int r;

    a = archive_read_new();
    archive_read_support_filter_all(a);
    archive_read_support_format_all(a);
    r = archive_read_open_filename(a, "C:/test.zip", 10240); // Note 1

    if (r != ARCHIVE_OK)
    {
      exit(1);
    }
    while (archive_read_next_header(a, &entry) == ARCHIVE_OK) {
      printf("%s\n",archive_entry_pathname(entry));
      archive_read_data_skip(a);  // Note 2
    }
    r = archive_read_free(a);  // Note 3
    if (r != ARCHIVE_OK)
      exit(1);

    QApplication app(argc, argv);
    QLabel label;
    if(archive_read_next_header(a,&entry) == ARCHIVE_OK )
    {
        printf("Salut \n");
    label.setPixmap(QPixmap("C:/ASUS.png"));
    label.show();
    QObject::connect(&label,SIGNAL(clicked()),&app,SLOT(quit()));
    }

   // MainWindow w;
  //  w.show();
    return app.exec();
}
