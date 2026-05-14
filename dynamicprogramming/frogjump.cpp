#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int frogjump(int index,vector<int>&arr,vector<int>&dp){
        if(index==0) return 0;
      
        if(dp[index]!=-1) return dp[index];
        int left=frogjump(index-1,arr,dp)+abs(arr[index]-arr[index-1]);
        int right=INT_MAX;
        if(index>1){
         right=frogjump(index-2,arr,dp)+abs(arr[index]-arr[index-2]);
        }
        return dp[index]=min(left,right);
    }
};

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//     vector<int>dp(n+1,-1);
//     Solution sol;
//     cout<<sol.frogjump(n-1,arr,dp);
// }

int main(){
     int n;
    cin>>n;
    vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
    vector<int>dp(n,0);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int fs=dp[i-1]+abs(arr[i]-arr[i-1]);
        int ss=INT_MAX;
        if(i>1) ss=dp[i-2]+abs(arr[i]-arr[i-2]);
        dp[i]=min(fs,ss);

    }
    cout<<dp[n-1];

}