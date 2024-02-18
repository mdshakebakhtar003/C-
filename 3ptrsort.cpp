// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>arr;
    int n,i,j;
    cout<<"enter size  n:";
    cin>>n;
  
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int start=0;
    int mid=0;
    int end=n-1;
    while(mid<=end){
        if(arr[mid]==2){
            int temp=arr[mid];
            arr[mid]=arr[end];
            arr[end]=temp;
            end--;
        }
        else if (arr[mid]==0){
            int temp=arr[mid];
            arr[mid]=arr[start];
            arr[start]=temp;
            start++;
            mid++;
        }
        else
        mid++;
    }
    for(i=0;i<=n-1;i++) cout<<arr[i];
    
    return 0;
    
}