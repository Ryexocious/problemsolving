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
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    ll d;
    cin>>d;
    while(d--){
        ll x,res;
        cin>>x;
        if(x>=v[n-1]){
            cout<<n<<"\n";
        }
        else if(x<v[0]){
            cout<<0<<'\n';
        }
        else{        
            auto i=upper_bound(all(v),x);
            cout<<i-v.begin()<<"\n";
        }
        
    }
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}