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
    vec freq(50+1,0);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        freq[x]++;
    }
    ll d=min(freq[0],freq[1]);
    ll res=d*2;
    freq[0]=freq[0]-d;
    freq[1]=freq[1]-d;
    for(int i=0;i<51;i++){
        if(i==0){
            res+=freq[i];
        }
        else{
            res+=freq[i]*i;
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}