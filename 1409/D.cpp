#include<bits/stdc++.h>
using namespace std;
int sum(long long n) {
	int res = 0;
	while (n > 0) {
		res += n % 10;
		n /= 10;
	}
	return res;
}

int main(){
  int t;
  cin >> t;
  while(t--){
   long long  n,s;
   cin >> n >> s;
   long long pw = 1;
   long long ans = 0;
   for(int i = 0 ; i < 18 ; i++){
       if(sum(n) <= s){
           cout << ans << endl;
            break;
       }
       else
       {

           int digit = n/pw;
           ans+=(pw*(10 - (n/pw)%10));
           n+=(pw*(10 - (n/pw)%10));
           if(sum(n) <= s){
           	   cout << ans << endl;
               break;
           }
           pw = pw*10;
       }
   }


  }

}