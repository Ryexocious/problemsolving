#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<int,int> mp;
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
    int n,k;
       cin>>n>>k;
       vector<int>v(n);
       int frq1=0,frq2=0,ind1=-1,ind2=-1;
       for(int i=0;i<n;i++)cin>>v[i];
       for(int i=0;i<n;i++)
       {
           if(v[i]==v[0])frq1++;
           if(frq1==k)
           {
               ind1=i;
               break;
           }
       }
       for(int i=n-1;i>=0;i--)
       {
             if(v[i]==v[n-1])frq2++;
             if(frq2==k)
             {
                  ind2=i;
                  break;
             }
       }
       if(frq1<k || frq2<k)
       {
          cn;
          return;
       }
       if(v[0]!=v[n-1])
       {
           if(ind1>ind2)
           {
              cn;
              return;
           }
       }
       cy;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}