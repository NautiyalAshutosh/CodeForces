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
    ll n, k;
    cin>>n>>k;
    ll odds = n%2==0? n/2: n/2+1;
    ll ans = 0;
    if( k <= odds)
    {
        ans = 1 + (k-1)*2;
    }
    else{
        ans = (k - odds)*2;
    }
    cout<<ans<<nl;
    return 0;
}