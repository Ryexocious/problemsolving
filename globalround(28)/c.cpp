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
void solve() {
    string s;
    cin >> s;
    ll len = s.size(), co = 0;
    ll j = -1;
    for (ll i = 0; i < len; i++) {
        if (s[i] == '0') {
            co++;
            j = i;
            break;
        }
    }
    if (co == 0) {
        cout << 1 << " " << len << " " << 1 << " " << 1 << "\n";
        return;
    }
    string t = "";
    for (ll i = j; i < len; i++) {
        t += (s[i] == '0' ? '1' : '0');
    }
    ll l2=-1,r2=-1,chk=-1,len2=len-j;
    for (ll i=0;i<=len-len2;i++) {
        ll mx=0;
        for (ll k=0;k<len2;k++) {
            if(s[i+k]==t[k]){
                mx++; 
            } 
            else{
                break;
            }
        }
        if(mx>chk){
            chk=mx;
            l2=i+1;
            r2=i+len2;
        }
    }
    cout << 1 << " " << len << " " << l2 << " " << r2 << "\n";
}
int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

