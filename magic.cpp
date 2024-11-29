//cpp code to check wether a matrix is a magic square martix of the number
#include<iostream>
using namespace std;
class magic {
    public :

    void check_magic (){
    cout<<"\n Enter the rows and column of square matrix :";
    int row;
    cin>>row;
    
    int column;
    column = row;
    int arr [row][column];

    cout<<"\n Enter the elements in the matrix :";

    cout<<"\n Enter the magic number";
    int magicnum;
    cin>>magicnum;

    for(int i=0; i< row; i++){
        for(int j=0;j<column;j++){
            cout<<"\n Element "<<i<<j<<" ";
            cin>>arr[i][j];
        }
    }

        int sum;
        int flag = 99;
        //Loop for column sum check.
        for(int i=0;i<row;i++){
             sum=0;
            for(int j=0;j<column;j++){
                sum += arr[i][j];
                
            }
            
            if(sum != magicnum){
                
                flag=0;
                // break;
            }
        }

        //Loop for row sum check.
        for(int i=0;i<column;i++){
             sum=0;
            for(int j=0;j<row;j++){
                sum += arr[i][j];
            }
           
            if(sum != magicnum){
                flag=0;
                // break;
            }
        }

        //Loop for diagonal sum check.
         sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(i==j){
                sum += arr[i][j];
                    if(sum != magicnum){
                     flag=0;
                    // break;
                }
            }
            
            
        }
        }

        sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cout<<i<<j<<endl;
            if(i+j==row-1){
                cout<<i<<j<<sum<<endl;
                 sum += arr[i][j];
                    
            }
           
        }

        }
        
            if(sum != magicnum){
                     flag=0;
                    // break;
                }
    

    if(flag==0){
        cout<<"\n The given matrix is not a migic square matrix of 6 \n";
    }

    else if(flag !=0){
        cout<<"\n The given matrix is a migic square matrix of 6 \n";
    }
    cout<<flag;
    }
    
    
};
int main()
{
    magic m1;
    m1.check_magic();
    return 0;
}