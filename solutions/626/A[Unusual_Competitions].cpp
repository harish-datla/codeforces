    #include<bits/stdc++.h>
    using namespace std;
     
     
    int main(){
     
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;
    	int open = 0;
    	int close = 0;
    	if(n%2){
    		cout << -1 << endl;
    		return 0;
    	}
    	for(int i = 0 ; i < n ; i++){
    		if(s[i] == ')'){
    			close++;
    		}
    		if(s[i] == '('){
    			open++;
    		}
    	}
    	if(close != open){
    		cout << -1 << endl;
    		return 0;
    	}
    	int ans = 0;
    	int temp = 0;
    	int last_idx = 0;
    	bool activate = false;
    	for(int i = 0 ; i < n; i++){
    		if(s[i] == ')'){
    			temp-=1;
    		}
    		else if(s[i] == '('){
    			temp+=1;
    		}
    		if(temp < 0){
    			activate = true;
    		}
    		if(temp == 0 && activate){
    			ans+=(i - last_idx + 1);
    			// cout << i << " " << last_idx << " " <<  i - last_idx + 1 << endl;
    			last_idx = i+1;
    			activate = false;
    		}
    		else if(temp == 0){
    			last_idx = i+1;
    		}
    	}
    	cout << ans << endl;
    }
     
