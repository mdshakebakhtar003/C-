// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main() { int i,j,k;
    vector<string>arr={"flower","flow","flight"};
    sort(arr.begin(),arr.end());
    string first=arr[0];
    string last=arr[arr.size()-1];
    string s;
    if(arr.size()==1) cout<<arr[0];
    for(i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]) {
            s+=first[i];
        }
        else break;
    }
    cout<<s;
    return 0;
}