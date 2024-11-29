#include<iostream>
#define row 10
#define column 7
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
        cout<<"Enter the -1 if booking is done and 0 if want to book more tickets. \n";
        cin>>choice;
        }
        else{
            cout<<"\n Sorry this seat is already booked try other. \n";
        }
    }
    cout<<"\n Seat is booked .\n";
    
    return arr[row][column];
}

 void available_seat(int arr[row][column]){
    cout<<"\n The available seats are : ";
    for(int i=0;i<row;i++){
        cout<<"\n";
        for(int j=0;j<column;j++){
      
            if(arr[i][j]==0 || arr[i][j]==2){
            
                cout<< i<<" "<<j<<"\t";

            }

            else{
                cout<<"  \t";
            }

        }
    }
    cout<<"\n These seats are available.";
 }

 int cancelseat(int arr[row][column]){
    int choice=100;
    int r,c;
    while(choice !=-1){
        cout<<"\n Enter the seat which is to be cancelled in terms of rows and column: "<<endl;
        cin>>r;
        cin>>c;
        if(arr[r][c]==1){
        arr[r][c]=2;
        cout<<"\n Enter the -1 if cancellation  is done and 1 if want to book more tickets. \n";
        cin>>choice;
        }
        else{
            cout<<"\n Sorry this seat is already empty try other. \n";
        }
    }
    return arr[row][column];
}

void cancelled_seat(int arr[row][column]){
    cout<<"\n The cancelled seats are : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==2){
                cout<< i<<""<<j<<"\t";

            }

        }
    }
  cout<<"\n The seat is cancelled."<<endl;  
 }



int main(){
    
   int seat[row][column];

   for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        seat[i][j]=0;
        
    }
   }


   
   int value;
    cout<<"Enter 1 : To  check available seat . \n Enter 2 : To book a seat. \n Enter 3: To cancell a seat. \n Enter 4 : To view cancellation record.\n";
   cin>>value;
   while(value !=-1){
    
    
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

        default :
            cout<<"\nInvalid entry \n";
            break;
    }
    cout<<"Enter 1 : To  check available seat . \n Enter 2 : To book a seat. \n Enter 3: To cancell a seat. \n Enter 4 : To view cancellation record.\n Enter -1 : To exit. \n";
    cin>>value;
   }
   cout<<"Thank You.";

return 0;
}