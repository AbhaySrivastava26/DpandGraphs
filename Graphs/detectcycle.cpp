#include<bits/stdc++.h>
using namespace std;
bool detectcycle(int node,vector<vector<int>>&adj,vector<int>&vis){
 vis[node]=1;
 queue<pair<int,int>>q;
 q.push({node,-1});
 while(!q.empty()){
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();
    for(auto it:adj[node]){
        if(!vis[it]){
            vis[it]=1;
            q.push({it,node});
        }else if(it!=parent){
            return true;
        }
    }
 }
 return false;
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
int node=1;
// vector<int>ans;
int ans=0;
vector<int>vis(v+1,0);
for(int i=1;i<=v;i++){
    if(detectcycle(i,adj,vis)) ans=1; break;
   
}
// int ans=detectcycle(node,adj,vis);
cout<<ans;


}