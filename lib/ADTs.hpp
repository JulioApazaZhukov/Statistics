template <typename T>
class DynamicArray {
private:
    T* data;        
    size_t size;    
    size_t capacity;

    void resize(size_t new_capacity) {
        T* new_data = new T[new_capacity];
        for (size_t i = 0; i < size; i++) {
            new_data[i] = data[i];
        }
        delete[] data;          
        data = new_data;        
        capacity = new_capacity;
    }

public:
    DynamicArray() : data(nullptr), size(0), capacity(0) {}

    ~DynamicArray() {
        delete[] data;
    }

    void addElement(const T& value) {
        if (size == capacity) {
            resize(capacity == 0 ? 1 : capacity * 2);
        }
        data[size] = value;
        size++;
    }

    T obtener(size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    void deleteLastItem() {
        if (size > 0) {
            size--;
        }
    }

    size_t getSize() const {
        return size;
    }

    size_t getCapacity() const {
        return capacity;
    }

    T& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
};

/*
Example of application of this ADT in a main function, do not try to execute it as it is an .hpp file.
int main() {
    // Dynamic Integer Array
    DynamicArray<int> intArray;
    intArray.addElement(10);
    intArray.addElement(20);
    intArray.addElement(30);

    std::cout << "Integer array: ";
    for (size_t i = 0; i < intArray.getSize(); i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Dynamic Float Array
    DynamicArray<float> floatArray;
    floatArray.addElement(1.1f);
    floatArray.addElement(2.2f);
    floatArray.addElement(3.3f);

    std::cout << "Float array: ";
    for (size_t i = 0; i < floatArray.getSize(); i++) {
        std::cout << floatArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}*/