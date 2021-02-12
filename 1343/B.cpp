#include<bits/stdc++.h>
using namespace std;
// int ans ;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
        cin >> n;
        if((n/2)%2){
        	cout << "NO" << endl;
        }
        else
        {
        	cout << "YES" << endl;
        	int x = 2;
        	for(int i = 0 ; i < n/2 ; i++){
        	cout << x << " ";
        		x+=2;
        	}
        	int y = 1;
        	for(int i = n/2 ; i < n-1 ; i++){
        		cout << y << " ";
        		y+=2;
        	}
        	cout << y+(n/2) << " ";
            cout << endl;
        }
        
    }
 
}