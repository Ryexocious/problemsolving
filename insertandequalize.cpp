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
    ll n,gd=0,mx=-1e9+1,res=0;
    cin>>n;
    vec v(n);
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
        mx=max(mx,v[i]);
    }
    for(int i=1;i<n;i++){
        gd=__gcd(gd,v[i]-v[i-1]);
    }
    for(int i=0;i<n;i++){
        res+=((mx-v[i])/gd);
    }
    bool x=false;
    for(int i=1;i<n;i++){
        if(!m[mx-i*gd]){
            res+=i;
            x=true;
            break;
        }
    }
    if(x){
        cout<<res<<"\n";
    }
    else{
        cout<<res+n<<"\n";
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