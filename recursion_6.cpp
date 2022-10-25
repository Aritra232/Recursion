#include<bits/stdc++.h>
using namespace std;

//linearly reversing order using back tracing
void f(int i, int n)
{
    if(i>n)
        return;
    f(i+1,n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    f(1,n);
}

