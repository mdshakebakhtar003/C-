#include <iostream>
using namespace std;
int main() { 
int n;
cin >> n;
int nsp=n+1;
for(int i=1;i<=n-1;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=nsp;j++){
        cout<<" ";
    }nsp-=2;
      for(int j=1;j<=i;j++){
        cout<<"*";}cout<<endl;
}

// Printing 0th row
for(int i = 0; i < 2 * n - 1; ++i) {
cout <<"*";
}cout<<endl;
for(int i = 0; i < 2 * n - 1; ++i) {
cout <<"*";
}
cout << endl;
// Printing upper pattern
for(int i = 1; i < n; ++i) {
for(int j = 0; j < n - i; ++j) {
cout << "*";
}
for(int j = 0; j < 2 * i - 1; ++j) {
cout << " ";
}
for(int j = 0; j < n - i; ++j) {
cout << "*";
}
cout << endl;
}
}