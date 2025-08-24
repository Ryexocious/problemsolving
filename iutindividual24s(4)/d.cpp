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
    vector<string>v(n-2);
    for(int i=0;i<n-2;i++){
        cin>>v[i];
    }
    string s=v[0];
    bool x=false;
    for(int i=1;i<n-2;i++){
        if(s[s.length()-1]==v[i][0]){
            s=s+v[i][1];
        }
        else{
            x=true;
            s=s+v[i];
        }
    }
    if(!x && s.length()!=n){
        s=s+v[n-3][1];
    }
    cout<<s<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}