#ifndef MATH_TYPES_H
#define MATH_TYPES_H

//---- Vectors (2-4 int and floats)

typedef struct
{
    union
    {
        struct
        {
            float x, y;
        };
        float data[2];
    };

} vec2f;

typedef struct
{
    union
    {
        struct
        {
            int x, y;
        };
        int data[2];
    };

} vec2i;

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

} vec3f;

typedef struct
{
    union
    {
        struct
        {
            int x, y, z;
        };
        struct
        {
            int r, g, b;
        };
        int data[3];
    };

} vec3i;

typedef struct
{
    union
    {
        struct
        {
            float x, y, z, w;
        };
        struct
        {
            float r, g, b, a;
        };
        float data[4];
    };

} vec4f;

typedef struct
{
    union
    {
        struct
        {
            int x, y, z, w;
        };
        struct
        {
            int r, g, b, a;
        };
        int data[4];
    };

} vec4i;

//----- Matrices

typedef struct
{
    float data[2][2];
} mat2;

typedef struct
{
    float data[3][3];
} mat3;

typedef struct
{
    float data[4][4];
} mat4;

#endif