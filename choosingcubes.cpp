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
    ll n,f,k;
    cin>>n>>f>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll x=v[f-1],co=0,l=0,r=0;
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++){
        if(v[i]==x && co==0){
            l=i;
            co++;
        }
        if(v[i]==x){
            r=i;
        }
    }
    if(l==r && l<=k-1){
        cy;
    }
    else if(l>k-1 && r>k-1){
        cn;
    }
    else if(l<=k-1 && r>k-1){
        cout<<"Maybe"<<"\n";
    }
    else{
        cy;
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