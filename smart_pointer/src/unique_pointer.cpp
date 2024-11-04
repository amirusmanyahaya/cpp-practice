#include "smart_pointers.h"

namespace smart_pointers {
    template<typename T>
    UniquePointer<T>::UniquePointer(): pointer_{nullptr} {

    };

    template<typename T>
    UniquePointer<T>::UniquePointer(T* pointer): pointer_{pointer} {

    }

    template<typename T>
    T* UniquePointer<T>::Get() const {
        return pointer_;
    }


    
}