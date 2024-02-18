// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int height[12]={0,1,0,2,1,0,1,3,2,1,2,1};
   int i;
   int prev[12];
    prev[0]=-1;
    int max=height[0];
    for(i=1;i<=11;i++){
       prev[i]=max;
       if(max<height[i]){
           max=height[i];
       }
    }
    prev[11]=-1;
    max=height[11];
    for(i=10;i>=0;i--){
        if(max<prev[i]) prev[i]=max;
        if(max<height[i]) max=height[i];
    } int water=0;
for(i=1;i<=10;i++){
    if(prev[i]<height[i]){
       water+=height[i]-prev[i]; 
    }
} cout<<water;
    return 0;
}