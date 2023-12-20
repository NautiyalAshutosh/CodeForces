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

    //------------Solution------------

        int i = 0; int ans = n;
        for(int i =0; i < n-k-1; i++ )
            cout<<ans--<<" ";
        ans  = 1;
        for(int i= 0; i< k+1 ; i++)
        {
            cout<<ans++<<" ";
        }
        // rrep(i, n, n-k )
        // cout<<i<<" ";
        // rep(i, 1, n-k-1 )
        // cout<<i<<" ";

        cout<<nl;
    } // test case block
    return 0;
}