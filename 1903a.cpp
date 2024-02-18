#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int b[n];
         for(int i = 0; i < n; i++) b[i]=a[i];
        bool f = false;
       
        for(int x=1;x<=k;x++){
             for(int i=1;i<=n;i++){
        for (int i = 0; i + (x-1) < n; i++) {
              bool flag = true;
            for (int i = 1; i < n; i++) {
                if (a[i - 1] > a[i]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
               // cout << "Yes" << endl;
                f = true;
                break;
            }
            int s = i;
            int e = i + x - 1;
            if(a[s]>a[e]){
            while (s < e) {
                swap(a[s], a[e]);
                s++;
                e--;
            }}
           // for(int i=0;i<n;i++) cout<<a[i];
             flag = true;
            for (int i = 1; i < n; i++) {
                if (a[i - 1] > a[i]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
               // cout << "Yes" << endl;
                f = true;
                break;
            }

        }
         if(f) break;
        }
          if(f) break;
            for(int i = 0; i < n; i++) a[i]=b[i];
        }
       
        
      /*  if (!f) {
            cout << "No" << endl;
        }*/

          bool f1 = false;
          
        for(int x=1;x<=k;x++){
               for(int i=1;i<=n;i++){
        for (int i =n-1; i-(x-1)>=0; i--) {
              bool flag1 = true;
            for (int i = 1; i < n; i++) {
                if (a[i - 1] > a[i]) {
                    flag1 = false;
                    break;
                }
            }

            if (flag1) {
               // cout << "Yes" << endl;
                f1 = true;
                break;
            }
            int s = i;
            int e = i -(x - 1);
            if(a[s]<a[e]){
            while (e < s) {
                swap(a[s], a[e]);
                s--;
                e++;
            }}
           // for(int i=0;i<n;i++) cout<<a[i];
             flag1 = true;
            for (int i = 1; i < n; i++) {
                if (a[i - 1] > a[i]) {
                    flag1 = false;
                    break;
                }
            }

            if (flag1) {
               // cout << "Yes" << endl;
                f1 = true;
                break;
            }

        }
         if(f1) break;
          
           
           }
     for(int i = 0; i < n; i++) a[i]=b[i];
         if(f1) break;
        }
       
        
        if(f || f1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
      


    }

    return 0;
}
