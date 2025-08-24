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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll a2=min(a,c);
    ll b2=min(b,d);
    if(a2<b2){
        cout<<"Flower"<<"\n";
    }
    else if(a2==b2){
        cout<<"Gellyfish"<<"\n";
    }
    else{
        cout<<"Gellyfish"<<"\n";
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