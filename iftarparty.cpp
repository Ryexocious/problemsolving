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
vector<int> divisor(int n,int l){
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i>l)v.pb(i);
            if(n/i!=i && n/i>l)v.pb(n/i);
        }
    }
    sort(all(v));
    return v;
}
void solve(int c){
    int p,l,et;
    cin>>p>>l;
    et=p-l;
    if(et<l){
        cout<<"Case "<<c<<": "<<"Impossible"<<"\n";
        return;
    }
    vector<int>res=divisor(et,l);
    cout<<"Case "<<c<<": ";
    for(auto it: res){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }   
}