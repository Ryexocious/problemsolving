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
void solve() {
    ll n;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])<=1){
            cout<<0<<"\n";
            return;
        }
    }
    if(n==2){
        cout<<-1<<"\n";
        return;
    }
    bool chk=false;
    for(int i=0;i<n-1;i++){
        ll mn=min(v[i],v[i+1]);
        ll mx=max(v[i],v[i+1]);
        bool chk2=false;
        if(i-1>=0) {
            ll mn2=v[i-1]-1,mx2=v[i-1]+1;
            if(max(mn,mn2) <= min(mx,mx2)) {
                chk2=true;
            }
        }
        if(i+2<n){
            ll mn3=v[i+2]-1,mx3=v[i+2]+1;
            if(max(mn,mn3)<=min(mx,mx3)){
                chk2=true;
            }
        }
        if(chk2){
            chk=true;
            break;
        }
    }

    if(chk){
        cout<<1<<"\n";
    } 
    else{
        cout<<-1<<"\n";
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