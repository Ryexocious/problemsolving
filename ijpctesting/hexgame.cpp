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
ll binpow(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b & 1){
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    return res;
}
vec v={1,3,5,7,9,11};
void solve(){
    ll a;
    cin>>a;
    ll pa=binpow(6,a);
    //cout<<pa<<"\n";
    ll sum=0;
    for(int i=1;i<6;i++){
        sum+=(v[i-1]+binpow(i,a-1))*i;
    }
    double res=sum/pa;
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