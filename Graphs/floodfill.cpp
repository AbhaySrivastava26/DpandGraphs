#include<bits/stdc++.h>
using namespace std;

class Solution {

private:

    void dfs(int start,
             vector<vector<int>>& ans,
             int nrow[],
             int ncol[],
             int n,
             int m,
             int row,
             int col,
             int color) {

        ans[row][col] = color;

        for(int i=0;i<4;i++) {

            int drow = row + nrow[i];
            int dcol = col + ncol[i];

            if(drow>=0 && drow<n &&
               dcol>=0 && dcol<m &&
               ans[drow][dcol]!=color &&
               ans[drow][dcol]==start) {

                dfs(start,ans,nrow,ncol,n,m,drow,dcol,color);
            }
        }
    }

public:

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr,
                                  int sc,
                                  int color) {

        int n = image.size();
        int m = image[0].size();

        vector<vector<int>> ans = image;

        int start = image[sr][sc];

        int nrow[] = {-1,0,1,0};
        int ncol[] = {0,1,0,-1};

        dfs(start,ans,nrow,ncol,n,m,sr,sc,color);

        return ans;
    }
};

int main() {

    int n,m;

    cin >> n >> m;

    vector<vector<int>> image(n, vector<int>(m));

    for(int i=0;i<n;i++) {

        for(int j=0;j<m;j++) {

            cin >> image[i][j];
        }
    }

    int sr,sc,color;

    cin >> sr >> sc >> color;

    Solution obj;

    vector<vector<int>> ans =
        obj.floodFill(image,sr,sc,color);

    for(int i=0;i<n;i++) {

        for(int j=0;j<m;j++) {

            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}