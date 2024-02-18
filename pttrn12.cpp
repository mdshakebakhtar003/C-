 /*#include <iostream>
using namespace std;
int main() { int i,j,k,l;
int n;
cin >> n;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(k=1;k<=i;k++){
        cout<<"*";
    }cout<<endl;
}
for(i=1;i<=n-1;i++){
    for(j=1;j<=i;j++){
        cout<<" ";
    }
    for(k=1;k<=n-i;k++){
        cout<<"*";
    }cout<<endl;
}
return 0;
} */

#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
// Printing upper triangle
for(int i = 0; i < n; ++i) {
for(int j = 0; j < n-i-1; ++j) {
cout <<" ";
}
for(int j = 0; j <= i; ++j) {
cout <<"*";
}
cout << endl;
}
// Printing lower triangle
for(int i = 0; i < n-1; ++i) {
for(int j = 0; j <= i; ++j) {
cout <<" ";
}
for(int j=1;j<=n-(i+1);j++){
    cout<<"*";
}cout<<endl;
}
}





