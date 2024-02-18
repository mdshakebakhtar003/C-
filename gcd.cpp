// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int gcd(int x,int y){
    int i,hcf;
    for(i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
    } return hcf;
}
int main() {
    int x,y;
    cin>>x>>y;
    gcd(x,y);
    cout<<gcd(x,y);
    return 0;
}