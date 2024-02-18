// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() { int i,j;
  string s="shaaakeb";
  
  int total=0;
  for(i=0;s[i]!='\0';i++){
    int count=0;
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
          count++;
           total++;
          cout<<s[i]<<" "<<count<<endl;
         
      }
  }
  cout<<"total vowel is :"<<total;
    return 0;
}