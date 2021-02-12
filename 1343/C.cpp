#include<bits/stdc++.h>
using namespace std;
// int ans ;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
        cin >> n;
        vector<long long> a(n,0);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        bool neg = false;
        long long sum = 0;
        long long mini = 0;
        long long maxi = 0;
        for(int i = 0 ; i < n ; i++){
            if(!neg && a[i] < 0){
                // cout << mini << endl;
                sum+=mini;
                neg = true;
                maxi = INT_MIN;
                maxi = max(maxi, a[i]);
            }
            else if(neg && a[i] < 0){
                maxi = max(maxi,a[i]);
            }
            else if(!neg && a[i] > 0){
                mini = max(mini,a[i]); 
            }
            else if(neg && a[i] > 0){
                // cout << maxi << endl;
                sum+=maxi;
                neg = false;
                mini = INT_MIN;
                mini = max(mini,a[i]);
            }
        }
        if(neg){
            sum+=maxi;
            // cout << maxi << endl;
        }
        else
        {
            sum+=mini;
            // cout << mini << endl;
        }
        cout << sum << endl;
    }
 
}