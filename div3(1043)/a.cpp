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
    string a;
    cin>>a;
    ll m;
    cin>>m;
    string b,d;
    cin>>b>>d;
    string a1="",a2="";
    for(int i=0;i<m;i++){
        if(d[i]=='D'){
            a2+=b[i];
        }
        else{
            a1+=b[i];
        }
    }
    reverse(all(a1));
    cout<<a1<<a<<a2<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}