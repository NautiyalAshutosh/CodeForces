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
        
        //input
        int n, q; cin>>n>>q;
        vi arr(n);
        rep(i, 0, n-1) cin>>arr[i];

        vector<vector<int>> qq(q, vector<int>(3));
        rep(i, 0, q-1)
        {
            rep(j, 0, 2)
            {
                cin>>qq[i][j];
            }
        }

        //solution

        ll tsum = 0;
        vector<ll> sums(n+1, 0);
        sums[0] = 0;
        rep(i, 0, n-1) {
            sums[i+1] = sums[i] + arr[i]; //sum till each indices
            tsum += arr[i]; // sum of whole array
        }
        rep(i, 0, q-1)
        {
            int l = qq[i][0], r = qq[i][1], k = qq[i][2];
            
            ll diff = sums[r] - sums[l-1];
            ll resultant = tsum - diff + (ll)(k*(r-l+1));  


            if( resultant & 1 )
                cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }


    } // test case block
    return 0;
}