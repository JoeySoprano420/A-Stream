#include <stdio.h>
#include <assert.h>

// Sample function to test
int add(int a, int b) {
    return a + b;
}

// Unit test for add function
void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-1, -1) == -2);
    assert(add(0, 0) == 0);
}

int main() {
    test_add();
    printf("All tests passed!\n");
    return 0;
}
