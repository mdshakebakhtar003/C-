// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j,k,l;
    

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
        cout<<k;}
        int a=i-1;
        for(l=1;l<=i-1;l++){ 
            cout<<a;
            a--;
        }
        cout<<endl;
  
    }
    
    return 0;
}