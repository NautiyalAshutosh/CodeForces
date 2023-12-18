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
    string str;
    cin>>str;
    int cnt = 0;
    bool x= false, y = false, ans = false;;
    for(int i=0; i<str.size(); i++)
    {
        if( str[i] == '0')
        {
            if(x == false ) 
            {
                cnt=1;
                x = true;
                y = false;
            }
            else {
                x= 1;
                cnt++;
            }
        }
        else
        {
            if(y == false ) 
            {
                x =false;
                y = true;
                cnt = 1;
            }
            else {
                y = 1;
                cnt++;
            }
        }
        if(cnt == 7 )
        {
            ans = true;
            break;
        }
    }
    if(ans)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
