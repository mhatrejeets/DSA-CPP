#include <iostream>
using namespace std;

class myclass {
  public:
    int size;
    int key;
    int arr[20];

    void set() {
        cout << "Enter the size of the array: ";
        cin >> size;
        cout << endl << "Enter the elements of the array: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << endl << "Enter the key: ";
        cin >> key;
    }

  int binary() {
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end) {
      mid = (start + end) / 2;

      if (arr[mid] == key) {
        return mid;
      } 
      else if (arr[mid] > key) {
        end = mid - 1;
      } 
      else {
        start = mid + 1;
      }
    }

    return -1;
  }

};

int main() {
    myclass c;
    c.set();
    int result = c.binary();
    if (result == -1) {
        cout << "The key is not present in the array." << endl;
    } else {
        cout << "The key is present at the index " << result+1 << endl;
    }
    return 0;
}
