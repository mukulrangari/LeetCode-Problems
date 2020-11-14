#include <bits/stdc++.h>
using namespace std;
 int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
        	for(int j=i+1;j<n;j++){
        		if(nums[i]==nums[j]){
        			ans++;
				}
			}
		}
        return ans;
    }
int main(){
    vector<int> arr;
    int a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    int ans=numIdenticalPairs(arr);
    cout<<ans;
    return 0;
}