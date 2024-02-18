// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fibonacii(int n){
    if(n==1 || n==2) return 1;
    
    return fibonacii(n-1)+fibonacii(n-2);
}
int main() { int n;
            cout<<"enter n:";
            cin>>n;
           int fib =fibonacii(n);
            cout<<fib;
   
   
    return 0;
}