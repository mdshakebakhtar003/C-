// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int rev=0;
    int sum1,sum2=0;
    int sum=0;
    int t=n;
    while(n>0){
    int ld=n%10;
    rev=rev*10+ld;
    sum2=sum2+ld;
    n=n/10;}
     cout<<rev<<endl;
     cout<<"sum of rev and number"<<rev+t<<endl;
    while(rev>0){
        int ld1=rev%10;
        sum1=sum1+ld1;
        rev = rev/10;
    }
    sum=sum2+sum1;
    cout<<"sum of rev digit and number digit"<<sum<<endl;

   
    return 0;
}