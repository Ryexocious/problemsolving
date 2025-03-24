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
void solve(int c){
    ll n,k,sum=0,mx=0;
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        mx=max(mx,v[i]);
    }
    ll l=mx,r=sum,mid,res=sum;
    while(l<=r){
        mid=l+(r-l)/2;
        ll sum2=0,co=1;
        for(int i=0;i<n;i++){
            if(sum2+v[i]>mid){
                co++;
                sum2=v[i];
            } 
            else{
                sum2+=v[i];
            }
        }
        if(co<=k){
            res=mid;
            r=mid-1;
        } 
        else{
            l=mid+1;
        }
    }
    cout<<"Case "<<c<<": "<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }   
}