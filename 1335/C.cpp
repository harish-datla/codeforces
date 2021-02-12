#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int maxi1 = INT_MIN;
		int count = 0;
		vector<int> a(n+1,0);
	
		
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			a[x]+=1;
			if(a[x] == 1)count++;
			maxi1 = max(maxi1,a[x]);
		}
        if(maxi1 == count){
            cout << min(count,maxi1-1) << endl; 
        }
        else if(maxi1 > count){
            cout << min(count,maxi1) << endl;
        }
        else{
            cout << min(count,maxi1) << endl;
        }
        
	}
	return 0;
	
}