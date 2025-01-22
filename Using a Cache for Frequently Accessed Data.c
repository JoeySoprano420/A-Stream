#define CACHE_SIZE 100
int cache[CACHE_SIZE];
int cache_hits = 0;

// Simple cache lookup
int cache_lookup(int key) {
    if (key < CACHE_SIZE && cache[key] != -1) {
        cache_hits++;
        return cache[key];  // Return cached value
    }
    return -1;  // Not in cache
}

// Cache population (e.g., during an expensive operation)
void populate_cache() {
    for (int i = 0; i < CACHE_SIZE; i++) {
        cache[i] = i * 2;  // Example of populating cache with data
    }
}
