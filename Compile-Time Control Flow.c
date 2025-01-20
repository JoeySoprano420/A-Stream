#define CONDITION (VAR_A > VAR_B)  // Compile-time condition

#if CONDITION
    #define BRANCH_RESULT 1
#else
    #define BRANCH_RESULT 0  // Control flow result: 0
#endif
