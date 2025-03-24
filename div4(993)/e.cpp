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
    ll k,l,r,l2,r2;
    cin>>k>>l>>r>>l2>>r2;
    ll res=0,n=1;
    while(n<=r2){
        ll l3=(l2+n-1)/n,r3=r2/n;
        res+=max(0LL,min(r,r3)-max(l,l3)+1);
        if(n>r2/k){
            break;
        }
        n*=k;
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