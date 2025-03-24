#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
void solve(){
    int n;
    cin>>n;
    int a,b,c;
    bool x=true;
    for(int i=0;i<n;i++){
        for(int j=1;j<=5;j++){
            cin>>a>>b>>c;
            if(j==4){
                if(a!=1 || b!=3 || c!=10){
                    x=false;    
                }
            }
            else if(j==5){
                if(a!=3 || b!=3 || c!=10){
                    x=false;
                }
            }
            else{
                if(a!=2 || b!=3 || c!=10){
                    x=false;
                }
            }
            
        }
    }
    if(x){
      cout<<"Consistent\n";
    }
    else{
        cout<<"Inconsistent\n";
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}