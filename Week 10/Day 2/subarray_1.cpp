#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    long long sum =0;
    long long cnt = 0;
    int j = 0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
        if(sum == x) cnt++;
        else if(sum>x)
        {
            while(sum>x)
            {
                sum-=ar[j];
                if(sum == x) cnt++;
                j++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}