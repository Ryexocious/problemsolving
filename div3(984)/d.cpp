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
string s="1543";
void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    for (int i=0;i<n;++i){
        cin>>v[i];
    }
    ll co=0;
    for(int k=0;k<min(n,m)/2;k++){
        string s2="";
        for(int i=k;i<m-k;i++) {
            s2+=v[k][i];
        }
        for(int i=k+1;i<n-k-1;i++){
            s2+=v[i][m-k-1];
        }
        for(int i=m-k-1;i>=k;i--){
            s2+=v[n-k-1][i];
        }
        for(int i=n-k-2;i>k;i--){
            s2+=v[i][k];
        }
        string s3=s2+s2;
        size_t pos=s3.find(s);
        while (pos!=string::npos && pos<s2.size()) {
            co++;
            pos=s3.find(s,pos+1);
        }
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}

