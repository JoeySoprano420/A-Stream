#define SQUARE(x) ((x) * (x))  // Function-like macro to square a number

#define SQUARE_RESULT SQUARE(VAR_A)  // 15 * 15 = 225
#undef SQUARE_RESULT
#define SQUARE_RESULT SQUARE(CONST_A)  // 10 * 10 = 100
