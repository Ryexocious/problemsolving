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
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
void solve(){
    string s;
    int k,n;
    cin>>s>>k;
    n=s.size();
    vector<pair<int,int>>v(k);
    for(int i=0;i<k;i++){
        cin>>v[i].first>>v[i].second;
        v[i].first--;
    }
    int co=0;
    for(int i=0;i<=n-4;i++){
        if(i>= 0&& i+3<n && s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
            co++;
        }
    }
    for(int i=0;i<k;i++) {
        int idx=v[i].first;
        char x='0'+v[i].second;
        if(s[idx]!=x) {
            for(int j=idx-3;j<=idx;j++){
                if(j>=0 && j+3<n && s[j] =='1' && s[j+1] =='1' && s[j+2]=='0' && s[j+3]=='0'){
                    co--;
                }
            }
            s[idx]=x;
            for(int j=idx-3;j<=idx;j++){
                if(j>=0 && j+3<n && s[j] =='1' && s[j+1] =='1' && s[j+2]=='0' && s[j+3]=='0'){
                    co++;
                }
            }
        }
        if(co>0) {
            cy;
        } 
        else {
            cn;
        }
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}
