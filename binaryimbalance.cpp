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
    ll n,co=0,co2=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            co++;
        }
        if(s[i]=='1'){
            co2++;
        }
    }
    if(co2>0 && co==0){
        cn;
    }
    else{
        cy;
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