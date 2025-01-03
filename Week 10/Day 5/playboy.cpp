#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> ar(n);
    for(int i=0;i<n;i++) cin >> ar[i];
    int q;
    cin >> q;
    while(q--)
    {
        long long val;
        cin >> val;
        auto l = lower_bound(ar.begin(),ar.end(),val);
        auto r = upper_bound(ar.begin(),ar.end(),val);
        if(l!=ar.begin())
        {
            l--;
             cout << * l << " ";
        }
        else cout << "X";
        if(r!=ar.end()) cout << *r <<" ";
        else cout << "X";
        cout << endl;
    }
    return 0;
}