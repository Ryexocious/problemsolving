#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<ll, int> mp;
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)

void solve() {
    ll n,k,x,res=0;
    cin>>n>>k;
    mp m;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }
    for (auto& it : m) {
        ll a=it.first;
        ll co=it.second;
        ll y=co;
        ll chk=1;
        while (chk < k) {
            a++;
            if(m[a]!=0){
                y+=m[a];
                chk++;
            } 
            else{
                break;
            }
        }
        res=max(res,y);

    }
    cout<<res<<"\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}





