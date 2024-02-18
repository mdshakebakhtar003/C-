// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
float Area(int n){
   float area=3.14*n*n;
   return area;
    
}

int main() { int n;
cout<<"enter radius"<<endl;
   cin>>n;
   Area(n);
   cout<<Area(n);
    return 0;
}