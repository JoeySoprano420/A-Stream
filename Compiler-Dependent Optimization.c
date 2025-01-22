#if defined(__GNUC__)  // Check if using GCC compiler
    #define INLINE __attribute__((always_inline))
#elif defined(_MSC_VER)  // Check if using MSVC compiler
    #define INLINE __forceinline
#else
    #define INLINE inline
#endif

INLINE int add(int a, int b) {
    return a + b;
}
