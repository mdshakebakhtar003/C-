// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j,k,l,m;
    for(m=1;m<=2*n-1;m++){
        cout<<char(m+'A'-1);
    }cout<<endl;
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            cout<<(char)(j+64);
        }
        for(k=1;k<=2*i-1;k++){
            cout<<" ";
            j++;
        }
        for(l=1;l<=n-i;l++){
            cout<<(char)(j+64);
            j++;
        }cout<<endl;
    }
    
    
    
    return 0;
}
/*
#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
for(int i = 0; i < 2 * n - 1; ++i) {
cout << (char)('A' + i) ;
}
cout << endl;
for(int i = 1; i < n; ++i) {
for(int j = 0; j < n - i; ++j) {
cout << (char)('A'+j) ;
}
for(int j = 0; j < 2*i-1; ++j) {
cout <<" ";
}
for(int j = 0; j < n - i; ++j) {
cout << (char)('A'+n+i+j-1) ;
}
cout << endl;
}
}






*/