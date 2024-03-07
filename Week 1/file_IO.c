#include "file_IO.h"

FILE *open_file(char *f_name, char *mode)
{
    FILE *fp = fopen(f_name, mode);

    if (!fp)
        printf("Failed to open file: %s", f_name);

    return fp;
}

void close_file(FILE *fp)
{
    fclose(fp);
}