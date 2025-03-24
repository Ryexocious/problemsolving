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
    ll n,res=0;
    cin>>n;
    vec v(n+1),v2(n+1);
    for(int i=0;i<=n;i++){
        v[i]=i;
        v2[i]=i;
    }
    for(int i=1;i<n;i+=2){
        swap(v[i],v[i+1]);
    }
    for(int i=0;i<=n;i++){
        res+=v2[i]^v[i];
    }
    cout<<res<<"\n";
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}








