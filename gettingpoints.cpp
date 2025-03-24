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
    ll n,p,l,t;
    cin>>n>>p>>l>>t;
    ll d=(n+6)/7;
    ll res=0,l2=0,r=n,mid;
    while(l2<=r){
    	ll mid=l2+ (r-l2)/2; 
    	ll total=min(mid*2,d)*t+mid*l; 
    	if(p<=total){
    	    res=mid; 
    	 	r=mid-1; 
    	 	
    	}
        else{
    	    l2=mid+1; 
    	}
    }
    cout<<n-res<<endl ; 
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}