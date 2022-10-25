//subsequence

#include<bits/stdc++.h>
using namespace std;

void sub_sequence(int i, int ar[], vector<int> &ds, int s)
{
    if(i==s)
    {
        //print -> O(n)
        cout << "{ ";
        for(auto it : ds)
        {
            cout << it << ",";
        }
        cout << " } ";
        cout << endl;
        return;
    }

    ds.push_back(ar[i]);
    //pick it
    sub_sequence(i+1, ar, ds, s);
    ds.pop_back();

    //not_pick
    sub_sequence(i+1, ar, ds, s);
}

int main()
{
    int s;
    cin>> s;
    int ar[s];
    for(int i=0; i<s; i++)
    {
        cin>> ar[i];
    }
    vector<int> ds;
    sub_sequence(0,ar, ds, s);
}
