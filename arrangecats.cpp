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
    ll n,cadd=0,crem=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && t[i]=='1'){
            cadd++;
        }
        if(s[i]=='1' && t[i]=='0'){
            crem++;
        }
    }
    cout<<max(cadd,crem)<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}