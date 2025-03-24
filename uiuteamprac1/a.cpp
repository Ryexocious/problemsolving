#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds; 
#define ll long long
#define F first
#define S second
#define pb emplace_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define setpr(x) cout << setprecision(x) << fixed

template <class T>
using ordered_set =  __gnu_pbds::tree<T,__gnu_pbds::null_type,less<T>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>;
template<typename T, typename U>
T& amax(T& x, U y) {if(y > x) x = y; return x;}
template<typename T, typename U>
T& amin(T& x, U y) {if(y < x) x = y; return x;}


const ll inf = 1e18;
const long double ep = 0.0000001;
const long double pi = acos(-1.0);
const ll MOD = 1000000007;
const int mod = 998244353;
const int TWO_MOD_INV = 500000004;

const ll N = 1e6;

void solve(){
    ll n; cin>>n;

    std::vector<ll> v(n+1), ans(n+2, 0);

    map<ll, ll> mn;
    for(int i=1; i<=n; i++){
        mn[i]=inf;
    }

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    ans[n] = 0;

    for(int i=n-1; i>=0; i--){
        ans[i] = min(ans[i+1] + 1, mn[v[i]]);
        amin(mn[v[i]], ans[i+1]);
    }
    cout<<n-ans[0];
}



void pre()
{   
    fastio;
}

signed main() {
    pre();
    int t=1;
    cin >> t; 
    for (int i = 0; i < t; i++) {
        // cout<<"Case "<<i+1<<": ";
        solve();
        cout << endl;
    }
    return 0;
}