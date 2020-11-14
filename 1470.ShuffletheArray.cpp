#include <bits/stdc++.h>
using namespace std;
  vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
		for(int i=0;i<n;i++){
        	ans.push_back(nums[i]);
        	ans.push_back(nums[i+n]);
		}
		return ans;
    }
int main(){
    vector<int> arr;
    int a;
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>a;
        arr.push_back(a);
    }
    vector<int> ans=shuffle(arr,n);
    for(int i=0;i<2*n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}