template <typename T>
T add(T a, T b) {
    return a + b;
}

#define ADD_INT_RESULT add<int>(CONST_A, CONST_B)  // 10 + 20 = 30
#define ADD_FLOAT_RESULT add<float>(3.5f, 1.5f)    // 3.5 + 1.5 = 5.0
