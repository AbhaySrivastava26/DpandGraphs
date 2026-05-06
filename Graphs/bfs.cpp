#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>>&adj,vector<int>&vis,vector<int>&ans){
    queue<int>q;
 q.push(1);
 vis[1]=1;
 while(!q.empty()){
    int node=q.front();
    q.pop();
    ans.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            vis[it]=1;
            q.push(it);
        }
    }
 }
 for(int it:ans){
    cout<<it<<" ";
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

bfs(adj,vis,ans);


}