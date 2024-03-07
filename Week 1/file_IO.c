#include "file_IO.h"

FILE *open_file(char *f_name, char *mode)
{
    FILE *fp = fopen(f_name, mode);

    return fp;
}

void close_file(FILE *fp)
{
    if (fp)
        fclose(fp);
}