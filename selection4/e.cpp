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
    string s="UNFIT";
    ll n,res=0,l;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n<2){
        cout<<s<<"\n";
        return;
    }
    l=v[0];
    for(int i=1;i<n;i++){
        res=max(res,v[i]-l);
        l=min(l,v[i]);
    }
    if(res==0){
        cout<<s<<"\n";
    }
    else{
        cout<<res<<"\n";
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}