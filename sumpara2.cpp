// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int n,int sum){ 
                   if(n==0){
                       cout<<sum;
                       return;
                   }
                    print(n-1,sum+n);
    
}
int main() {
            int n;
            cout<<"enter n:";
            cin>>n;
            int sum=0;
           print(n,0);
           
    return 0;
}