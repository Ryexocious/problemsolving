#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace std;
using namespace __gnu_pbds; 

#define ld long double
#define int long long
#define ll long long
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend() 
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define setpr(x) cout << setprecision(x) << fixed

template <class T>
using ordered_set =  __gnu_pbds::tree<T,__gnu_pbds::null_type,less<T>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>;
template<typename T, typename U>
T& amax(T& x, U y) {if(y > x) x = y; return x;}
template<typename T, typename U>
T& amin(T& x, U y) {if(y < x) x = y; return x;}

const long long INF = LLONG_MAX;
const int inf = 2e9;
const long double ep = 0.0000001;
const long double pi = acos(-1.0);
const ll MOD = 1000000007;
const int mod = 998244353;
const int TWO_MOD_INV = 500000004;

//// Global Variables///

// int n;

// namespace Judge{
//     string query(string s)
//     {
//         string ret;
//         // cout << "? " << a << " " << b << endl;
//         cout<<s<<endl;
//         cin >> ret;
//         return ret;
//     }
 
//     void answer(string a)
//     {
//         string ret;
//         cout << a << endl;
//         cin >> ret;
//         assert(ret == "Correct");
//         return;
//     }
 
//     void takeInput()
//     {
//         cin >> n; // According to input variable
//     }
// }

// using namespace Judge;

int N=625;
vector<int> ans;
vector<int> prime(N + 1, 1);

void findAllPrimes() {
    prime[0] = prime[1] = 0; 
    
    for (int i = 2; i <= 25; ++i) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = 0; 
            }
        }
    }
    // ans.push_back(1);
    for (int i = 2; i <= N; ++i) {
        if (prime[i] == 1) {
            ans.push_back(i);
        }
    }
}


void solve(int thisisinput){
    int n, c; 
    cin>>n;
    // n = thisisinput;
    int v[n+1][n+1];
    if(n==1){
        cout<<"1\n"; return;
    }else if(n==2){
        cout<<"3 3\n3 1\n"; return;
    }
    int a, b, cass=0;
    for(int i=0; i<ans.size(); i++){
        for(int j=i+1; j<ans.size(); j++){
            if(ans[i]+ans[j] == n*n){
                a=ans[i]; b=ans[j];
                cass=1;
                break;
            }
        }
    }
    if(cass){
        int cnta=a, cntb=b, tmp=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(cnta and __gcd(i, a)==1 and __gcd(j, a)==1){
                    cout<<a; cnta--;
                    if(__gcd(a, i)==1 and __gcd(a, j)){
                        tmp++;
                    }
                }else{
                    if(__gcd(b, i)==1 and __gcd(b, j)){
                        tmp++;
                    }
                    cout<<b; cntb--;
                }
                if(j<n)
                    cout<<" ";
            }
        if(i<n)
            cout<<"\n";
        }
        // if(tmp == n*n){
        //     cout<<"Correct "<<endl;
        //     cout<<cnta<<" "<<cntb<<" ";
        // }
        return;
    }

    for(int i=0; i<ans.size(); i++){
        for(int j=i+1; j<ans.size(); j++){
            for(int k=j+1; k<ans.size(); k++){
                if(ans[i]+ans[j]+ans[k] == n*n){
                    a=ans[i]; b=ans[j]; c=ans[k];
                    break;
                }
            }
        }
    }
    
    int cnta=a, cntb=b, cntc=c, tmp=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(cnta and __gcd(i, a)==1 and __gcd(j, a)==1){
                cout<<a; 
                cnta--;
                if(__gcd(a, i)==1 and __gcd(a, j)){
                    tmp++;
                }
            }else if(cntb and __gcd(i, b)==1 and __gcd(j, b)==1){
                cout<<b; 
                cntb--;
                if(__gcd(b, i)==1 and __gcd(b, j)){
                    tmp++;
                }
            }else{
                if(__gcd(c, i)==1 and __gcd(c, j)){
                    tmp++;
                }
                cout<<c;
                cntc--;
            }
            if(j<n)
                cout<<" ";
        }
        if(i<n)
            cout<<"\n";
    }
    // if(tmp == n*n){
    //     cout<<"Correct \n";
    //     cout<<cnta<<" "<<cntb<<" "<<cntc<<" ";
    // }
    // cout<<cnta<<" "<<cntb<<" "<<cntc;
}

void pre()
{   
    findAllPrimes();
    fastio;
}

signed main() {
    pre();

    int t=1;
    // cin >> t; 
    for (int i = 0; i < t; i++) {
        // cout<<"Case "<<i+1<<": ";
        solve(i+1);
        cout << endl;
    }
    return 0;
}
