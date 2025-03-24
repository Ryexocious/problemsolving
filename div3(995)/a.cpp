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
    int n,m=0,s=0;
    cin >> n;
    vec v(n),v2(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) cin >> v2[i];
    for(int i = 0; i < n; i++) {
        m+= v[i]; 
        if(i<n-1) {
            s += min(v[i], v2[i+1]);
        }
    }
    cout << m-s << "\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}
