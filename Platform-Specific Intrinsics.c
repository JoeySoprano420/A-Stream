#include <x86intrin.h>  // Include x86 intrinsics

void multiply_using_intrinsics(int* arr1, int* arr2, int* result, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = _mm_cvtsi128_si32(_mm_mullo_epi32(_mm_cvtsi32_si128(arr1[i]), _mm_cvtsi32_si128(arr2[i])));
    }
}
