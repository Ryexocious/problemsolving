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
    unsigned long long a,b,c,d;
    cin>>a>>b>>c>>d;
    ll e=__gcd(a,b),f=__gcd(c,d);
    a/=e;
    b/=e;
    c/=f;
    d/=f;
    if(a==c && b==d){
        cout<<"Equal"<<'\n';
    }
    else{
        cout<<"Not Equal"<<'\n';
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