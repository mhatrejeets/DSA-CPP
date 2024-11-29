#include<iostream>
using namespace std;
# define height 10
int enqueue(int queue[],int data){
    int i =0;
    int j=0;
    while(queue[i]!=0){
         j= i+1;
        i++;
    }
    if(j<=height){
    queue[j]=data;
    }
    else{
        cout<<"\n Queue OverFlow \n";
    }
    //cout<<"#######################"<<queue[height]<<endl<<height<<endl;
    return queue[height];

}

int dequeue(int queue[]){
    int j=0;
    int i =0;
    
    while(queue[i]!=0){
         j= i;
    }
    if(j==0){
        cout<<"\n Queue Underflow \n";
    }

    else{
        int data = queue[0];
        for(int k=0;k<j;k++){
            int temp;
            queue[k]=queue[k+1];
        }
        cout<<"\n Data "<<data<<" is dequed.";
        
    }

    return queue[height];
}

int main(){
    int queue[height];
    
    for(int i= 0;i<height;i++){
        queue[i]==0;
    }

    queue[height]=enqueue(queue,1);
    queue[height]=enqueue(queue,2);
    queue[height]=enqueue(queue,3);
    for(int l=0;l<height;l++){
        cout<<"\n Element: "<<queue[l]<<endl;
    }

    queue[height]=dequeue(queue);
    for(int l=0;l<height;l++){
        cout<<"\n Element: "<<queue[l]<<endl;
    }
    return 0;



}