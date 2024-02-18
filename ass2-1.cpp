// Online C++ compiler to run C++ program online
#include <iostream>
using namespace  std;
int main() {
    int n;
    int a,b,x,y,z;
  cin>>n;
   switch(n>=100){
     case 1: 
   b=n/100;
     cout<<"no of 100 rs notes is:"<<b<<endl;
     if(n<100) b=0;
     break;}
     switch(n>=50){
     case 1: 
    a=n/50;
     cout<<"no of 50 rs notes is:"<<a<<endl;
     if(n<50) a=0;
     break;}
       switch(n>=20){
     case 1: 
     z=n/20;
     cout<<"no of 20 rs notes is:"<<z<<endl;
     if(n<20) z=0;
     break;}
 switch(n>=10){
     case 1: 
     x=n/10;
     cout<<"no of 10 rs notes is:"<<x<<endl;
     if(n<10) x=0;
     break;}
      switch(n>=5){
     case 1: 
     y=n/5;
     cout<<"no of 5 rs notes is:"<<y<<endl;
     if(n<5) y=0;
     break;}
    
      
     
     cout<<"total notes is:"<<a+b+x+y+z;
     
     
 }