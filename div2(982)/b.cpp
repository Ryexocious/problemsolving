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
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
void solve(){
    ll n,d,res=1e9+1;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll co=0;
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    for(int i=0;i<n-1;i++){
        co=0;
        for(int j=i+1;j<n;j++){
            if(v[i]<v[j]){
                co++;
            }
        }
        res=min(res,co+i);
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