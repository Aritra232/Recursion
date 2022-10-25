//count those subsequence which is divisible by k (target)

#include<bits/stdc++.h>
using namespace std;

int sub_sequence(int i, int ar[], vector<int> &ds, int s, int target, int sum)
{
    if(i==s )
    {
        //print -> O(n)
        if(ds.size()!=0 && sum % target == 0)
        {
            cout << "{ ";
            for(auto it : ds)
            {
                cout << it << ",";
            }
            cout << " } ";
            cout << endl;
            return 1;
        }
        else
        {
            return 0;
        }
    }

    ds.push_back(ar[i]);
    sum = sum + ar[i];
    //pick it
    int left = sub_sequence(i+1, ar, ds, s, target, sum);
    ds.pop_back();
    sum = sum - ar[i];

    //not_pick
    int right = sub_sequence(i+1, ar, ds, s,target, sum);
    return left + right;
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
    int c = sub_sequence(0,ar, ds, s,target, sum);
    cout << "count = " <<c ;
}


