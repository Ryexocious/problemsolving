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
    ll n,co=0,last;
    cin>>n;
    string s;
    cin>>s;
    bool x=false;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            last=i;
            x=true;
        }
    }
    for(int i=n-1;i>last;i--){
        if(s[i]=='0' && s[i-1]=='1' || s[i]=='1' && s[i-1]=='0'){
            co++;
        }
    }
    if(x){
        co++;
    }
    cout<<co<<"\n";
    
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}