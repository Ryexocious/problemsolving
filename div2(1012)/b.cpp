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
    ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='1'){
                bool chk1=true;
                for(int k=0;k<j;k++){
                    if(v[i][k]=='0'){
                        chk1=false;
                        break;
                    }
                }
                bool chk2=true;
                for(int k=0;k<i;k++){
                    if(v[k][j]=='0'){
                        chk2=false;
                        break;
                    }
                }
                if(!chk1 && !chk2){
                    cn;
                    return;
                }
            }
        }
    }
    cy;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}