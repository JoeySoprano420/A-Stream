#define N 4  // Loop unrolling factor

void sum(int* arr, int size) {
    for (int i = 0; i < size; i += N) {
        arr[i] += arr[i + 1];
        arr[i + 2] += arr[i + 3];
    }
}
