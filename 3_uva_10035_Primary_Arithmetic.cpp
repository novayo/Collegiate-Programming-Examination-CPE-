#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a, b;
    while (true){
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        int ans = 0;
        int carry = 0;
        while (a > 0 || b > 0){
            if (a > 0){
                carry += a%10;
                a /= 10;
            }

            if (b > 0){
                carry += b%10;
                b /= 10;
            }
            carry /= 10;
            if (carry > 0) ans++;
        }
        if (ans == 0) cout << "No carry operation." << endl;
        else if (ans == 1) cout << "1 carry operation." << endl;
        else cout << ans << " carry operations." << endl;
    }

    return 0;
}