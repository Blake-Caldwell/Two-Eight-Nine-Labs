#include "matrix_operations.h"

// mat2 addition
mat2 mat2_add(const mat2 *a, const mat2 *b)
{
    mat2 result;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result.data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
    return result;
}

// mat3 addition
mat3 mat3_add(const mat3 *a, const mat3 *b)
{
    mat3 result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result.data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
    return result;
}

// mat4 addition
mat4 mat4_add(const mat4 *a, const mat4 *b)
{
    mat4 result;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result.data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
    return result;
}

// mat2 subtraction
mat2 mat2_sub(const mat2 *a, const mat2 *b)
{
    mat2 result;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result.data[i][j] = a->data[i][j] - b->data[i][j];
        }
    }
    return result;
}

// mat3 subtraction
mat3 mat3_sub(const mat3 *a, const mat3 *b)
{
    mat3 result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result.data[i][j] = a->data[i][j] - b->data[i][j];
        }
    }
    return result;
}

// mat4 subtraction
mat4 mat4_sub(const mat4 *a, const mat4 *b)
{
    mat4 result;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result.data[i][j] = a->data[i][j] - b->data[i][j];
        }
    }
    return result;
}

// mat2 multiplication
mat2 mat2_mul(const mat2 *a, const mat2 *b)
{
    mat2 result;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result.data[i][j] = 0.0f;
            for (int k = 0; k < 2; k++)
            {
                result.data[i][j] += a->data[i][k] * b->data[k][j];
            }
        }
    }
    return result;
}

// mat3 multiplication
mat3 mat3_mul(const mat3 *a, const mat3 *b)
{
    mat3 result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result.data[i][j] = 0.0f;
            for (int k = 0; k < 3; k++)
            {
                result.data[i][j] += a->data[i][k] * b->data[k][j];
            }
        }
    }
    return result;
}

// mat4 multiplication
mat4 mat4_mul(const mat4 *a, const mat4 *b)
{
    mat4 result;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result.data[i][j] = 0.0f;
            for (int k = 0; k < 4; k++)
            {
                result.data[i][j] += a->data[i][k] * b->data[k][j];
            }
        }
    }
    return result;
}

// mat2 scalar multiplication
mat2 mat2_scalar_mul(const mat2 *m, float scalar)
{
    mat2 result;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result.data[i][j] = m->data[i][j] * scalar;
        }
    }
    return result;
}

// mat3 scalar multiplication
mat3 mat3_scalar_mul(const mat3 *m, float scalar)
{
    mat3 result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result.data[i][j] = m->data[i][j] * scalar;
        }
    }
    return result;
}

// mat4 scalar multiplication
mat4 mat4_scalar_mul(const mat4 *m, float scalar)
{
    mat4 result;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result.data[i][j] = m->data[i][j] * scalar;
        }
    }
    return result;
}