// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() { int i,j,k;
            string s;
            cout<<"input first string:";
            cin>>s;
           string t;
           cout<<"input second string:";
           cin>>t;
           sort(s.begin(),s.end());
           sort(t.begin(),t.end());
           if(s==t) cout<<"anagram";
           else cout<<"not anagram";
   
   
   
   
    return 0;
}