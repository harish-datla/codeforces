#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> two;
    vector<int> four;
    vector<int> six;
    vector<int> eight;

    for(int i = 0 ; i <= 99 ; i++){
        if((i/10 + i%10)*(i/10 + i%10) == i){
            two.push_back(i);
        }
    }

    for(int i = 0 ; i <= 9999 ; i++){
        if((i/100 + i%100)*(i/100 + i%100) == i){
            four.push_back(i);
        }
    }
    for(int i = 0 ; i <= 999999 ; i++){
        if((i/1000 + i%1000)*(i/1000 + i%1000) == i){
            six.push_back(i);
        }
    }

    for(int i = 0 ; i <= 99999999 ; i++){
        if((i/10000 + i%10000)*(i/10000 + i%10000) == i){
            eight.push_back(i);
        }
    }

    int d;
    while(cin >> d){
        switch(d){
            case 2:
                for(int i = 0 ; i < two.size() ; i++){
                       cout << setw(2)<< setfill('0') << two[i] << endl;
                }
                break;
            case 4:
                for(int i = 0 ; i < four.size() ; i++){
                       cout << setw(4)<< setfill('0') << four[i] << endl;
                }
                break;
            case 6:
                for(int i = 0 ; i < six.size() ; i++){
                       cout << setw(6)<< setfill('0') << six[i] << endl;
                }
                break;
            case 8:
                for(int i = 0 ; i < eight.size() ; i++){
                       cout << setw(8)<< setfill('0') << eight[i] << endl;
                }
                break;
        }
    }
}