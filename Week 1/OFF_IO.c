#include "OFF_IO.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

OFF *create_off()
{
    OFF *ptr = malloc(sizeof(OFF));

    if (!ptr)
    {
        printf("Failed to heap allocate OFF object");
        return ptr;
    }

    ptr->nvert = 0;
    ptr->nface = 0;
    ptr->nedge = 0;

    ptr->points = NULL;
    ptr->face_idxs = NULL;

    return ptr;
}

void destroy_off(OFF *off)
{
    free(off);
}

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

int readOFFFile(char *file_name, OFF *off)
{
    FILE *fp = open_file(file_name, "r");

    if (!fp)
        return 0;

    char *header = NULL;
    fscanf(fp, "%s", header);
    printf("%s", header);
}

void writeOFFFile(char *file_name, OFF *off)
{
}