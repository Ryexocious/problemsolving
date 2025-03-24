#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<char,int> mp;
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
string s2="meow";
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<4){
        cn;
        return;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    mp m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    if(m.size()<4){
        cn;
        return;
    }
    //cout<<s<<"\n";
    int j=0; 
    for(int i=0;i<n;i++){
        if(s[i]==s2[j]){
            continue;
        }
        else{
            if(j<3){
                ++j;
            }
            if(s[i]!=s2[j]){
                cn;
                return;
            }
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