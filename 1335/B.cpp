#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
        string ans = "";
        string temp = "";
        for(int i = 0 ; i < c ; i++){
            temp+=(i+'a');
        }
        for(int i = c ; i < b ; i++){
            temp+=(temp[i-c]);
        }
        ans = temp;
		for(int i = b ; i < a ; i++){
            ans+=temp[(i)%b];
        }
        cout << ans << endl;
		
	}
	return 0;
}