#ifndef ARCHIVE_H
#define ARCHIVE_H
#include <vector>
#include <string>

class Archives
{
public:
    virtual bool DecompresserArchive(const char* ArchivePathName) = 0;
    virtual std::vector<const char*> ListeFichiers(const char* ArchivePathName) = 0;
    virtual bool ChargerImage(int numeroPage)=0;

};


#endif // ARCHIVE_H
