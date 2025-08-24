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
    ll n,m,k;
    cin>>n>>m>>k;
    string s="",s2="";
    for(int i=1;i<=m;i++){
        if(i%2==0){
            s+="2 ";
        }
        else{
            s+="1 ";
        }
    }
    for(int i=1;i<=m;i++){
        if(i%2==0){
            s2+="1 ";
        }
        else{
            s2+="2 ";
        }
    }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<s2<<"\n";
        }
        else{
            cout<<s<<"\n";
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