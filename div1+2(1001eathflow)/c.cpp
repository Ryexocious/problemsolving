#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
vec diff(vec &a) {
    vec diff;
    for (int i = 1; i < a.size(); i++) {
        diff.push_back(a[i] - a[i - 1]);
    }
    return diff;
}
ll max_sum(vec &a) {
    return accumulate(a.begin(), a.end(), 0LL);
}
void solve() {
    ll n;
    cin >> n;
    vec a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = max_sum(a);
    while (a.size() > 1) {
        vec rev_a = a;
        reverse(rev_a.begin(), rev_a.end());
        vec diff_a = diff(a);
        vec diff_rev_a = diff(rev_a);
        ans = max({ans, max_sum(rev_a), max_sum(diff_a), max_sum(diff_rev_a)});
        a = diff_a;
    }
    cout << ans << endl;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}


