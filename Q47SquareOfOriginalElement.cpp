#include<iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void Original(int arr[], int size) {
    cout << "Original array is: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SquareArray(int arr[], int size) {
    int squareArr[10];
    for(int i = 0; i < size; i++) {
        squareArr[i] = arr[i] * arr[i];
    }
    cout << "Array of squares: ";
    for(int i = 0; i < size; i++) {
        cout << squareArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    SquareArray(arr, 10);
    return 0;
}
