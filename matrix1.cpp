#include <iostream>
using namespace std;

void inputArray(int row, int col, int arr[][100]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "\nEnter the element of row: " << i + 1 << " and column: " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
}

void display(int arr[][100], int row, int col) {
    cout<<"The array is : \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}


int main() {
    cout << "Enter the number of rows of first matrix: ";
    int row1, col1;
    cin >> row1;
    cout << "\nEnter the number of columns of first martix: ";
    cin >> col1;

    int arr1[100][100];
    inputArray(row1, col1, arr1);

    cout << "Enter the number of rows of second  matrix: ";
    int row2, col2;
    cin >> row2;
    cout << "\nEnter the number of columns of first martix: ";
    cin >> col2;

    int arr2[100][100];
    inputArray(row2, col2, arr2);
    display(arr1, row1, col1);
    display(arr2, row2, col2);

    return 0;
}
