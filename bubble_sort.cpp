#include<iostream>
using namespace std;

class c {
public:
    int size;

    void bubble_sort() {
        cout << "Enter the size of array: ";
        cin >> size;
        int arr[size];

        for (int i = 0; i < size; i++) {
            cout << "Element " << i << ": ";
            cin >> arr[i];
        }

        int len = size;
        while (len != 1) { 
            for (int i = 0; i < len - 1; i++) { 
                if (arr[i] > arr[i + 1]) {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            len--;
        }

        cout << "The sorted array is:\n";
        for (int i = 0; i < size; i++) { 
            cout << arr[i] << " ";
        }
    
    }
};

int main() {
    c c1;
    c1.bubble_sort();
    return 0;
}
