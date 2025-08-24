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
const ll INF=1e18;
void solve(){
    ll n;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll res=INF,i=0;
    while(i<n){
        ll j=i;
        while(j+1<n && v[j+1]==v[i]){
            j++;
        }
        ll d=1LL*i*v[i]+1LL*(n-1-j)*v[i];
        res=min(res,d);
        i=j+1;
    }

    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
