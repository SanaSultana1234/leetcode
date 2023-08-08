#include <vector>

void bubbleSort(int arr[], int n) {
    // Write Your Code Here
    int isSwap = 0;
    for (int i = 0; i < n - 1; i++) {
        isSwap = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                std::swap(arr[j + 1], arr[j]);
                isSwap = 1;
            }
        }
        if (!isSwap)
            break;
    }
}
