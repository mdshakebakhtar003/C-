// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    int x;
   
    int i;
    cout<<"enter aaray elements";
    for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }
     cout<<"enter element to calculatae its graeter:";
    cin>>x;
    int count=0;
    for(i=0;i<=n-1;i++){
        if(arr[i]>x){
          count++;}
    }
    cout<<"no of element greater than x is "<<count;
    
    return 0;
}