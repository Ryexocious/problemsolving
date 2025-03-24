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
    int n,co=0;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            co++;
        }
    }
    if(co==n){
        cout<<0<<"\n";
    }
    else if(co==0){
        cout<<1<<"\n";
    }
    else{
        ll d,e,co2=0;
        for(int i=0;i<n;i++){
            if(v[i]!=0){
                d=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[i]!=0){
                e=i;
                break;
            }
        }
        for(int i=d;i<=e;i++){
            if(v[i]==0){
                co2++;
                break;
            }
        }
        if(co2!=0){
            cout<<2<<"\n";
        }
        else{
            cout<<1<<"\n";
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