// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
int i;
int sum=0;
cout<<"enter array elements";
for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}
   for(int i=0;i<=n-1;i++){
    sum=sum+arr[i];
}
cout<<sum;
    return 0;
}