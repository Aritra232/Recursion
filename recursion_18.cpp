//matrix -> using recursion -> 3*2 matrix -> lexicographily

#include<bits/stdc++.h>
using namespace std;

void find_path(int i, int j, string s, int *matrix, int n, int m)
{
    if(i>=n || j>=m)
    {
        return;
    }
    if(i==n-1 && j==m-1)
    {
        cout << s << endl;
        return;
    }

    s = s + "D";
    find_path(i+1, j, s,(int*)matrix, n, m);
    s.pop_back();

    s = s+ "R";
    find_path(i, j+1, s,(int*)matrix, n, m);
    s.pop_back();

}
int main()
{
    int n,m;
    cin >> n >> m;
    int matrix[n][m];
    string s;
    find_path(0,0,s, (int*)matrix , n, m);
}

