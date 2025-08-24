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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(n),v2(m);
    vector<bool>v3(k+1),v4(k+1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>=1 && v[i]<=k){
            v3[v[i]]=true;
        }
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
        if(v2[i]>=1 && v2[i]<=k){
            v4[v2[i]]=true;
        }
    }
    ll co=0,co2=0,co3=0;
    for(int i=1;i<=k;i++){
        if(v3[i] && v4[i]) co++;
        else if(v3[i]) co2++;
        else if(v4[i]) co3++;
    }
    ll d=(k+1)/2 - co2,d2=(k+1)/2 - co3;
    if(d>=0 && d2>=0 && d+d2<=co){
        cy;
    }
    else{
        cn;
    }
    //cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}