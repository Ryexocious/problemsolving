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

struct DSU {
    vector<int> par, rnk, sz;
    int c;
    int cyclecount = 0;
    DSU(int n) : par(n + 1), rnk(n + 1, 0), sz(n + 1, 1), c(n) {
        for (int i = 1; i <= n; ++i) par[i] = i;
    }
    int find(int i) {
        return (par[i] == i ? i : (par[i] = find(par[i])));
    }
    bool same(int i, int j) {
        return find(i) == find(j);
    }
    int get_size(int i) {
        return sz[find(i)];
    }
    int count() {
        return c;
    }
    int countCycles() {
        return cyclecount;
    }
    void merge(int i, int j) {
        int rootI = find(i);
        int rootJ = find(j);
        if (rootI == rootJ) {
            cyclecount++;
        } 
        else {
            if (rnk[rootI] > rnk[rootJ]) swap(rootI, rootJ);
            par[rootI] = rootJ;
            sz[rootJ] += sz[rootI];
            if (rnk[rootI] == rnk[rootJ]) rnk[rootJ]++;
            --c;
        }
    }
};

void solve() {
    ll n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    for (auto &x : a) x--;
    DSU d(n);
    int cnt = 0;
    for(int i=0;i<n;++i){
        cnt+=(a[a[i]]==i);
        d.merge(i+1,a[i]+1);
    }
    cnt/=2;
    int components=d.count();
    int result=(cnt ? components-cnt+1:components);
    
    cout<<result<<" "<<components<<"\n";
}
int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
