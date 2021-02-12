#include<bits/stdc++.h>
using namespace std;


int main(){

	string a;
	cin >> a;
	char str ;
	str = a[0];
	for(int i = 0 ; i < a.size() ; i++){
		if(a[i] < str){
			str = a[i];
		}
		if( i > 0 ){

			bool flag = true;
			if(str < a[i]){
				cout << "Ann" << endl;
			}
			else
			{
				cout << "Mike" << endl;
			}

			
			
		}
		else if(i == 0){
			cout << "Mike" << endl;
		}
		

	}
	
	
}

