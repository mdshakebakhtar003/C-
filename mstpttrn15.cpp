#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j,k,l;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
          cout<<" ";
        }
        for(l=i-1;l>=1;l--){
            cout<<(char)(l+65);
        }
        for(k=1;k<=i;k++){
            cout<<(char)(k+64);
        }cout<<endl;

    }
}
