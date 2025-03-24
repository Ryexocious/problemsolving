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
    int n,k;
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int co=0;
        for(int j=0;j<n;j++){
            if(j!=i){
                int d=abs(v[i]-v[j]);
                if(d%k==0){
                    co++;
                }
            }
        }
        if(co==0){
            cy;
            cout<<i+1<<"\n";
            return;
        }
    }
    cn;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}