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
    ll n,mov1=0,mov2=0,co=0,co2=0;
    cin>>n;
    vec v(n),v2(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)cin>>v2[i];
    for(int i=0;i<n;i++){
        if(v[i]>v2[i]){
            mov1+=v[i];
        }
        else if(v2[i]>v[i]){
            mov2+=v2[i];
        }
        else if(v[i]==-1){
            co++;
        }
        else if(v[i]==1){
            co2++;
        }
    }
    while(co2--){
        if(mov1<mov2) mov1++;
        else mov2++;
    }
    while(co--){
        if(mov1>mov2) mov1--;
        else mov2--;
    }
    cout<<min(mov1,mov2)<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}