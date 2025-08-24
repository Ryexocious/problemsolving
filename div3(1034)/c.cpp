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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vec prefm(n),suffmx(n);
    prefm[0]=v[0];
    for(int i=1;i<n;i++){
        prefm[i]=min(prefm[i-1],v[i]);
    }
    suffmx[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        suffmx[i]=max(suffmx[i+1],v[i]);
    }
    string res="";
    for(int i=0;i<n;i++){
        if(prefm[i]==v[i] || suffmx[i]==v[i]){
            res+='1';
        }
        else{
            res+='0';
        }
    }
    cout<<res<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

