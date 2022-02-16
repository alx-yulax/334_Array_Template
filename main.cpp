#include <iostream>
template<class T, int size>
class MyArray{
    T array[size];
public:
    void fill(){
        for (int i = 0; i < size; ++i) {
            std::cin >> array[i];
        }
    }
    void middle(){
        T summ = 0;
        for (int i = 0; i < size; ++i) {
            summ += array[i];
        }
        std::cout << summ / size;
    }
};

int main() {
    MyArray<double,5> myArray;

    myArray.fill();
    myArray.middle();
    return 0;
}
