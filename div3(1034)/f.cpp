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
    vec v(n+1,0);
    for(int i=2;i<=n;i++){
        if(i*2<=n){
            if(v[i]==0){
                v[i*2]=i;
                v[i]=i*2;
            }
        }
        else{
            if(v[i]==0 && i%2!=0){
                v[i]=i;
            }
            else{
                if(i%2==0){
                    v[i]=v[2];
                    v[2]=i;
                }
            }
        }
    }
    v[1]=1;
    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
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