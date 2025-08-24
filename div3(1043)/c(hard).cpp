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
const ll mx=20;
vec pre(mx+2,1),pre2(mx+2,0);
void precalc(){
    for(int i=1;i<=mx+1;i++){
        pre[i]=pre[i-1]*3LL;
    }
    for(int i=0;i<=mx+1;i++) {
        if(i==0){
            pre2[i]=3;
        }
        else{
            pre2[i]=pre[i+1]+1LL*i*pre[i-1];
        }
    }
}
void solve(){
    ll n,k; 
    cin>>n>>k;
    ll x=n;
    ll co=0;
    while(x>0){
        co+=x%3;
        x/=3;
    }
    if(k<co){
        cout<<-1<<"\n";
        return;
    }
    if(n<=k){
        cout<<3*n<<"\n";
        return;
    }
    vec v(mx+5,0);
    v[0]=n;
    ll co2=n;
    ll res=3*n;
    for(int i=0;i<=mx;i++){
        if(co2<=k){
            break;
        }
        ll d=v[i]/3;
        if(d==0){
            continue;
        }
        ll d2=(co2-k+1)/2;
        ll d3=min(d,d2);
        if(d3>0){
            v[i]-=d3*3;
            v[i+1]+=d3;
            co2-=d3*2;
            ll diff=pre2[i+1]-3*pre2[i];
            res+=d3*diff;
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    precalc();
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
