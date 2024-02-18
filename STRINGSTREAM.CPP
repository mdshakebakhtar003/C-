// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
#include<limits.h>
#include<vector>
#include<sstream>
using namespace std;
int main() { int i,j,k;
                string str;
                getline(cin,str);
                 string temp;
                 stringstream ss(str);
                 while(ss>>temp){
                     cout<<temp<<endl;
                 }
   
   
    return 0;
}