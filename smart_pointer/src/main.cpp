#include "smart_pointers.h"

using smart_pointers::UniquePointer;

int main() {
    UniquePointer<int> my_num {};
    int num {10};
    UniquePointer<int> my_second_num {&num};
    return 0;
}