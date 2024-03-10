#include "math_operations.h"

#include "math.h"

void vec_add(vec2f *result, const vec2f *a, const vec2f *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
}

void vec_add(vec2i *result, const vec2i *a, const vec2i *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
}

void vec_add(vec3f *result, const vec3f *a, const vec3f *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
    result->z = a->z + b->z;
}
void vec_add(vec3i *result, const vec3i *a, const vec3i *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
    result->z = a->z + b->z;
}

void vec_add(vec4f *result, const vec4f *a, const vec4f *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
    result->z = a->z + b->z;
    result->w = a->w + b->w;
}

void vec_add(vec4i *result, const vec4i *a, const vec4i *b)
{
    result->x = a->x + b->x;
    result->y = a->y + b->y;
    result->z = a->z + b->z;
    result->w = a->w + b->w;
}

//--- Subtracts

void vec_subtract(vec2f *result, const vec2f *a, const vec2f *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
}

void vec_subtract(vec2i *result, const vec2i *a, const vec2i *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
}

void vec_subtract(vec3f *result, const vec3f *a, const vec3f *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
    result->z = a->z - b->z;
}

void vec_subtract(vec3i *result, const vec3i *a, const vec3i *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
    result->z = a->z - b->z;
}

void vec_subtract(vec4f *result, const vec4f *a, const vec4f *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
    result->z = a->z - b->z;
    result->w = a->w - b->w;
}

void vec_subtract(vec4i *result, const vec4i *a, const vec4i *b)
{
    result->x = a->x - b->x;
    result->y = a->y - b->y;
    result->z = a->z - b->z;
    result->w = a->w - b->w;
}

//---- Scalar multiplications

// vec2f
void vec_scale(vec2f *result, const vec2f *v, float scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
}

// vec2i
void vec_scale(vec2i *result, const vec2i *v, int scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
}

// vec3f
void vec_scale(vec3f *result, const vec3f *v, float scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
}

// vec3i
void vec_scale(vec3i *result, const vec3i *v, int scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
}

// vec4f
void vec_scale(vec4f *result, const vec4f *v, float scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
    result->w = v->w * scalar;
}

// vec4i
void vec_scale(vec4i *result, const vec4i *v, int scalar)
{
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
    result->w = v->w * scalar;
}

//---- Dot Products

// vec2f
float vec_dot(const vec2f *a, const vec2f *b)
{
    return (a->x * b->x) + (a->y * b->y);
}

// vec2i
int vec_dot(const vec2i *a, const vec2i *b)
{
    return (a->x * b->x) + (a->y * b->y);
}

// vec3f
float vec_dot(const vec3f *a, const vec3f *b)
{
    return (a->x * b->x) + (a->y * b->y) + (a->z * b->z);
}

// vec3i
int vec_dot(const vec3i *a, const vec3i *b)
{
    return (a->x * b->x) + (a->y * b->y) + (a->z * b->z);
}

// vec4f
float vec_dot(const vec4f *a, const vec4f *b)
{
    return (a->x * b->x) + (a->y * b->y) + (a->z * b->z) + (a->w * b->w);
}

// vec4i
int vec_dot(const vec4i *a, const vec4i *b)
{
    return (a->x * b->x) + (a->y * b->y) + (a->z * b->z) + (a->w * b->w);
}

//---- Cross Products

void vec_cross(vec3f *result, const vec3f *a, const vec3f *b)
{
    result->x = (a->y * b->z) - (a->z * b->y);
    result->y = (a->z * b->x) - (a->x * b->z);
    result->z = (a->x * b->y) - (a->y * b->x);
}

void vec_cross(vec3i *result, const vec3i *a, const vec3i *b)
{
    result->x = (a->y * b->z) - (a->z * b->y);
    result->y = (a->z * b->x) - (a->x * b->z);
    result->z = (a->x * b->y) - (a->y * b->x);
}

//---- Magnitudes (lengths)

// vec2f
float vec_magnitude(const vec2f *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y));
}

// vec2i
float vec_magnitude(const vec2i *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y));
}

// vec3f
float vec_magnitude(const vec3f *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
}

// vec3i
float vec_magnitude(const vec3i *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
}

// vec4f
float vec_magnitude(const vec4f *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z) + (v->w * v->w));
}

// vec4i
float vec_magnitude(const vec4i *v)
{
    return sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z) + (v->w * v->w));
}