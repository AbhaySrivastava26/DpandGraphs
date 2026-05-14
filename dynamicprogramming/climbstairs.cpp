// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     int climbstairs(int n,vector<int>&dp){
//         if(n==0) return 1;
//         if(n==1) return 1;
//         if(dp[n]!=-1) return dp[n];
//         int left=climbstairs(n-1,dp);
//         int right=climbstairs(n-2,dp);
//         dp[n]=left+right;
//         return dp[n];
//     }
// };

// int main(){
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,-1);
//     Solution sol;
//     cout<<sol.climbstairs(n,dp);
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Number for which Fibonacci is to be calculated
    int n = 3;

    // Create a dp array initialized with -1
    vector<int> dp(n + 1, -1);

    // Base cases
    dp[0] = 1;
    dp[1] = 1;

    // Fill dp array using bottom-up dynamic programming
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // Print the nth Fibonacci number
    cout << dp[n];
    return 0;
}
