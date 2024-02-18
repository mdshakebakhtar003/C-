// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fac(int n){ int prod=1;
for(int i=1;i<=n;i++) prod *=i;
    return prod;
}
int combination(int n,int r){
    int npr=fac(n)/(fac(r) * fac(n-r));
    return npr;
}

int main() {
    int n,r,i,j;
    cout<<"enter n and r ";
    cin>>n>>r;
    fac(n);
    fac(r);
    combination( n,r);
    cout<<combination(n,r);
   
    return 0;
}