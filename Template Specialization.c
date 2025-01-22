template <typename T>
T add(T a, T b) {
    return a + b;
}

// Specialized template for adding strings
template <>
const char* add<const char*>(const char* a, const char* b) {
    static char result[256];  // Static result buffer
    snprintf(result, sizeof(result), "%s%s", a, b);
    return result;
}

#define STRING_RESULT add<const char*>("Hello, ", "World!")  // Concatenate strings
