    #include<bits/stdc++.h>
    using namespace std;
    int maxi = INT_MIN;
     
    int main(){
     int t;
	 cin >> t;
	 while(t--){
		 int n;
		 cin >> n;
		 vector<int> a(n,0);
		 vector<bool> used(n,false);
         vector<int> out(n,0);
		 for(int i = 0 ; i < n; i++){
			 cin >> a[i];
			 maxi = max(a[i],maxi);
		 }
		 for(int i = 0 ; i <  n ; i++){
			 int m = 1;
			 int idx;
			 for(int j = 0 ; j < n ; j++){
				 if(!used[j]){
					 if(__gcd(a[j],maxi) >= m){
						 m = __gcd(a[j],maxi);
						idx = j;
					 }
				 }
			 }
			 out[i] = a[idx];
             used[idx] = true;
			 maxi = __gcd(maxi,a[idx]);
		 }
		 for(int i = 0 ; i < n  ; i++){
			 cout << out[i] << " ";
		 }
         maxi = INT_MIN;
         cout << endl;

	 }
    }

     
   
