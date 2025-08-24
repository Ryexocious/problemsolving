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
void bubble_sort(vector<pair<ll,ll>> &res,vec &arr,ll x,ll n){
    for (int i=0;i<n;i++){
        for (int j=0;j+1<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                res.pb({x,j+1});
            }
        }
    }
}
void solve(){
    ll n;
    cin>>n;
    vec a(n),b(n);
    vector<pair<ll,ll>>res;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    bubble_sort(res,a,1,n);
    bubble_sort(res,b,2,n);
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            swap(a[i],b[i]);
            res.pb({3,i+1});
        }
    }
    cout<<res.size()<<"\n";
    for (auto it : res) {
        cout<<it.first<<" "<<it.second<<"\n";
    }
}
int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }   
}
