#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define vb vector<bool>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define rep(i,a,b) for(int i=a; i<=b;i++)
#define rrep(i,a,b) for(int i=a; i>=b;i--)
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test  int tcase; cin >> tcase; while(tcase--)

int32_t main()
{
    fastIO;
    test{
    //----------- Input------------
        int n, k; cin>>n>>k;
        vi f(n),s(n);
        rep(i, 0, n-1) cin>>f[i];
        rep(i, 0, n-1) cin>>s[i];
    //------------Solution------------

        ll ans = 0;
        int msf = 0;
        ll preSum = 0;
        for(int i=0; i<n; i++, k--)
        {
            if(k == 0) break;
            msf = max(msf, s[i]);
            preSum += f[i];
            ll tans = preSum+((ll)msf*(k-1));
            ans =  max(tans, ans); 
        }
        // cout<<"here";
        cout<<ans<<nl;
    } // test case block
    return 0;
}