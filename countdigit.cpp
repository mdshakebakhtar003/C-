// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cout<<"Enter n:";
    cin>>n;
    int count=0;
    int a=n;
    while(n>0){
        
    n/=10;
    count++;}
    if(a==0) cout<<"1 is no. of digit";
   else cout<<count <<" is no. of digit";
    return 0;
}