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
    ll n,k; 
    cin>>n>>k;
    string s; 
    cin>>s;
    ll co=0;    
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            co++;
        }
    }
    if(co<=k || n<2*k){
        cout<<"Alice\n";
        return;
    }
    else{
        cout<<"Bob\n";
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
