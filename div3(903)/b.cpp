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
    vec v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(all(v));
    ll a=v[0];
    if(v[0]==v[1]==v[2]){
        cy;
        return;
    }
    else{
        if(v[1]%a!=0 || v[2]%a!=0){
            cn;
        }
        else{
            ll d=v[1]/a+ v[2]/a-2;
            if(d<=3){
                cy;
            }
            else{
                cn;
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