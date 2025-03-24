#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string, int> mp;
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pob pop_back

void solve() {
    ll n,k;
    cin>>n>>k;
    vec v(n);
    if(k==1){
        for(int i=0;i<n-1;i++){
            v[i]=n;
        }
        v[n-1]=n-1;
    } 
    else{
        if((k-1)%2==0){
            for(int i=0;i<n-2;i++){
                v[i]=n;
            }
            v[n-2]=n;
            v[n-1]=n-1;
        } 
        else{
            for(int i=0;i<n-2;i++){
                v[i]=n-1;
            }
            v[n-2]=n;
            v[n-1]=n-1;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==i+1){
            swap(v[i],v[i+1]);
        }
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}