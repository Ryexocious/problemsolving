#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    string s;
    cin>>s;
    ll co=0,co2=0;
    for(char c : s){
        if(c=='-'){
            co++;
        }
        else{
            co2++;
        }
    }
    if(co<2 || co2<1){
        cout<<0<<"\n";
        return;
    }
    ll d=co/2,d2,res;
    d2=co-d;
    res=d*co2*d2;
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
