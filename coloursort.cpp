// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    int i,j;
    cout<<"enter array element in 0,1,2";
 for(i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(i=0;i<=n-1;i++){
        for(j=i+1;j<=n-1;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    for(i=0;i<=n-1;i++){
        cout<<arr[i];
    }
    return 0;
}