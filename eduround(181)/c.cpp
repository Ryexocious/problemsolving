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
vec v={2,3,5,7};
ll good(ll a){
    ll co=0;
    ll len=v.size();
    for(ll mask=1;mask<(1<<len);mask++){
        ll d=1,d2=0;
        for(ll i=0;i<len;i++){
            if(mask & (1<<i)){
                d*=v[i];
                d2++;
            }
        }
        if(d2%2==1){
            co+=a/d;
        }
        else{
            co-=a/d;
        }
    }
    return a-co;
}
void solve(){
    ll l,r;
    cin>>l>>r;
    ll res=good(r)-good(l-1);
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
