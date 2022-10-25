//Find those subsequence which is divisible by k (target)

#include<bits/stdc++.h>
using namespace std;

void sub_sequence(int i, int ar[], vector<int> &ds, int s, int target, int sum)
{
    if(i==s)
    {
        //print -> O(n)
        return;
    }

    ds.push_back(ar[i]);
    sum = sum + ar[i];
    //pick it

    sub_sequence(i+1, ar, ds, s, target, sum);
    if(sum % target == 0)
    {
        cout << "{ ";
        for(auto it : ds)
        {
            cout << it << ",";
        }
        cout << " } ";
        cout << endl;
    }
    ds.pop_back();
    sum = sum - ar[i];

    //not_pick
    sub_sequence(i+1, ar, ds, s,target, sum);
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
    int target;
    cout << "target" ;
    cin>> target;
    int sum = 0;
    vector<int> ds;
    sub_sequence(0,ar, ds, s,target, sum);
}

