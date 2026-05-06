#include<bits/stdc++.h>
using namespace std;
void dfs(int start,vector<vector<int>>&adj,vector<int>&vis,vector<int>&ans){
    ans.push_back(start);
    vis[start]=1;


    for(auto it:adj[start]){
        if(!vis[it]){
           
            dfs(it,adj,vis,ans);
        }
    }
}
int main(){
int v,e;
cin>>v>>e;
vector<vector<int>>adj(v+1);
for(int i=0;i<e;i++){
    int m,n;
    cin>>m>>n;
    adj[m].push_back(n);
    adj[n].push_back(m);
}
vector<int>ans;
vector<int>vis(v+1,0);

dfs(1,adj,vis,ans);
for(int it:ans){
    cout<<it<<" ";
}


}