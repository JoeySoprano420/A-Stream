#include <stdio.h>
#include <assert.h>

// Mock functions for testing integration
int fetch_data_from_db() {
    return 42;  // Simulate database query result
}

int process_data(int data) {
    return data * 2;  // Process the data
}

// Integration test
void test_integration() {
    int data = fetch_data_from_db();
    int processed_data = process_data(data);
    
    assert(processed_data == 84);  // Check if data is processed correctly
}

int main() {
    test_integration();
    printf("Integration test passed!\n");
    return 0;
}
