// Function that can return an error
int divide(int a, int b, int* result) {
    if (b == 0) {
        return -1;  // Return error code for division by zero
    }
    *result = a / b;
    return 0;  // Success
}

// Using the function with error checking
void divide_example() {
    int result;
    int status = divide(10, 0, &result);  // Error case: division by zero

    if (status != 0) {
        printf("Error: Division by zero\n");
        return;  // Handle error without crashing
    }

    printf("Result: %d\n", result);
}
