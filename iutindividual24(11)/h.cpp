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
    int n;
    cin>>n;
    string s="leg",s2="rest",s3="";
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i].find(s2)!=std::string::npos){
            s3+="2";
        }
        else if(v[i].find(s)!=std::string::npos){
            s3+="1";
        }
        else{
            s3+="3";
        }
    }
    ll co=0,co2=0,co3=1;
    for(int i=0;i<31;i++){
        if(co2==0){
            cout<<co3++<<" ";
        }
        if(s3[(co)%n]=='1') cout<<"\U0001F9B5";
        if(s3[(co)%n]=='2') cout<<"\U0001F60E";
        if(s3[(co)%n]=='3') cout<<"\U0001F4AA";
        co++;
        if(co2++==6){
            co2=0;
            cout<<"\n";
        }
    }
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}
