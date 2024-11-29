//adjacency matrix
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter number of vertices: ";
    cin>>n;
    int mat[n][n];
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            mat[i][j]=0;
            }
        }
    int ch;
    do
    {
    cout<<"enter 1:add edge, 2:remove edge, 3:display 4:exit=";
    cin>>ch;
    switch(ch)
    {
        case 1: 
        int a,b;
        cout<<"enter starting and ending vertex: ";
        cin>>a>>b;
        mat[a][b]=1;
        break;
        case 2:
        cout<<"enter starting and ending vertex: ";
        cin>>a>>b;
        mat[a][b]=0;
        break;
        case 3:
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        break;
    }
    }while(ch!=4);
    return 0;
}