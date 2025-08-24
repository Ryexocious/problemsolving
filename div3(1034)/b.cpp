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
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll d=v[m-1];
    sort(all(v));
    if(d==v[n-1]){
        cy;
        return;
    }
    else{
        if(k==1 && d!=v[n-1]){
            cn;
        }
        else{
            cy;
        }
    }
}
int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }   
}
