#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
          string s="my name is shakeb";
          int len=s.length();
          cout<<len<<endl;
             int length=s.size();
              cout<<length<<endl;
        s.push_back('a');
        cout<<s<<endl;
        s="hello"+s+"akhtar";
         cout<<s<<endl;
          string t="shakeb";
         // reverse(t.begin(),t.end());
           reverse(t.begin()+1,t.begin()+6);
          cout<<t;
          
}