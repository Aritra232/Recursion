
#include<bits/stdc++.h>
using namespace std;

bool is_safe(int row, int col, vector<string> &board , int n)
{
    int r = row;
    int c = col;

    while(r>=0 && c>=0)
    {
        if(board[r][c]=='Q')
            return false;
        row--;
        col--;
    }

    while(c>=0)
    {
        if(board[r][c]=='Q')
            return false;
        //row--;
        col--;
    }

    while(r<n && c>=0)
    {
        if(board[r][c]=='Q')
            return false;
        row++;
        col--;
    }

}

void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n)
{
    if(col == n)
    {
        ans.push_back(board);
        for(auto it : board )
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    for(int row=0; row<n; row++)
    {
        if(is_safe(row, col, board, n)==true)
        {
            board[row][col] = 'Q';
            solve(col+1,ans, board, n);
            board[row][col] = '.';
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<string>> ans;
    vector<string>board(n);
    string s(n, '.');
    for(int i=0; i<n; i++)
    {
        board[i] = s;
    }
    solve(0,ans, board, n);


}
