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
    vec v(n);
    map<ll,ll>m;
    ll co=0;
    pair<ll,ll>p;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    if(m.size()==1 && n==1){
        cout<<1<<" "<<1<<"\n";
    }
    else if(m.size()==1){
        cout<<0<<"\n";
    }
    else{
        ll co=0;
        pair<ll,ll>res={0,0};
        for(int i=0;i<n;i++){
            ll l=0,r=0;
            if(m[v[i]]==1){
                l=i;
                while(m[v[i]]==1){
                    m[v[i]]=0;
                    r=i;
                    i++;
                }
                cout<<r<<" "<<l<<"\n";
                if((r-l)+1>=co){
                    co=r-l+1;
                    res={l,r};
                }

            }
        }
        ll co2=0;
        cout<<co<<"\n";
        for(auto it : m){
            if(it.second>0){
                co2++;
            }
        }
        ll d=n-m.size(),d2=n-co2-co;
        cout<<d<<d2<<"\n";
        if(d2>=d){
            cout<<res.first+1<<" "<<res.second+1<<"\n";
        }
        else{
            cout<<0<<"\n";
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