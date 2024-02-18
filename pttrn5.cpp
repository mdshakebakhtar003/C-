// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() { int n,i,j,t,k;
            cin>>n;
             int nst=n-1;
            for(i=1;i<=2*n-1;++i){
                if(i<=n){ t=i;
                for(j=1;j<=i;++j){
                   cout<<"*";
                  
                }}
            if(i>n){
               
                for(k=1;k<=nst;k++){
                   cout<<"*";
                 
            } nst--; 
                
            }
                    
                cout<<endl;     
                    
                    
                }
            
            
    
    return 0;
}
/*
#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
// Printing upper triangle
for(int i = 0; i < n; ++i) {
for(int j = 0; j <= i; ++j) {
cout << "* ";
}
cout << endl;
}
// Printing lower triangle
for(int i = 0; i < n-1; ++i) {
for(int j = 0; j < n - i - 1; ++j) {
cout << "* ";
}
cout << endl;
}
return 0;
} */