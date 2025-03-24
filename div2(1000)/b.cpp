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
    ll n,l,r;
    cin>>n>>l>>r;
    l--;r--;
    vec v,v2,v3;
    bool chk=false;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(i>=l && i<=r){
            v.pb(x);
        }
        else{
            if(l==0 || r==0){
                if(i>r){
                    v2.pb(x);
                }
            }
            else if(r==n-1 || l==n-1){
                if(i<l){
                    v2.pb(x);
                }
            }
            else{
                chk=true;
                if(i<l){
                    v2.pb(x);
                }
                if(i>r){
                    v3.pb(x);
                }
            }
        }
    }
    sort(all(v));
    sort(all(v2));
    sort(all(v3));
    ll x=0,y=v.size()-1,co=0,co2=0;
    while(x<v2.size() && y>=0){
        if(v2[x]>v[y]){
            break;
        }
        co++;
        x++;
        y--;
    }
    if(chk){
        ll x=0,y=v.size()-1;
        while(x<v3.size() && y>=0){
            if(v3[x]>v[y]){
                break;
            }
            co2++;
            x++;
            y--;
        }
    }
    ll sum=0,sum2=0;
    for(int i=0;i<co;i++){
        sum+=v2[i];
    }
    for(int i=0;i<v.size()-co;i++){
        sum+=v[i];
    }
    if(chk){
        for(int i=0;i<co2;i++){
            sum2+=v3[i];
        }
        for(int i=0;i<v.size()-co2;i++){
            sum2+=v[i];
        }
        cout<<min(sum,sum2)<<"\n";
    }
    else{
        cout<<sum<<"\n";
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