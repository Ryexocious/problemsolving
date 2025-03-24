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
    ll n,maxval=0;
    cin>>n;
    vec a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxval=max(maxval,a[i]);
    }
    ll q;
    for(int i=0;i<n;i++){
        if(a[i]==maxval){
            q=i;
            break;
        }
    }
    ll ans = a[0], ans_l = 0, ans_r = 0,ans2=0;
    ll sum = 0, minus_pos = -1;
    for (int r = 0; r < n; ++r) {
        sum += a[r];
        if (sum > ans) {
            ans = sum;
            ans_l = minus_pos + 1;
            ans_r = r;
        }
        if (sum < 0) {
            sum = 0;
            minus_pos = r;
        }
    }
    ll d=0;
    for(int i=ans_l;i<=ans_r;i++){
        d=max(d,a[i]);
    }
    bool contains_maxval = false;
    for (int i = ans_l; i <= ans_r; i++) {
        if (a[i] == maxval) {
            contains_maxval = true;
            break;
        }
    }
    if (!contains_maxval) {
        ans2=ans;
        if(q<ans_l){
            for(int i=q;i<ans_l;i++){
                ans2+=a[i];
            }
        }
        else{
            for(int i=q;i>ans_r;i--){
                ans2+=a[i];
            }
        }
    }
    cout<<max(maxval*maxval,max(ans2*maxval,ans*d))<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}