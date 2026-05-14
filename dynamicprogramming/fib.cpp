#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//     int fib(int n,vector<int>&dp){
//         if(n<=1) return n;
//         if(dp[n]!=-1) return dp[n];
//         dp[n]=fib(n-1,dp)+fib(n-2,dp);
//         return dp[n];
//     }
// };

// int main(){
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,-1);
//     Solution sol;
//     cout<<sol.fib(n,dp);
// }
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;

        vector<int> dp(n + 1, 0);

        dp[0] = 0;
        dp[1] = 1;

        // Fill dp array iteratively
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};

int main() {
    int n ;
    cin>>n;
    Solution sol;
    cout << sol.fib(n);
    return 0;
}
