#include<bits/stdc++.h>
using namespace std;


int main(){

int t;
cin >> t;
while(t--){
	long long a,b,n,m;


	cin >> a >> b >> n >> m;
   
       if(m  <= min(a,b) && n <= a+b-m ){
           cout << "YES" << endl;
           continue;
       }else{
          cout << "NO" << endl;
       }
    
    

} 
	
}
