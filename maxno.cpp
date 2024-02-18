// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main() {   int i,j,k;
               vector<string>v;
                v.push_back("0123");
                v.push_back("0023");
                v.push_back("456");
                v.push_back("00182");
                v.push_back("940");
                v.push_back("2301");
                int max=stoi(v[0]);
                for(i=0;i<=v.size()-1;i++){
                    int x=stoi(v[i]);
                    if(x>max) max=x;
                }
    cout<<max;
    return 0;
}