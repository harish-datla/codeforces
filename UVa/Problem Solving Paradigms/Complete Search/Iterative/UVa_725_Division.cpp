#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool fla = false;
    while (cin >> n)
    {
        if (n == 0)
        {

            // cout << endl;
            break;
        }
        if(!fla){
            fla = true;
        }
        else{
        cout << endl;
        }
        bool flag = true;
        for (int fghij = 1234; fghij <= 98765 / n; fghij++)
        {
            int abcde = fghij * n;

            int used = (fghij < 10000);
            int tmp = abcde;
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }
            tmp = fghij;
            while (tmp)
            {
                used |= 1 << (tmp % 10);
                tmp /= 10;
            }
            if (used == (1 << 10) - 1)
            {
                
                    cout << abcde << " / " << setw(5) << setfill('0') <<  fghij << " = " << n << endl;
                
                flag = false;
            }
            
        }
        if (flag)
        {
            cout << "There are no solutions for " << n << "." << endl;

        }
    }
}