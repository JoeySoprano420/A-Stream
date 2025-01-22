// Inline function to avoid function call overhead
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(2, 3);  // This will be inlined during compilation
    printf("Result: %d\n", result);
}
