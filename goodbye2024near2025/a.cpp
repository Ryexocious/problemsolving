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
bool chk(int x, int y){
    return 2*x>y && 2*y>x;
}
void solve(){
    int n;
    cin>>n;
    vec v(n);
    set<ll>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    ll x=0;
    for(int i=0;i<n-1;i++){
        if(chk(v[i],v[i+1])){
            x++;
        }
    }
    if(x>=1){
        cy;
    } 
    else{
        cn;
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