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
    ll n,m,k,x,d;
    cin>>n>>m>>k;
    set<ll> v2;
    vec v(m);
    string s="";
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    for(int i=0;i<k;i++){
        cin>>x;
        v2.insert(x);
    }
    if(n-k>1){
        for(int i=0;i<m;i++){
            s+='0';
        }
        cout<<s<<"\n";
        return;
    }
    if(n-k==0){
        for(int i=0;i<m;i++){
            s+='1';
        }
        cout<<s<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(v2.find(i)==v2.end()){
            d=i;
            break;
        }
    }
    for(int i=0;i<m;i++){
        if(v[i]==d){
            s+='1';
        }
        else{
            s+='0';
        }
    }
    cout<<s<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}