// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    int i;
    cout<<"enter aaray elements";
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    
    for(i=0;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=0;i<=n-1;i++){
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"max is"<<max<<endl;
    cout<<"smax is"<<smax;
    return 0;
}