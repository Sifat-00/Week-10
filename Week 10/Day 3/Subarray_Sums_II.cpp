#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    vector<long long> sum(n);
    sum[0] = ar[0];
    for(int i=1;i<n;i++)
    {
        sum[i] = sum[i-1]+ar[i];
    }
    map<int,int> mp;
    long long cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(sum[i] == k) cnt++;
        if(mp.find(sum[i] - k) != mp.end())
        {
           cnt+=mp[sum[i]-k];
        }
        mp[sum[i]]++;
    }
    cout<< cnt << endl;
    return 0;
}
