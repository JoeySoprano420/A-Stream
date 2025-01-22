// Panic function
void panic(char* message) {
    printf("PANIC: %s\n", message);
    exit(1);  // Exit the program immediately
}

// Simulate an unrecoverable error
void critical_error_example() {
    panic("Critical system failure!");
}
