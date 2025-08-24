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
bool isPowerOfTwo(ll x){
    return x > 0 && (x & (x - 1)) == 0;
}
ll popcount(ll x){
    return __builtin_popcountll(x);
}
void solve() {
    ll n,k; 
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vec v2;
    for(int i=0;i<n;i++){
        if(isPowerOfTwo(v[i])){
            v2.pb(i);
        }
    }
    for(auto it : v2){
        if(k==0){
            break;
        }
        ll a=popcount(v[it]);
        ll b=popcount(v[it]+1);
        if(b>a){
            v[it]+=1;
            k--;
        }
    }
    sort(all(v));
    ll res=0;
    for(int i=0;i<n;i++){
        if(k==0){
            res+=popcount(v[i]);
            continue;
        }
        ll d=0;
        for(int j=1;j<=60;j++){
            ll d2=(1LL<<j)-1;
            if(d2<=v[i]+k){
                d=j;
            }
            else{
                break;
            }
        }
        ll d3=(1LL<<d)-1;
        ll diff=d3-v[i];
        if(diff<=k && diff>0){
            k-=diff;
            res+=d;
        } 
        else if(diff>k) {
            res+=popcount(v[i]+k);
            k=0;
        } 
        else{
            res+=popcount(v[i]);
        }
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







