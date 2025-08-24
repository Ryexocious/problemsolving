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
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll dx=x2-x1,dy=y2-y1;
    ll d3=dx*dx+dy*dy;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    double d4=sqrt(d3);
    if(d4>sum){
        cn;
        return;
    }
    if(((ll)(d4+0.5)%2)==sum%2){
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