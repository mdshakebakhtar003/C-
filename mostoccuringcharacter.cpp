// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;
int main() { int i,j,k;
                string s;
                getline(cin,s);
            vector<int>a(26,0);
           
            for(i=0;i<=s.size()-1;i++){
                char ch=s[i];
                int ascii=(int)ch;
                a[ascii-97]++;
            }
            int max=INT_MIN;
   for(i=0;i<=25;i++){
       if(a[i]>max) max=a[i];
   }
    for(i=0;i<=25;i++){
        if(a[i]==max){
            cout<<(char)(i+97)<<" "<<max;}
        }
   
   
    return 0;
}