// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fac(int n){ int prod=1;
for(int i=1;i<=n;i++) prod *=i;
    return prod;
}
int permutation(int n,int r){
    int npr=fac(n)/fac(n-r);
    return npr;
}

int main() {
    int n,r,i,j;
    cout<<"enter n and r ";
    cin>>n>>r;
    fac(n);
    fac(r);
    permutation( n,  r);
    cout<<permutation(n,r);
   
    return 0;
}