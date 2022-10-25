#include<bits/stdc++.h>
using namespace std;

//linearly increasing order using back tracing
void f(int i, int n)
{
    if(i<1)
        return;
    f(i-1,n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    f(n,n);
}
