#include<bits/stdc++.h>
using namespace std;

//functional

int f(int n)
{
    if(n==0)
        return 0;
    return n + f(n-1);
}
int main()
{
    int n;
    cin >> n;
    int sum = f(n);
    cout << sum << endl;
}


//parameterized

/*void f(int n, int sum)
{
    if(n<1)
    {
        cout<< sum << endl;
        return;
    }

    f(n-1,sum+n);

}

int main()
{
    int n;
    cin >> n;
    f(n,0);

}*/


