// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int x,y;
cout<<"enter x and y coordinate  :";
cin>>x>>y;
if(y==0 && x!=0)
cout<<"particle lies on the x-axis";
else if (x==0 && y!=0)
cout<<"particle lies on y axis";
else if(x==0 && y==0)
cout<<"particle lies at origin";
else 
cout<<"arbitary position";
 

 
    return 0;
}