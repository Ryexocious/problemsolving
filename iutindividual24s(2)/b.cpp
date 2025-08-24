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
    map<string,ll>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    if(m["O"]){
        cout<<max(m["A"],m["B"])+m["AB"]+m["O"]<<"\n";
    }
    else{
        cout<<max(m["A"],m["B"])+m["AB"]<<"\n";
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