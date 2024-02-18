// Online C++ compiler to run C++ program online
#include <iostream>
#include<deque>
#include<vector>
using namespace std;
int main() { int n;
            cout<<"enter n";
            cin>>n;
            vector<int>nums;
           vector<int>ans;
            int k;
            cout<<"Enter k ";
            cin>>k;
            cout<<"Enter array elements:";
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                nums.push_back(x);
            }
            deque<int>dq;
            int i;
          n=nums.size();
              for( i=0;i<n;i++){
            while(dq.size()>0 && nums[i]>nums[dq.back()]) dq.pop_back();
            dq.push_back(i);
              int j=i-k+1;
            while(dq.front()<j) dq.pop_front();
           if(i>=k-1) ans.push_back(nums[dq.front()]);
            }
            for(int i=0;i<ans.size();i++) cout<<ans[i];
    
    
    

    return 0;
}