// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int countdig(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}
int main(){ int n;
cout<<"enter n:";
cin>>n;
countdig(n);
cout<<"no of digit is: "<<countdig(n);
    return 0;
}