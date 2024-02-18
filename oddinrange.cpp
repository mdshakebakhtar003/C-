// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void odd(int x,int y){
    int i;
    for(i=x;i<=y;i++){
        if(i%2!=0) cout<<i<<endl;
    }
}
int main(){ int a,b;
cout<<"enter a and b:";
cin>>a>>b;
odd(a,b);
    

    return 0;
}