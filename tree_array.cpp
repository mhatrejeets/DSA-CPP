#include<iostream>
using namespace std;

void insert_element_left(char arr[], int index, char value){
    arr[2*index+1]= value;
}

void insert_element_right(char arr[], int index, char value){
    arr[2*index+2]= value;
}
void display(char arr[]){
    for(int i=0;i<100;i++){
        if(arr[i]!= NULL){
            cout<<arr[i]<<"\t";
        }
    }
}

int main(){
    char arr[100];
    for(int i=0;i<100;i++){
        arr[i]=NULL;
    }

    cout<<"Enter the root of the array : ";
    cin>>arr[0];
    cout<<"\nEnter the choice 1 and 0 to exit for adding element : ";
    int choice;
    cin>>choice;

    

    while(choice !=0){
        cout<<"\nEnter the index of parent node : ";
        int index;
        cin>>index;
        cout<<"\nEnter the value to be inserted : ";
        char value;
        cin>>value;
        char choose;
        cout<<"\nEnter l to insert in left and r to inseert at right : ";
        cin>> choose;
        if(choose =='l'){
            insert_element_left(arr,index,value);
        }
        else if (choose =='r'){
            insert_element_right(arr,index, value);
        }
        cout<<"\nEnter the choice 1 and 0 to exit for adding element : ";
        cin>> choice;

        


    }
    display(arr);

    return 0;

}