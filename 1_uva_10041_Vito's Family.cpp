#include<bits/stdc++.h>
using namespace std;

int main(){
    
	int lines;
	cin >> lines;
	while (lines--){
        
		int times;
		int data[10000] = {0};
		
        cin >> times;
		for (int i=0; i<times; i++){
			int itmp;
			cin >> itmp;
			data[i] = itmp;
		}
        
		int ans = INT_MAX;
		for (int i=0; i<times; i++){
			int itmp = 0;
			for (int j=0; j<times; j++){
				if (i == j) continue;
				itmp += abs(data[i]-data[j]);
			}
			ans = min(ans, itmp);
		}
		cout << ans << endl;
	}
	
	return 0;
}