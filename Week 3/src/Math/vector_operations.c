#include "vector_operations.h"

#include "math.h"

void vec2f_add(vec2f *result, const vec2f *a, const vec2f *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
}

void vec2i_add(vec2i *result, const vec2i *a, const vec2i *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
}

void vec3f_add(vec3f *result, const vec3f *a, const vec3f *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
    result->z = a->z + b->z;
}

void vec3i_add(vec3i *result, const vec3i *a, const vec3i *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
    result->z = a->z + b->z;
}

void vec4f_add(vec4f *result, const vec4f *a, const vec4f *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
    result->z = a->z + b->z;
    result->w = a->w + b->w;
}

void vec4i_add(vec4i *result, const vec4i *a, const vec4i *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
    result->z = a->z + b->z;
    result->w = a->w + b->w;
}

//--- Subtracts

void vec2f_sub(vec2f *result, const vec2f *a, const vec2f *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
}

void vec2i_sub(vec2i *result, const vec2i *a, const vec2i *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
}

void vec3f_sub(vec3f *result, const vec3f *a, const vec3f *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
    result->z = a->z - b->z;
}

void vec3i_sub(vec3i *result, const vec3i *a, const vec3i *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
    result->z = a->z - b->z;
}

void vec4f_sub(vec4f *result, const vec4f *a, const vec4f *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
    result->z = a->z - b->z;
    result->w = a->w - b->w;
}

void vec4i_sub(vec4i *result, const vec4i *a, const vec4i *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
    result->z = a->z - b->z;
    result->w = a->w - b->w;
}

void vec2f_scalar_mul(vec2f *result, const vec2f *v, float scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
}

void vec2i_scalar_mul(vec2i *result, const vec2i *v, int scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
}

void vec3f_scalar_mul(vec3f *result, const vec3f *v, float scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
}

void vec3i_scalar_mul(vec3i *result, const vec3i *v, int scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
}

void vec4f_scalar_mul(vec4f *result, const vec4f *v, float scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
    result->w = v->w * scalar;
}

void vec4i_scalar_mul(vec4i *result, const vec4i *v, int scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
    result->w = v->w * scalar;
}

//---- Magnitudes/Normalizing

float vec2f_magnitude(const vec2f *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y));
}

float vec2i_magnitude(const vec2i *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y));
}

float vec3f_magnitude(const vec3f *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
}

float vec3i_magnitude(const vec3i *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
}

float vec4f_magnitude(const vec4f *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z) + (v->w * v->w));
}

float vec4i_magnitude(const vec4i *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z) + (v->w * v->w));
}

void vec2f_normalize(vec2f *result, const vec2f *v)
{
    float mag = vec2f_magnitude(v);

    if (mag > 0.0f)
    {
        result->x /= mag;
        result->y /= mag;
        return;
    }
    result->x = 0;
    result->y = 0;
}

void vec3f_normalize(vec3f *result, const vec3f *v)
{
    float mag = vec3f_magnitude(v);

    if (mag > 0.0f)
    {
        result->x /= mag;
        result->y /= mag;
        result->z /= mag;
        return;
    }
    result->x = 0;
    result->y = 0;
    result->z = 0;
}

void vec4f_normalize(vec4f *result, const vec4f *v)
{
    float mag = vec3f_magnitude(v);

    if (mag > 0.0f)
    {
        result->x /= mag;
        result->y /= mag;
        result->z /= mag;
        result->w /= mag;
        return;
    }
    result->x = 0;
    result->y = 0;
    result->z = 0;
    result->w = 0;
}

//--- Dot / Cross

float vec2f_dot(const vec2f *a, const vec2f *b)
{
    return a->x * b->x + a->y * b->y;
}

float vec3f_dot(const vec3f *a, const vec3f *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

float vec4f_dot(const vec4f *a, const vec4f *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
}

void vec3f_cross(vec3f *result, const vec3f *a, const vec3f *b)
{
    result->x = (a->y * b->z) - (a->z * b->y);
    result->y = (a->z * b->x) - (a->x * b->z);
    result->z = (a->x * b->y) - (a->y * b->x);
}

void vec3i_cross(vec3i *result, const vec3i *a, const vec3i *b)
{
    result->x = (a->y * b->z) - (a->z * b->y);
    result->y = (a->z * b->x) - (a->x * b->z);
    result->z = (a->x * b->y) - (a->y * b->x);
}
