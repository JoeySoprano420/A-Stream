// Object with reference counting
typedef struct {
    int data;
    int ref_count;
} Object;

// Function to create a new object
Object* create_object(int data) {
    Object* obj = malloc(sizeof(Object));
    obj->data = data;
    obj->ref_count = 1;  // Initially, 1 reference to the object
    return obj;
}

// Function to increment the reference count
void retain(Object* obj) {
    obj->ref_count++;
}

// Function to decrement the reference count and free if it reaches 0
void release(Object* obj) {
    obj->ref_count--;
    if (obj->ref_count == 0) {
        free(obj);
    }
}
