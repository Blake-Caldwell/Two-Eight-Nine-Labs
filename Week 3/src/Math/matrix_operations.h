#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

#include "matrices.h"

// Arithmetic

// Matrix addition (element-wise)
mat2 mat2_add(const mat2 *a, const mat2 *b);
mat3 mat3_add(const mat3 *a, const mat3 *b);
mat4 mat4_add(const mat4 *a, const mat4 *b);

// Matrix subtraction (element-wise)
mat2 mat2_sub(const mat2 *a, const mat2 *b);
mat3 mat3_sub(const mat3 *a, const mat3 *b);
mat4 mat4_sub(const mat4 *a, const mat4 *b);

// Matrix multiplication
mat2 mat2_mul(const mat2 *a, const mat2 *b);
mat3 mat3_mul(const mat3 *a, const mat3 *b);
mat4 mat4_mul(const mat4 *a, const mat4 *b);

// Scalar multiplication
mat2 mat2_scalar_mul(const mat2 *m, float scalar);
mat3 mat3_scalar_mul(const mat3 *m, float scalar);
mat4 mat4_scalar_mul(const mat4 *m, float scalar);
#endif