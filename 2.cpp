#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int last=0;
        int mx=INT_MIN;
        int a[n];
        for(int i=0;i<n;i++){
           cin>>a[i];
        }
         for(int i=0;i<n;i++){
           mx=max(mx,a[i]-last);
         last=a[i];     
         }
         mx=max (mx,2*(x-last));
         cout<<mx;
         cout<<endl;
    }
}