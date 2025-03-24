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
int rec(ll n,ll m){
    if(n>=m){
        return n==m;
    }
    return rec(n*10,m) || rec(n*20,m);
}
void solve(){
    ll n;
    cin>>n;
    if(rec(1,n)==1){
        cy;
    }
    else{
        cn;
    }
}
int main(){
    fast;
    int t=1;
    cin>>t;
    while (t--){
        solve();
    }
}