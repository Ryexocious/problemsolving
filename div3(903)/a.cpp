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
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    auto it=s.find(t);
    ll co=0;
    if(it!=string::npos){
        cout<<co<<"\n";
        return;
    }
    for(int i=0;i<5;i++){
        co++;
        s+=s;
        auto it=s.find(t);
        if(it!=string::npos){
            cout<<co<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}