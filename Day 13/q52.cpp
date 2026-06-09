#include <iostream>

int main() {
    int arr[] = {5, 22, 17, 40, 3, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    std::cout << "Total Even elements: " << evenCount << std::endl;
    std::cout << "Total Odd elements: " << oddCount << std::endl;

    return 0;
}
