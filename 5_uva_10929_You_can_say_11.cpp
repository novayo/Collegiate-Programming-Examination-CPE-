#include <bits/stdc++.h>
using namespace std;

int main(void){

    while (true){
        string data;
        cin >> data;
        if (data == "0") break;

        int l = data.length();
        int odd = 0, even = 0;
        for (int i=0; i<l; i++){
            if (i%2 == 0){
                string tmp(1, data[i]);
                odd += stoi(tmp);
            } else{
                string tmp(1, data[i]);
                even += stoi(tmp);
            }
        }

        if (abs(odd-even)%11 == 0) cout << data << " is a multiple of 11." << endl;
        else cout << data << " is not a multiple of 11." << endl;
    }
    

    return 0;
}