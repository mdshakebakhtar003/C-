// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i,j,k,l;
    int s=0;
    int t=0;
    int a[3][3]={{1,1,1},{1,0,1},{1,1,1}};
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(a[i][j]==0){
                s=i;
                t=j;
                
            }
        }
    }
    for(i=0;i<=2;i++){
        a[i][t]=0;
        for(j=0;j<=2;j++){
            a[s][j]=0;}}
            for(i=0;i<=2;i++){
                for(j=0;j<=2;j++){
                    cout<<a[i][j];
                }cout<<endl;
            }
    return 0;
}

/* LEETCODE-73

#include<iostream>
#include<vector>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
int n = matrix.size();
int m = matrix[0].size();
int col0 = 1;
for(int i=0;i<n;i++){
if(matrix[i][0] == 0)col0 = 0;
for(int j=1;j<m;j++){
if(matrix[i][j] == 0){
matrix[0][j] = 0;
matrix[i][0] = 0;
}
}
}
for(int i = n - 1 ; i >= 0 ; i--){
for(int j = m - 1 ; j > 0 ; j--){
if(matrix[i][0] == 0 or matrix[0][j] == 0)
matrix[i][j] = 0;
*/