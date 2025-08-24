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
    string s;
    cin>>s;
    if(s[0]=='0' && s[n-1]=='0'){
        cout<<"Bob"<<"\n";
    }
    else{
        cout<<"Alice\n";
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
