#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back

void solve(){
    int n;
    cin >> n;
    if (n == 1) {
        cout << "1" << endl;
        return;
    }
    vector<int> p(n+1, 0);
    set<int> vis;
    p[n] = n;
    vis.insert(n);
    p[n-1] = 1;
    vis.insert(1);
    int l = 2,r = n-2,l2 = n-1,r2 = 2;
    bool d = true;
    while (vis.size() < n-1) { 
        if (d) {
            p[l] = l2;
            vis.insert(l2);
            l++;
            l2--;
        }
        else {
            p[r] = r2;
            vis.insert(r2);
            r--;
            r2++;
        }
        d = !d;
    }
    for (int i = 1; i <= n; i++) {
        if (vis.find(i) == vis.end()) {
            p[1] = i;
            break;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << p[i];
        if (i < n) cout << " ";
    }
    cout << endl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}