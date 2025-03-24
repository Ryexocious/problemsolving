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
    ll a,b,c;
    cin>>a>>b>>c;
    ll x,y;
    x=y=a;
    b=min(b,1LL*30);//30 cause log2(1e9)=30;
    c=min(c,1LL*30);
    for(int i=0;i<b;i++){
        x/=2;
    }
    for(int i=0;i<c;i++){
        x=(x+1)/2;
    }
    for(int i=0;i<c;i++){
        y=(y+1)/2;
    }
    for(int i=0;i<b;i++){
        y/=2;
    }
    cout<<min(x,y)<<" "<<max(x,y)<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}