#include<bits/stdc++.h>
using namespace std;

/*int c=0;
void f(int n)
{
    if(c==n)
        return;
    cout<< "BD" << endl;
    c++;
    f(n);
}

int main()
{
    int n;
    cin >> n;
    f(n);*/

//using parameter

void f(int i,int n)
{
    if(i>n)
        return;
    cout<< "BD" << endl;
    i++;
    f(i,n);
}

int main()
{
    int n;
    cin >> n;
    f(1,n);
}
