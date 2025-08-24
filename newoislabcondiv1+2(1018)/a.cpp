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
    string s;
    cin>>s;
    ll d=1,j=n-1,e=n;
    vec v(n,0);
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='<'){
            v[i+1]=d++;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==0){
            v[i]=d++;
        }
    }
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}