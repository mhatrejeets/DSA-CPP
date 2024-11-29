#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of rows of first matrix: ";
    int row1, col1;
    cin >> row1;
    cout << "\nEnter the number of columns of first matrix: ";
    cin >> col1;
    int arr1[row1][col1];

    cout << "Enter for first matrix:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << "Enter the element of row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> arr1[i][j];
        }
    }

    cout << "\nThe first matrix is:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Enter the number of rows of second matrix: ";
    int row2, col2;
    cin >> row2;
    cout << "\nEnter the number of columns of second matrix: ";
    cin >> col2;
    int arr2[row2][col2];

    cout << "Enter for second matrix:\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cout << "Enter the element of row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> arr2[i][j];
        }
    }

    cout << "\nThe second matrix is:\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }
     int choice =4;
while(choice !=0){
    
cout<<" \n Enter 1.To perform addition. \n 2.To perform subtraction of matrix \n 3. To perform multiplication."<<endl;
    
    cin>>choice;

    if(choice ==1){
         int arrSum[row1][col1];
        if(row1!=row2 || col1!=col2){
            cout<<"Addition is not possible";
        }
        else{
       
         for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            arrSum[i][j] = arr1[i][j] + arr2[i][j];
        }
     }
    }
     cout << "\nThe Product is:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << arrSum[i][j] << " ";
        }
        cout << "\n";
    }
    }

    else if(choice ==2){
        int arrSum[row1][col1];
        if(row1!=row2 || col1!=col2){
            cout<<"Subtraction is not possible";
        }
        else{
       
         for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            arrSum[i][j] = arr1[i][j] - arr2[i][j];
        }
     }
    }
    cout << "\nThe Product is:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << arrSum[i][j] << " ";
        }
        cout << "\n";
    }
    }

    else if(choice==3){
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible.\n";
        return 0;
    }

    int mul[row1][col2];

    
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            mul[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "\nThe Product is:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << mul[i][j] << " ";
        }
        cout << "\n";
    }

    
}
}
return 0;
}

// }
//code aim objetive output ssbut code in text
//then convert to pdf give name and roll
//paper name and faq 