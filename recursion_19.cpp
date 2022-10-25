//Hashing -> kind of marking

#include<bits/stdc++.h>
using namespace std;

string dir = "DRUL";
int di[] = {1, 0, -1, 0};
int dj[] = {0, 1,  0,-1};

void path(int n, int m, string s ,vector<vector<int>> &vis, int i, int j)
{
    if(i>=n || j>=m || i<0 || j<0 || vis[i][j]==1)
    {
        return;
    }
    if(i==n-1 && j==m-1)
    {
        cout << s << endl;
    }

    vis[i][j]=1;

    for(int x=0; x<4; x++)
    {
        s=s+dir[x];
        path(n,m,s,vis,i+ di[x],j+ dj[x]);
        s.pop_back();
    }

    /*s = s+ "D";
    path(n,m,s,vis,i+1,j);
    s.pop_back();

    s = s+ "R";
    path(n,m,s,vis,i,j+1);
    s.pop_back();

    s = s+ "U";
    path(n,m,s,vis,i-1,j);
    s.pop_back();

    s = s+ "L";
    path(n,m,s,vis,i,j-1);
    s.pop_back();*/

    vis[i][j]=0;
}

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> vis(n, vector<int>(m,0));
    string s;
    path(n,m,s,vis,0,0);
}

