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
        
        //----------input---------------------------
        int n; cin>>n;
        vector<pii> arr(n);
        rep(i, 0, n-1)
        {
            int val;
            cin>>val;
            arr[i].a = val;
            arr[i].b = i+1;
        }

        
        string yes = "YES";
        string no = "NO";
        vector<pii> gt(n), lt(n);
        stack<pii> maxSoFar, minSoFar; 
        for(int i = n-1; i>=0; i--)
        {
            while( !maxSoFar.empty() && maxSoFar.top().a <= arr[i].a )
            {
                maxSoFar.pop();
            }
            if( maxSoFar.empty() )
            {
                gt[i] = mk(-1, -1);
                maxSoFar.push({arr[i].a, arr[i].b});
            }
            else{
                gt[i] = ( mk(maxSoFar.top().a , maxSoFar.top().b) );
                maxSoFar.push({arr[i].a , arr[i].b});
            }  
        }

        rrep(i, n-1, 0)
        {
           while( !minSoFar.empty() && minSoFar.top().a >= arr[i].a )
            {
                minSoFar.pop();
            }
            if( minSoFar.empty() )
            {
                lt[i] = mk(-1, -1);
                minSoFar.push({arr[i].a, arr[i].b});
            }
            else{
                lt[i] = ( mk(minSoFar.top().a , minSoFar.top().b) );
                minSoFar.push({arr[i].a , arr[i].b});
            }
        }
       
        string ans = no;
        int x=0, y=0, z=0;
        rep(i, 0, n-1)
        {
            if(gt[i].a != -1 && lt[ gt[i].b -1 ].a != -1)
            {
                ans = yes;
                x = i+1;
                y = gt[i].b;
                z = lt[gt[i].b-1].b;
                break;
            }
        }

        if(ans == "YES")
        {
            cout<<ans<<nl;
            cout<<x<<" "<<y<<" "<<z<<nl;
        }
        else {
            cout<<ans<<nl;
        }
    } // test case block
    return 0;
}
