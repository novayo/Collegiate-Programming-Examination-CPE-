#include <bits/stdc++.h>
using namespace std;

long long func(long long in){
    long long ret = 1;
    while (in != 1){
        if (in%2 == 1){
            in = 3*in+1;
        }
        else{
            in /= 2;
        }
        ret++;
    }

    return ret;
}

int main(void){
    int a, b;
    while (cin >> a >> b){
        long long ans = INT_MIN;
        cout << a << " " << b << " ";
        if (a > b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        for (long long i=a; i<=b; i++){
            long long tmp = func(i);
            if (tmp > ans) ans = tmp;
        }
        cout << ans << endl;
    }
    return 0;
}