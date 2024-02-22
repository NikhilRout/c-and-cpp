#include <iostream>
#include <new> // Include the header for bad_alloc

int main() {
    try {
        // Try to allocate a large amount of memory
        size_t size = 1000000000000; // Trying to allocate 1 terabyte (unrealistic size)
        int* hugeArray = new int[size];

        // If the allocation succeeds, use the allocated memory
        std::cout << "Memory allocation successful!" << std::endl;

        // ... Perform operations using hugeArray

        // Don't forget to release the allocated memory
        delete[] hugeArray;
    } catch(const std::bad_alloc& e) {
        // Catch the bad_alloc exception if allocation fails
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }

    return 0;
}
