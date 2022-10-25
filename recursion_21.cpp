//permutation
//one solution is ->

#include<bits/stdc++.h>
using namespace std;

void permu(vector<int> &nums, vector<int> &ds, int s, int ar[])
{
    if(s==ds.size())
    {
        for(auto it : ds)
        {
            cout << it << " " ;
        }
        cout << endl;
        return;
    }
    for(int i=0; i< nums.size(); i++)
    {
        if(ar[i]==0)
        {
        ds.push_back(nums[i]);
        ar[i]=1;
        permu(nums,ds,s,ar);
        ds.pop_back();
        ar[i]=0;
        }
    }

}

int main()
{
    int n,a;
    cin >> n;
    int ar[n] = {0};
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    vector<int> ds;

    permu(nums,ds,n,ar);

}
