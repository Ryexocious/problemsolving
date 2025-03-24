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
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
void solve(){
    string s;
    cin >> s;
    
    vec vs, vc;
    vs.reserve(s.size());
    vc.reserve(s.size());
    
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'b') {
            if (!vs.empty()) {
                vs.pob(); 
            }
        } else if (s[i] == 'B') {
            if (!vc.empty()) {
                vc.pob();
            }
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            vs.pb(i);
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            vc.pb(i);
        }
    }
    vs.insert(vs.end(), all(vc));
    sort(all(vs));
    for (auto it : vs) {
        cout << s[it];
    }
    cout << "\n";
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
