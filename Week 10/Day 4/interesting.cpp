#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin >> ar[i];
    sort(ar.begin(),ar.end());
    int t;
    cin >> t;
    while(t--)
    {
        int k;cin >> k;
        auto p  = upper_bound(ar.begin(),ar.end(),k);
        cout << p - ar.begin() << endl;
    }
    return 0;
}