// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for(int i = 0; i < (int)(n); i++)
// #define REP(i, n) for(int i = 1; i <= (int)(n); i++)
// const long long INF = 1LL << 60;
// const double PI=3.14159265358979323846;
// int main() 
// {
//     long long n,x;
//     cin >> n >> x;

//     int A[n+10];
//     rep(i,n+1){
//         A[i] = 0;
//     }
//     int i=0;
//     while(x){
//         A[i]=x%2;
//         x /= 2;i++;
//     }

//     int y,sum=0;
//     rep(i,n){
//         cin >> y;
//         if(A[i]){
//             sum += y;
//         }
//     }

//     cout << sum << endl;

// }

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n,x;
    cin >> n >> x;

    int y,sum=0;
    for(int i=0;i<n;i++){
        cin >> y; 
        if(x>>i&1){
            sum+=y;
        }
    }

    cout << sum << endl;
}