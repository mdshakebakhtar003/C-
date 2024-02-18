// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void square(int n){
    int i;
    
    for(i=1;i<=n;i++){int prod=1;
        prod =prod*i*i;
        cout<<prod<<endl;
    }
}
int main() { int n;
   cin>>n;
   square(n);
    return 0;
}