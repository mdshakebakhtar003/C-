// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int rev=0;
    int sum=0;
    while(n>0){
    int ld=n%10;
    rev=rev*10+ld;
    sum=sum+ld;
   
    n=n/10;}
    cout<<sum<<endl;
    cout<<rev;
    return 0;
}