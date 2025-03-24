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
void solve() {
    int n, m, k;
    string s;
    cin >> n >> m >> k;
    cin >> s;
    int cnt = 0;
    int co = 0;
    for (int i = 0; i < m; i++) {
        if (s[i] == '0'){
            co++;
        }
    }
    for (int i = 0; i <= n - m;) {
        if (co == m) {
            cnt++;
            for (int j = i + m - 1; j < i + m - 1 + k && j < n; j++) {
                s[j] = '1';
            }
            i += m;
            if (i < n) {
                co = 0;
                for (int j = i; j < min(i + m, n); j++) {
                    if (s[j] == '0'){
                        co++;
                    }
                }
            }
        } 
        else {
            if (s[i] == '0'){
                co--;
            }
            if (i + m < n && s[i + m] == '0'){
                co++;
            }
            i++;
        }
    }
    cout << cnt << endl;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}


