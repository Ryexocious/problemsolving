#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<int> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
//string s="abcdefghijklmnopqrstuvwxyz";
void solve() {
    int n;
    cin >> n;  
    vec v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        v[i]--;
    }   
    string s;
    cin >> s;   
    vec res(n, -1);
    vector<bool> vis(n, false);   
    for (int i = 0; i < n; ++i) {
        if (!vis[i]) {
            vec y;
            int l = i;    
            while (!vis[l]) {
                vis[l] = true;
                y.pb(l);
                l = v[l];
            }
            int co = 0;
            for (int it : y) {
                if (s[it] == '0') {
                    co++;
                }
            }
            for (int it2 : y) {
                res[it2] = co;
            }
        }
    }
    for (auto it : res ) {
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}