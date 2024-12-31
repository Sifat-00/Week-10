#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;

        cin >> n >> k;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        sort(ar,ar+n,greater<int>());
        vector<long long> sum(n+1);
        for(int i=1;i<=n;i++)
        {
            sum[i] = sum[i-1]+ar[i-1];
        }
        while(k--)
        {
            int val;
            cin >> val;
            auto it = lower_bound(sum.begin(),sum.end(),val);
            if(it != sum.end()) cout << it - sum.begin() << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}
