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
    string s,s2;
    cin>>s>>s2;
    ll len=s.length();
    for(int i=0;i<len;i++){
        ll l=min(s[i]-'0',s2[i]-'0'),r=max(s[i]-'0',s2[i]-'0');
        for(int j=l+1;j<r;j++){
            if((s[i]-'0')!=j && )
        }
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