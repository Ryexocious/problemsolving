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
bool is_prime(ll x) {
    if(x <= 1) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    vec vo,ve;
    for(int i=2;i<=n;i+=2){
        ve.pb(i);
    }
    for(int i=1;i<=n;i+=2){
        vo.pb(i);
    }
    ll j=vo[vo.size()-1],k=0;
    for(int i=ve.size()-1;i>=0;i--){
        if(!is_prime(ve[i]+j)){
            k=ve[i];
            break;
        }
    }
    if(k==0){
        cout<<-1<<"\n";
        return;
    }
    for(auto it :ve){
        if(it!=k){
            cout<<it<<" ";
        }
    }
    cout<<k<<" "<<j<<" ";
    for(auto it :vo){
        if(it!=j){
            cout<<it<<" ";
        }
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}