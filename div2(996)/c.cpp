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
    string s;
    cin>>s;
    vec row,column;
    vector<vector<ll>>v(n,vector<ll>(m));
    for(int i=0;i<n;i++){
        vec tmp;
        ll sum=0;
        for(int j=0;j<m;j++){
            ll x;
            cin>>x;
            sum+=x;
            tmp.pb(x);
        }
        row.pb(sum);
        v[i]=tmp;
    }
    for(int i=0;i<m;i++){
        ll sum=0;
        for(int j=0;j<n;j++){
            sum+=v[j][i];
        }
        column.pb(sum);
    }
    ll r=0,cw=0;
    for(char c: s){
        if(c=='D'){
            v[r][cw]=row[r]*(-1);
            column[cw]+=row[r]*(-1);
            r++;
        }
        if(c=='R'){
            v[r][cw]=column[cw]*(-1);
            row[r]+=column[cw]*(-1);
            cw++;
        }
    }
    v[n-1][m-1]=column[m-1]*(-1);
    for(auto it :v){
        for(auto it2: it){
            cout<<it2<<" ";
        }
        cout<<"\n";
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