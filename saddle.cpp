#include<iostream>
using namespace std;

void findSaddlePoint(int** matrix, int m, int n) {
    for (int i = 0; i < m; ++i) {
        // Find the minimum value in the current row
        int minVal = matrix[i][0];
        int colIndex = 0;
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                colIndex = j;
            }
        }

        // Check if the minimum value is also the maximum in its column
        bool isSaddlePoint = true;
        for (int k = 0; k < m; ++k) {
            if (matrix[k][colIndex] > minVal) {
                isSaddlePoint = false;
                break;
            }
        }

        // If found, print the saddle point
        if (isSaddlePoint) {
            cout << "Saddle Point found at position (" << i << ", " << colIndex << "): " << minVal << endl;
            return;  // Assuming there is at most one saddle point
        }
    }

    // If no saddle point is found
    cout << "No saddle point found." << endl;
}

int main() {
    // Example usage
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    // Dynamic allocation of a 2D array
    int** matrix = new int*[m];
    for (int i = 0; i < m; ++i) {
        matrix[i] = new int[n];
    }

    // Input matrix elements
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Find and display the saddle point
    findSaddlePoint(matrix, m, n);

    // Free the allocated memory
    for (int i = 0; i < m; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
