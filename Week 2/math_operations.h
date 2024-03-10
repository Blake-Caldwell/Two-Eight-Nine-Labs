#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

#include "math_types.h"

void vec_add(vec2f *result, const vec2f *a, const vec2f *b);
void vec_add(vec2i *result, const vec2i *a, const vec2i *b);
void vec_add(vec3f *result, const vec3f *a, const vec3f *b);
void vec_add(vec3i *result, const vec3i *a, const vec3i *b);
void vec_add(vec4f *result, const vec4f *a, const vec4f *b);
void vec_add(vec4i *result, const vec4i *a, const vec4i *b);

void vec_subtract(vec2f *result, const vec2f *a, const vec2f *b);
void vec_subtract(vec2i *result, const vec2i *a, const vec2i *b);
void vec_subtract(vec3f *result, const vec3f *a, const vec3f *b);
void vec_subtract(vec3i *result, const vec3i *a, const vec3i *b);
void vec_subtract(vec4f *result, const vec4f *a, const vec4f *b);
void vec_subtract(vec4i *result, const vec4i *a, const vec4i *b);

// Scalar multiplications

// vec2f
void vec_scale(vec2f *result, const vec2f *v, float scalar);

// vec2i
void vec_scale(vec2i *result, const vec2i *v, int scalar);

// vec3f
void vec_scale(vec3f *result, const vec3f *v, float scalar);

// vec3i
void vec_scale(vec3i *result, const vec3i *v, int scalar);

// vec4f
void vec_scale(vec4f *result, const vec4f *v, float scalar);

// vec4i
void vec_scale(vec4i *result, const vec4i *v, int scalar);

// Dot Products

// vec2f
float vec_dot(const vec2f *a, const vec2f *b);

// vec2i
int vec_dot(const vec2i *a, const vec2i *b);

// vec3f
float vec_dot(const vec3f *a, const vec3f *b);

// vec3i
int vec_dot(const vec3i *a, const vec3i *b);

// vec4f
float vec_dot(const vec4f *a, const vec4f *b);

// vec4i
int vec_dot(const vec4i *a, const vec4i *b);

// cross

void vec_cross(vec3f *result, const vec3f *a, const vec3f *b);

// vec2f
float vec_magnitude(const vec2f *v);

// vec2i
float vec_magnitude(const vec2i *v); // Or int if you prefer integer magnitude

// vec3f
float vec_magnitude(const vec3f *v);

// vec3i
float vec_magnitude(const vec3i *v); // Or int if you prefer integer magnitude

// vec4f
float vec_magnitude(const vec4f *v);

// vec4i
float vec_magnitude(const vec4i *v); // Or int if you prefer integer magnitude

#endif