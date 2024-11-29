#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"ENter any number "<<endl;
    cin>>n;
    int x=1;
    int ans=0;
    while(x<=n){
        x=x*2;
        x=x/2;
        while(x>0){
            int ld= n/x;
            n=n-(ld*x);
            x=x/2;
        ans=ans*10 + ld;
        }

    }
    cout<<ans;
}