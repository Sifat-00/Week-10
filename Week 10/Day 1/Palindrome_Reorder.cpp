#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ar;
    cin >> ar;
    map<char,int> mp;
    for(auto x : ar)
    {
        mp[x]++;
    }
    int odd = 0;
    char ch;
    sort(ar.begin(),ar.end());
    for(auto x : mp)
    {
        if(x.second%2==1)
        {
            odd++;
            ch = x.first; 
        }
    }
    string a,b;
    if(odd>1) cout << "NO SOLUTION";
    else
    {
        map<char,int> cnt;
        for(int i=0;i<ar.size();i++)
        {
            if(cnt[ar[i]] <mp[ar[i]] / 2)
            {
                a += ar[i];
                cnt[ar[i]]++;
            }
        }
        b = a;
        reverse(b.begin(),b.end());
        if(odd == 1) cout << a << ch << b;
        else cout << a << b;
       
    }
    return 0;
}
