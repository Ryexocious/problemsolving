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
    ll d=min((n+3)/4,n/4);
    ll d2=min((n+2)/4,(n+1)/4);
    ll d3=n-2*(d+d2);
    if(d3>0){
        cout<<"Alice"<<"\n";
    } 
    else{
        cout<<"Bob"<<"\n";
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