#ifndef VECTOR_OPERATIONS_H
#define VECTOR_OPERATIONS_H

#include "vectors.h"

//---- Arithmetic

void vec2f_add(vec2f *result, const vec2f *a, const vec2f *b);
void vec2i_add(vec2i *result, const vec2i *a, const vec2i *b);
void vec3f_add(vec3f *result, const vec3f *a, const vec3f *b);
void vec3i_add(vec3i *result, const vec3i *a, const vec3i *b);
void vec4f_add(vec4f *result, const vec4f *a, const vec4f *b);
void vec4i_add(vec4i *result, const vec4i *a, const vec4i *b);

void vec2f_sub(vec2f *result, const vec2f *a, const vec2f *b);
void vec2i_sub(vec2i *result, const vec2i *a, const vec2i *b);
void vec3f_sub(vec3f *result, const vec3f *a, const vec3f *b);
void vec3i_sub(vec3i *result, const vec3i *a, const vec3i *b);
void vec4f_sub(vec4f *result, const vec4f *a, const vec4f *b);
void vec4i_sub(vec4i *result, const vec4i *a, const vec4i *b);

void vec2f_scalar_mul(vec2f *result, const vec2f *v, float scalar);
void vec2i_scalar_mul(vec2i *result, const vec2i *v, int scalar);
void vec3f_scalar_mul(vec3f *result, const vec3f *v, float scalar);
void vec3i_scalar_mul(vec3i *result, const vec3i *v, int scalar);
void vec4f_scalar_mul(vec4f *result, const vec4f *v, float scalar);
void vec4i_scalar_mul(vec4i *result, const vec4i *v, int scalar);

//---- Magnitudes/Normalizing

float vec2f_magnitude(const vec2f *v);
float vec2i_magnitude(const vec2i *v);

float vec3f_magnitude(const vec3f *v);
float vec3i_magnitude(const vec3i *v);

float vec4f_magnitude(const vec4f *v);
float vec4i_magnitude(const vec4i *v);

void vec2f_normalize(vec2f *result, const vec2f *v);
void vec3f_normalize(vec3f *result, const vec3f *v);
void vec4f_normalize(vec4f *result, const vec4f *v);

//--- Dot / Cross

float vec2f_dot(const vec2f *a, const vec2f *b);
float vec3f_dot(const vec3f *a, const vec3f *b);
float vec4f_dot(const vec4f *a, const vec4f *b);

void vec3f_cross(vec3f *result, const vec3f *a, const vec3f *b);
void vec3i_cross(vec3i *result, const vec3i *a, const vec3i *b);

#endif