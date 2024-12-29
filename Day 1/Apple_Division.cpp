#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> ar(n);
    long long sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
        sum += ar[i];
    }

    long long mn = LONG_LONG_MAX;
    //cout << (1<<5) << endl;
    for (int i = 0;i <(1 << n);i++) 
    {
        long long cnt= 0;

        for (int j = n-1; j>=0; j--) 
        {
            if ((1 << j)&1) 
            {
                cnt +=ar[j];
            }
        }
        long long ans = abs(sum - 2 * cnt);
        mn = min(mn, ans);
    }

    cout << mn << endl;

    return 0;
}
