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
    int n,x;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }
    int co=0,co2=0;
    for(auto it:m){
        if(it.second>1){
            co++;
        }
        else{
            co2++;
        }
    }
    cout<<((co2+1)/2)*2+co<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}