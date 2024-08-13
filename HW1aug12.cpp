#include <iostream>

class DynamicArray {
    private:
    int* arr;
    int size;
    int capacity;

    void resize() {
        int newCapacity = capacity * 2;
        int* newArr = new int[newCapacity];

        for(int i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
        newArr = nullptr;
        capacity = newCapacity;
    }

    public: 

    //Below is the default constructor!!
    DynamicArray() : size(0), capacity(2) {
        arr = new int[capacity];
    }

    //This one below is our parametrized constructor!
    DynamicArray(int initialCapacity) : size(0), capacity(initialCapacity) {
        arr = new int[capacity];
    }

    void push(int value) {
        if(size == capacity) {
            resize();
        }
        arr[size++] = value;
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void print() const {
        std::cout << "The array contains the following elements: ";
        for(int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }
};

int main() {
    std::cout << "Insertion of the array elements with the usage of both default and parametrized constructors" << std::endl;
    DynamicArray arr;

    int numElements = 0;
    std::cout << "\nEnter the number of elements in order to insert in the array: ";
    std::cin >> numElements;

    for(int i = 0; i < numElements; ++i) {
        int value;
        std::cout << "Enter the value for the element " << i + 1 << ": ";
        std::cin >> value;
        arr.push(value);
    }

    arr.print();
    std::cout << "Size of the array is " << arr.getSize() << std::endl;
    std::cout << "Capacity of the array is " << arr.getCapacity() << std::endl;

    int initialCapacity = 0;
    std::cout << "\nEnter the initial capacity of the dynamic array: ";
    std::cin >> initialCapacity;

    DynamicArray arr2(initialCapacity);

    std::cout << "Enter the number of elements in order to insert in the array: ";
    std::cin >> numElements;

      for(int i = 0; i < numElements; ++i) {
        int value;
        std::cout << "Enter the value for the element " << i + 1 << ": ";
        std::cin >> value;
        arr2.push(value);
    }

    arr2.print();
    std::cout << "Size of the array is " << arr2.getSize() << std::endl;
    std::cout << "Capacity of the array is " << arr2.getCapacity() << std::endl;

    return 0;
}