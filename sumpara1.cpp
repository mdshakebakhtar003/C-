// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int print(int i,int n,int sum){ if(i>n) return sum; 
                        sum+=i;
                    print(i+1,n,sum);
                   
    
    
}
int main() {
            int n;
            cout<<"enter n:";
            cin>>n;
            int sum=0;
           int add=print(1,n,sum);
            cout<<add;
    return 0;
}