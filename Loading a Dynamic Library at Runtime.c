#include <dlfcn.h>
#include <stdio.h>

void load_dynamic_library() {
    void* handle = dlopen("libsome_library.so", RTLD_LAZY);
    if (!handle) {
        printf("Failed to load library: %s\n", dlerror());
        return;
    }

    // Find the function within the library
    void (*func)() = dlsym(handle, "some_function");
    if (!func) {
        printf("Failed to find function: %s\n", dlerror());
        dlclose(handle);
        return;
    }

    // Call the function
    func();

    // Close the library handle
    dlclose(handle);
}
