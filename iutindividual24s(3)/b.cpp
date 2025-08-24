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
const ll mx=1e6;
void solve(){
    ll x;
    cin>>x;
    if(x==1){
        cout<<-1<<"\n";
    }
    else{
        if(x<=mx){
            cout<<1<<" "<<x-1<<" "<<1<<"\n";
        }
        else{
            ll d=x/1e6;
            ll c=x%mx;
            if(c!=0){
                cout<<d<<" "<<mx<<" "<<c<<"\n";
            }
            else{
                cout<<d-1<<" "<<mx<<" "<<mx<<"\n";
            }
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