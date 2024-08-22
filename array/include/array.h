#include <cstddef>

#ifndef ARRAY_H_
#define ARRAY_H_
namespace custom_array {
    class Array {
        public:
            Array();
            // ~Array();
            // Array(const Array& array);
            // Array(Array& array);

        private:
            std::size_t length;
            int* data;
    };
}

#endif