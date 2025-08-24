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
    ll n,k;
    cin>>n>>k;
    vec v(n),v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    v2=v;
    sort(all(v2));
    ll j;
    for(int i=0;i<n;i++){
        if(v2[i]==v[k-1]){
            j=i;
        }
    }
    ll w=1,h=v2[j];
    //cout<<j<<"\n";
    for(int i=j+1;i<n;i++){
        ll d=abs(h-w);
        ll d2=abs(h-v2[i]);
        //cout<<d<<" "<<d2<<"\n";
        if(d+1>=d2){
            h=v2[i];
            w=w+d2;
        }
        //cout<<h<<" "<<w<<"\n";
    }
    if(h==v2[n-1]){
        cy;
    }
    else{
        cn;
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