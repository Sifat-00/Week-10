#include<bits/stdc++.h>
using namespace std;

int left(vector<int> &ar,int x)
{
    int l=0,r=ar.size()-1,ans = -1;

    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ar[mid]<=x)
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return ans;
}

int right(vector<int> &ar,int x)
{
    int l=0,r=ar.size()-1,ans = ar.size();
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ar[mid]>=x)
        {
            ans = min(ans,mid);
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans;
}

int main()
{
    int n;
        cin >> n;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(),ar.end());
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >>  a >> b;
        int ans1 = left(ar,a);
        int ans2 = right(ar,b);
        if(ar[ans1]>=a && ar[ans2]<=b) cout << ans2 - ans1 +1 <<" ";
        else cout << 0 <<" ";
    }
    return 0;
}
