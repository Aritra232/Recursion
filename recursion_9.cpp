//given array and i have to reverse that array
#include<bits/stdc++.h>
using namespace std;


/*void f(int l,int r)
{
    if(l>=r)
        return;
    swap(ar[l],ar[r]);
    f(l+1,r-1);
}*/

void f(int i, int ar[], int n)
{
    if(i>=n/2)
        return ;
    swap(ar[i], ar[n-i-1]);
    f(i+1, ar, n);
}

int main()
{
    int n;
    cin>> n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>> ar[i];
    //f(0,n-1);
    f(0,ar,n);
    for(auto it : ar)
        cout << it << " " ;
}
