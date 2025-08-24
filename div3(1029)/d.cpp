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
    ll n;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll d=v[1]-v[0];
    bool x=true;
    for(int i=2;i<n;i++){
        if(v[i]-v[i-1]!=d){
            x=false;
            break;
        }
    }
    if(!x){
        cn;
        return;
    }
    ll x2=v[0]-d,y=n+1;
    if(x2%y!=0){
        cn;
        return;
    }
    y=x2/y;
    x2=d+y;
    if(x2>=0 && y>=0){
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