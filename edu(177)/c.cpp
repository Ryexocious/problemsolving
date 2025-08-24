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
    ll n,x,ans=0;
	cin>>n;
	vec vis(n+1), a(n+1);
	for(int i=1;i<=n;i++) cin>>a[i],vis[i]=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		while(!vis[x]){
			vis[x]=1;
			ans++;
			x=a[x];
		}
		cout<<ans<<' ';
	}
	cout<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}