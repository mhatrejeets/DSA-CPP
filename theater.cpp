#include<iostream>
#define row 3
#define column 3
using namespace std;
int bookseat(int arr[row][column]){
    int choice=100;
    int r,c;
    while(choice !=-1){
        cout<<"Enter the seat no in terms of rows and column: "<<endl;
        cin>>r;
        cin>>c;
        if(arr[r][c]==0){
        arr[r][c]=1;
        cout<<"Enter the -1 if booking is done and 1 if want to book more tickets. \n";
        cin>>choice;
        }
        else{
            cout<<"Sorry this seat is already booked try other.";
        }
    }
    return arr[row][column];
}

 void available_seat(int arr[row][column]){
    cout<<"The available seats are :";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[row][column]==0 || arr[row][column]==2){
                cout<< i+1<<""<<j+1<<"/t";

            }

        }
    }
 }

 int cancelseat(int arr[row][column]){
    int choice=100;
    int r,c;
    while(choice !=-1){
        cout<<"Enter the seat which is to be cancelled in terms of rows and column: "<<endl;
        cin>>r;
        cin>>c;
        if(arr[r][c]==1){
        arr[r][c]=2;
        cout<<"Enter the -1 if cancellation  is done and 1 if want to book more tickets. \n";
        cin>>choice;
        }
        else{
            cout<<"Sorry this seat is already empty try other.";
        }
    }
    return arr[row][column];
}

void cancelled_seat(int arr[row][column]){
    cout<<"The cancelled seats are :";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[row][column]==2){
                cout<< i+1<<""<<j+1<<"/t";

            }

        }
    }
    
 }



int main(){
    
   int seat[row][column];

   for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        seat[i][j]=0;
    }
   }
    
   
   int value;
//     cout<<"Enter 1 : To  check available seat . \n Enter 2 : To book a seat. \n Enter 3: To cancell a seat. \n Enter 4 : To view cancellation record.\n";
//    cin>>value;
    cout<<"Enter 1 : To  check available seat . \n Enter 2 : To book a seat. \n Enter 3: To cancell a seat. \n Enter 4 : To view cancellation record.\n Enter 5 : To exit.";
   while(1){
    cin>>value;
    switch(value){
        case 1 :
            available_seat(seat);
            break;

        case 2 : 
            seat[row][column]= bookseat(seat);
            break;

        case 3 :
            seat[row][column] = cancelseat(seat); 
            break;

        case 4 :
            cancelled_seat(seat);
            break;
        case 5:
        exit(0);
        break;

        default :
            cout<<"\nInvalid entry \n";
            break;
    }
    // cin>>value;
   }

return 0;
}