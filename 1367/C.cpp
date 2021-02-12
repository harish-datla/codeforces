#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> zeroes;
        bool left = false;
        bool right = false;
        int i = 0;
        int x = 0;
        while(i < n){
            if(s[i] == '1' && !left){
                if(x- k > 0){
                    zeroes.push_back(x-k);
                  
                    
                }
                x = 0;
                left = true;
                
            }
            else if(s[i] == '1' && left){
            	if(x - 2*k > 0){
                zeroes.push_back(x-2*k);
            	}
                x = 0;
                left = true;
            }
            else
            {
                x++;
            }
            i++;
        }
        if(x-k > 0 && left){
        	// cout <<  << endl;
        zeroes.push_back(x-k);
        }
        else if(!left)
        {
        zeroes.push_back(x);
        }

        int ans = 0;
        for(int i = 0 ; i < zeroes.size() ; i++){
        	// cout << zeroes[i] << endl;
         if(zeroes[i] < k + 1){
         	ans+=1;
         }
         else
         {
         if(zeroes[i]%(k+1)){
         	ans+=(zeroes[i]/(k+1));
         	ans+=1;
         }
         else
         {
         	ans+=(zeroes[i]/(k+1));
         }
         }
        }
        cout << ans << endl;
    }

}


