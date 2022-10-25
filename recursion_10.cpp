//palindrome or not

#include<bits/stdc++.h>
using namespace std;

bool f(int i, string s, int n)
{
    if(i>=n/2)
    {
        return true;
    }
    if(s[i] != s[n-i-1])
    {
        return false;
    }
    return f(i+1, s, n);
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    bool b = f(0,s,n);
    if(b == true)
        cout << "True " << endl;
    else
        cout<< "False "<< endl;
}
