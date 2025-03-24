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
    ll n,k;
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<pair<ll, ll>> v2;
    for (int i = 0; i < n; i++) {
        v2.push_back({v[i], i});
    }
    sort(v2.rbegin(), v2.rend());
    vector<bool> is_blue(n, false);
    ll sum = 0;
    ll a=0,b=0,c=0,a2=0,b2=0;
    if(k==1){
        for(int i=1;i<n-1;i++){
            sum=max(v[i],sum);
        }
        ll sum2=0;
        a=v[0];
        b=v[n-1];
        sum+=max(a,b);
        sum2=a+b;
        sum=max(sum,sum2);
    }
    else{
        for(int i = 0; i < k; i++){
            is_blue[v2[i].second] = true;
            sum += v2[i].first;
        }
        if(!is_blue[0]){
            a=v[0];
        }
        if(!is_blue[n-1]){
            b=v[n-1];
        }
        ll l,r;
        for(int i=0;i<n;i++){
            if(is_blue[i]){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(is_blue[i]){
                r=i;
                break;
            }
        }
        for(int i=l;i<=r;i++){
            if(!is_blue[i]){
                c=max(v[i],c);
            }
        }
        sum+=max(a,max(b,c));
    }
    cout<<sum<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
