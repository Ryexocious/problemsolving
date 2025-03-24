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
    int n;
    cin>>n;
    vec v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v2[i]=v[i];
    }
    sort(all(v2));
    for(int i=0;i<n;i++){
        if(v[i]==v2[n-1]){
            cout<<v[i]-v2[n-2]<<' ';
        }
        else{
            cout<<v[i]-v2[n-1]<<' ';
        }
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