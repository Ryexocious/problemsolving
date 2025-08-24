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
void solve(int c){
    ll n;
    cin>>n;
    vec v(n);
    map<ll,ll>m;
    bool x=true;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++){
        if(v[i]<=n-i || v[i]<=i){
            continue;
        }
        else{
            cout<<"Case "<<c<<": "<<"no"<<"\n";
            return;
        }
    }
    cout<<"Case "<<c<<": "<<"yes"<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
}