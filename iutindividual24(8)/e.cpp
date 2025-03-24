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
    int n,res=0,co=0;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]<=v[i-1]){
            co++;
        } 
        else{
            co=0;
        }
        res=max(res,co);
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}