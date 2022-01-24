#ifndef ARCHIVEEXTRACTION_H
#define ARCHIVEEXTRACTION_H
#include <Archives.h>

class ArchiveExtraction: public Archives
{
private:
    const char* archivePath;
    int nombreTotalPages;

public:
    ArchiveExtraction();

    ~ArchiveExtraction();

    bool DecompresserArchive(const char* ArchivePathName);
    std::vector<const char*> ListeFichiers(const char* ArchivePathName);
    bool ChargerImage(int numeroPage);
};
#endif // ARCHIVEEXTRACTION_H
