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
    ll n,x;
    cin>>n>>x;
    if(n==1){
        cout<<0<<"\n";
    }
    else{
        ll co=0;
        for(int i=0;i<n;i++){
            if(i!=x){
                co++;
                cout<<i<<" ";
            }
        }
        if(co!=n){
            cout<<x<<"\n";
        }
        else{
            cout<<"\n";
        }
    }

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        //cout<<t<<"\n";
        solve();
    }
}