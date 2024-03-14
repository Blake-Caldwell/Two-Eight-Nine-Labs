#ifndef OFF_MODEL_H
#define OFF_MODEL_H

#include "Math/vectors.h"

#include <stdio.h>

typedef struct
{
    int nvert;
    int nface;
    int nedge;

    vec3f *points;
    int **face_idxs;

} OFF;

OFF *create_OFF();
void destroy_OFF(OFF *off);

OFF *readOFFFile(FILE *fp);
int writeOFFFile(FILE *fp, OFF *off);

#endif