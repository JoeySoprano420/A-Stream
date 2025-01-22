#include <immintrin.h>  // Include SIMD library

void add_simd(int* arr1, int* arr2, int* result, int size) {
    for (int i = 0; i < size; i += 4) {  // Process 4 elements at a time
        __m128i v1 = _mm_loadu_si128((__m128i*)&arr1[i]);
        __m128i v2 = _mm_loadu_si128((__m128i*)&arr2[i]);
        __m128i sum = _mm_add_epi32(v1, v2);
        _mm_storeu_si128((__m128i*)&result[i], sum);
    }
}
