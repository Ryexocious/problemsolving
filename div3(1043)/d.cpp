#include <bits/stdc++.h>
using namespace std;

int main(){
    long double champer = 0;
    long long total_digits = 0;

    for(long long n=1; n<=1000000; n++){ // partial sum
        long long digits = floor(log10(n)) + 1;
        total_digits += digits;
        champer += n / pow(10.0, total_digits);
    }

    cout << setprecision(20) << champer << endl;
}
