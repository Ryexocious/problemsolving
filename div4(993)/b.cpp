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
    string s,s2="";
    cin>>s;
    ll len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='p'){
            s2+="q";
        }
        else if(s[i]=='q'){
            s2+='p';
        }
        else{
            s2+=s[i];
        }
    }
    for(int i=len-1;i>=0;i--){
        cout<<s2[i];
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}