#include<bits/stdc++.h>
using namespace std;


int main(){
   int v,e;
   cin>>v>>e;
   vector<vector<int>>adj(v+1);
   for(int i=0;i<e;i++){
    int n,m;
    cin>>n>>m;
    adj[n].push_back(m);
    adj[m].push_back(n);
   }

   for(int i=0;i<adj.size();i++){
    cout<<i<<" ->";
    for(int j=0;j<adj[i].size();j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
   }
    
}