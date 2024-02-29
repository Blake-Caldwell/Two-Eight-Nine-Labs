#ifndef TYPES_H
#define TYPES_H
typedef struct
{
    union
    {
        struct
        {
            float x, y, z;
        };
        struct
        {
            float r, g, b;
        };
        float data[3];
    };

} vec3;

typedef struct
{
    int nvert;
    int nface;
    int nedge;

    vec3 *points;
    int **face_idxs;

} OFF;

#endif