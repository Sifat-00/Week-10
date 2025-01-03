#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll ar[n];
    for(int i=0;i<n;i++) cin >> ar[i];
    ll ans = 0;
    ll sum = 0;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
        if(sum%n==0) ans++;
        int mod = ((sum % n) + n) % n;

        auto it = mp.find(mod);
        if(it!=mp.end()) ans+=mp[mod];
        mp[mod]++;

    }
    cout << ans << endl;
    return 0;
}