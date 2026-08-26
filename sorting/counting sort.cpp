#include <iostream>
using namespace std;

void countingSort(int arr[], int size) {
    int freq[100000];
    int minVal=INT32_MAX, maxVal=INT32_MIN;

    for(int i=0; i<size; i++) {
        minVal=min(minVal, arr[i]);
        maxVal=max(maxVal, arr[i]);
        }

    // Count frequency
    for(int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Put sorted elements back into original array
    for(int i = minVal, j=0; i <= maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

void printArray(int arr[], int size) {
    countingSort(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    printArray(arr, size);


    return 0;
}