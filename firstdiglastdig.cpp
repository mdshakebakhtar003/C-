// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void lastdig(int n){ int ld;
    while(n>0){ 
     ld=n%10;
    n=n/10;}
    cout<<"first dig is: "<<ld<<endl;
}
int main() {
    int n;
    cout<<"enter number";
    cin>>n;
    lastdig(n);
    cout<<"last dig is: "<<n%10;

    return 0;
}