#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    while(t--)
    {
        int val;
        cin >> val;
        int idx = n+1;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(ar[mid]>=val)
            {
                idx = min(idx,mid+1);
                
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout << idx << endl;
    }
    return 0;
}