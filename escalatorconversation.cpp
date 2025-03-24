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
    ll n,m,k,h,co=0;
    cin>>n>>m>>k>>h;
    vec v(n),v2(m-1);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=1;i<m;i++){
        v2[i-1]=i*k;
    }
    for(int i=0;i<n;i++){
        if(find(all(v2),abs(h-v[i]))!=v2.end()){
            co++;
        }
    }
    cout<<co<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}