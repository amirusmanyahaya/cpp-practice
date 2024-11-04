#ifndef SMART_POINTERS_H
#define SMART_POINTERS_H

namespace smart_pointers {

    void hello();

    template<typename T> 
    class UniquePointer {
        public:
            UniquePointer();
            UniquePointer(T* pointer);
            // ~UniquePointer();
            T* Get() const;
            // operator->();
        private:
            T* pointer_;
    };
}

#endif