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
//string s="abcdefghijklmnopqrstuvwxyz";
void solve(int t) {
    int n;
    cin>>n;
    double x=0,y=1e9;
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        x=max(x,(double)i/b);
        y=min(y,(double)i/a);
    }
    if (x <= y) {
        cout<<"Case #"<<t<<": "<<fixed<<setprecision(3)<<x<< "\n";
    } 
    else {
        cout<<"Case #"<<t<<": -1\n";
    }
}

int main() {
     fast;

    // Ensure valid file paths
    if (!freopen("D:/hopefully1200/metahackercup/subsonic_subway_validation_input.txt", "r", stdin)) {
        cerr << "Input file not found!\n";
        return 1;
    }

    if (!freopen("output.txt", "w", stdout)) {
        cerr << "Could not open output file!\n";
        return 1;
    }

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    fclose(stdin);
    fclose(stdout);
}
