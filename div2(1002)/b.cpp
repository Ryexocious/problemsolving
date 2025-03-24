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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int minCost=n+1;
    if(n==k){
        vector<int>b;
        for(int i=1;i<n;i+=2){
            b.push_back(a[i]);
        }
        b.push_back(0);
        int cost=1;
        bool x=false;
        for(int idx=0;idx<b.size();idx++){
            if(b[idx]!=idx+1){
                cost=idx+1;
                x=true;
                break;
            }
        }
        minCost=min(minCost,cost);
    }
    else{
        for(int i=1;i<=n-k+1;i++){
            if(a[i]!=1){
                minCost=1;
                break;
            }
        }
        if(minCost!=1){
            minCost=2;
        }
    }
    cout<<minCost<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
