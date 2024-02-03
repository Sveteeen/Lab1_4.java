// kr 1 (var 4).cpp 
//

#include <iostream>
#include <ctime>

//3 задача

// Функция для заполнения массива случайными числами от 1 до 50
void fillArray(int* arr, int size) {
    srand(time(0)); 
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50 + 1; 
    }
}

// Функция для вывода массива на экран
void displayArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Функция для поиска и вывода пар элементов, разность которых равна заданному числу
void findPairs(int* arr, int size, int difference) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] - arr[j] == difference || arr[j] - arr[i] == difference) {
                std::cout << arr[i] << " " << arr[j] << std::endl;
            }
        }
    }
}

int main() {
    int size;
    std::cout << "Inter array size: ";
    std::cin >> size;

    int* arr = new int[size]; 

    fillArray(arr, size); 
    std::cout << "Array: ";
    displayArray(arr, size); 

    int difference;
    std::cout << "Inter difference: ";
    std::cin >> difference;

    std::cout << "Pairs of elements with a difference: " << difference << ": " << std::endl;
    findPairs(arr, size, difference); 

    delete[] arr; 

    return 0;
}