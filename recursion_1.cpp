#include<bits/stdc++.h>
using namespace std;

int coun = 0;
void f()
{
    if(coun == 3)
    {
        return;
    }
    else
    {


    cout << coun << " ";
    coun++;
    f();
    }
}

int main()
{
    int n=0;
    f();
}
