//find those subsequence which are equal to sum and elements are unique
// that means one elements can be used one times

#include<bits/stdc++.h>
using namespace std;

void sub_sequence(int i, int ar[], vector<int> &ds,int s, int sum)
{
    if(i==s || sum==0)
    {
        //print -> O(n)
        if(sum==0)
        {
            cout << "{ ";
            for(auto it : ds)
            {
                cout << it << ",";
            }
            cout << " } ";
            cout << endl;
        }

        return;
    }

     //pick it
    if(ar[i] <= sum)
    {
        ds.push_back(ar[i]);
        sum = sum - ar[i];
        sub_sequence(i+1, ar, ds, s, sum);
        ds.pop_back();
        sum = sum + ar[i];
    }

    //not_pick
    sub_sequence(i+1, ar, ds, s, sum);
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
    int t;
    cout << "Sum : ";
    cin >> t;
    sub_sequence(0,ar, ds, s, t);
}


