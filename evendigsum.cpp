// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=0;
    int sum=0;
    while(n>0){
    int ld=n%10;
    if(ld%2==0) x=ld;
    else x=0;
    sum+=x;
    n=n/10;}
    cout<<sum;
    return 0;
}