#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
const long long INF = 1LL << 60;
int main() 
{
    int p_1,p_2,p_3,k,n=1;
    cin >> p_1 >> p_2 >> p_3 >> k;
    long long A[k+10];


    
    REP(i,1000){
            int j=i;
            if(j%p_1 == 0){
            while(j%p_1 != 0){
                j /= p_1;
            }
            }
            if(j%p_2 == 0){
            while(j%p_2 != 0){
                j /= p_2;
            }
            }
            if(j%p_3 == 0){
            while(j%p_3 != 0){
                j /= p_3;
            }
            }
            if(j == 1){
                A[n] = i;
                cout << A[n] << " ";
                n++;
            }
            
    }

    cout << A[k] << endl;

}
