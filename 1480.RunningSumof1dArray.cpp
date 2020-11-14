#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& num){
    int n=num.size();
    int sum=num[0];
    for(int i=1;i<n;i++){
        sum+=num[i];
        num[i]=sum;
    }
    return num;
}
int main(){
    vector<int> arr;
    int a;
    for(int i=0;i<1000;i++){
        cin>>a;
        arr.push_back(a);
    }
    vector<int> ans=runningSum(arr);
    return 0;
}