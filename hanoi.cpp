// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void towerhanoi(int n,char s,char h,char d){ 
                        if(n==0) return;
                        
                        towerhanoi(n-1,s,d,h);
                          cout<<s<<"->"<<d<<endl;
                        towerhanoi(n-1,h,s,d);
                     
                
}
int main() { int n;
            cout<<"enter n:";
            cin>>n;
            towerhanoi(n,'A','B','C');
  
  
  
  
    return 0;
}