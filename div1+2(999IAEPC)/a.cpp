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
    vec v(n);
    ll co=0,co2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            co++;
        }
        else{
            co2++;
        }
    }
    if(co2==0){
        cout<<1<<"\n";
    }
    else if(co==0){
        cout<<co2-1<<"\n";
    }
    else{
        cout<<co2+1<<'\n';
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