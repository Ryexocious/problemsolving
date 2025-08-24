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
void solve(){
    ll n; 
    cin>>n;
    vector<tuple<ll,ll,ll>>res;
    for(int i = 1; i <= n; i++){
        res.pb({i,1,i});
        if(i < n) res.pb({i,i+1,n});
    }
    cout<<res.size()<<"\n";
    for(auto [x,y,z] : res){
        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

