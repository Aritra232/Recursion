//factorial

#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n==1)
        return 1;
    return n * f(n-1);
}

int main()
{
    int n;
    cin >> n;
    int facto = f(n);
    cout << facto << endl;
}

