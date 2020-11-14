#include <bits/stdc++.h>
using namespace std;
 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m=INT_MIN;
        vector<bool> ans;
        int n=candies.size();
        for(int i=0;i<n;i++){
        	m=max(m,candies[i]);
		}
		for(int i=0;i<n;i++){
        	if(candies[i]+extraCandies>m){
        		ans.push_back(true);
			}
			else{
				ans.push_back(false);
			}
		}
		return ans;
    }
int main(){
    vector<int> arr;
    int a;
    int s;
    cin>>s;
    for(int i=0;i<100;i++){
        cin>>a;
        arr.push_back(a);
    }
    vector<bool> ans=kidsWithCandies(arr,s);
    for(int i=0;i<5;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}