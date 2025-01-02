#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++) cin >> ar[i];
    vector<int> sum(n);
    sum[0] = ar[0];
    for(int i=1;i<n;i++)
    {
        sum[i] = sum[i-1]+ar[i];
    }
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(sum.begin(),sum.end(),x);
        cout << it - sum.begin()+1 << endl;
    }
    return 0;
}
