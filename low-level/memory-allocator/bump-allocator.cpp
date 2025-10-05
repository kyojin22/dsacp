// 25, 28 September, 2025
// 
// even if I suck at cpp and low level
// even if I dunno how to build the project
// I still love writing in them
// some day, I hope I can write without thinking in these c & cpp languages
//

#include <cstddef>
#include <cstdlib>
#include <iostream>

using namespace std;

class BumpAllocator {
    char* start;
    size_t capacity;
    size_t offset;

public:
    BumpAllocator(size_t cap) {
        start = (char*) std::malloc(cap); // ask memory from os
        capacity = cap;
        offset = 0;
    }

    // allocates raw memory and returns pointer to it
    void* alloc(size_t n) {
        // check if n does not exceed the initialized capacity
        if (offset + n > capacity) {
            return nullptr;
        }

        // allocate some memory
        void* ptr = start + offset;
        
        // update the allocated memory
        offset += n;

        return ptr;
    }
    
    // view remaning capacity
    size_t remainning_capacity() {
        return capacity - offset;
    }

    // free everything
    void reset() {
        offset = 0;
    }

    // on destroy, give back memory to os
    ~BumpAllocator() {
        std::free(start);
    }

};

typedef struct node {
    int val;
    struct node* next;
} node;

int main() {
    BumpAllocator allocator(64);

    cout << allocator.remainning_capacity() << "\n";

    // allocate memory for int
    int* a = (int*) allocator.alloc(sizeof(int));
    *a = 42;

    cout << allocator.remainning_capacity() << "\n";

    // allocate memory for double
    double* b = (double*) allocator.alloc(sizeof(double));
    *b = 3.14;

    cout << allocator.remainning_capacity() << "\n";

    // allocate memory for linked list node
    node* n = (node*) allocator.alloc(sizeof(node));
    // (*n).val = 20;
    n->val = 20;

    cout << allocator.remainning_capacity() << "\n";

    cout << *a << " " << *b << " " << n->val << "\n";

    allocator.reset();

    cout << allocator.remainning_capacity() << "\n";

    return 0;
}

