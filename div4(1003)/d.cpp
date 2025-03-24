#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n);
    vec v2(n);
    for (int i=0;i<n;i++){
        v[i].resize(m);
        ll sum=0;
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            sum+=v[i][j];
        }
        v2[i]=sum;
    }
    vec v3(n);
    for (int i=0;i<n;i++){
        v3[i]=i;
    }
    sort(v3.begin(),v3.end(),[&](int i, int j){
        return v2[i]>v2[j];
    });
    ll res=0,presum=0;
    for(int i=0;i<n;i++){
        int idx=v3[i];
        for(int x:v[idx]){
            presum+=x;
            res+=presum;
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }   
}

