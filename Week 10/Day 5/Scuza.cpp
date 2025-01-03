#include<bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        vector<ll> sum(n);
        vector<ll> mx(n);
        sum[0] = ar[0];
        mx[0] = ar[0];
        for(int i=1;i<n;i++)
        {
            sum[i] = sum[i-1] + ar[i];
            mx[i] = max( (1LL * mx[i-1]),(1LL*ar[i]));
        }
        while(q--)
        {
            int val;
            cin >> val;
            auto it  =upper_bound(mx.begin(),mx.end(),val);
            int idx = it - mx.begin();
            if(it == mx.begin()) cout << 0 << " ";
           else  cout << sum[idx-1] << " ";
        }
        cout << endl;
    }
    return 0;
}