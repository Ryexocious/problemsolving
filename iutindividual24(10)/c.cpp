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
    ll n,d;
    cin>>n;
    d=n;
    string s="";
    while(d>0){
        char x='a'+((--d)%26);
        s+=x;
        d/=26;
    }
    reverse(all(s));
    cout<<s<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}