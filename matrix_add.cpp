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
    cout << "The array is : \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void addition(int arr1[][100], int row1, int col1, int arr2[][100], int arrSum[][100]) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            arrSum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void subtraction(int arr1[][100], int row1, int col1, int arr2[][100], int arrsub[][100]) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            arrsub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

int main() {
    cout << "Enter the number of rows of first matrix: ";
    int row1, col1;
    cin >> row1;
    cout << "\nEnter the number of columns of first matrix: ";
    cin >> col1;

    int arr1[100][100];
    inputArray(row1, col1, arr1);

    cout << "Enter the number of rows of second matrix: ";
    int row2, col2;
    cin >> row2;
    cout << "\nEnter the number of columns of second matrix: ";
    cin >> col2;

    int arr2[100][100];
    inputArray(row2, col2, arr2);

    if (row1 != row2 || col1 != col2) {
        cout << "Matrix addition is not possible: Matrices have different dimensions.";
        return 1;
    }

    int arrSum[100][100];
    addition(arr1, row1, col1, arr2, arrSum);

    cout << "Matrix 1: \n";
    display(arr1, row1, col1);

    cout << "Matrix 2: \n";
    display(arr2, row2, col2);

    cout << "Sum of matrices: \n";
    display(arrSum, row1, col1);
    
    int arrsub[100][100]; 
    subtraction(arr1, row1, col1, arr2, arrsub);

    cout << "Subtraction of matrices: \n";
    display(arrsub, row1, col1);

    return 0;
}
