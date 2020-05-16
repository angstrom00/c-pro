// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for(int i = 0; i < (int)(n); i++)
// #define REP(i, n) for(int i = 1; i <= (int)(n); i++)
// const long long INF = 1LL << 60;
// const double PI=3.14159265358979323846;
// int main() 
// {
//     int n;
//     cin >> n;

//     int a[n+10];
//     rep(i,n){
//         cin >> a[i];
//     }
//     sort(a,a+n);

//     int ans=0;
//     rep(i,n){
//         bool exist=false;
//         int low=i,high=n-1;
//         while(low <= high){
//             int mid=(low+high)/2;
//             if(a[mid] == a[i]*2){
//                 exist=true;
//                 break;   
//             }
//             if(a[mid] < a[i]*2){
//                 low=mid+1;
//             }else{
//                 high=mid-1;
//             }
//         }
//         if(!exist){
//             ans++;
//         }
//     }
//     cout << ans << endl;
// }

#include <bits/stdc++.h>
#include<set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
int main() 
{
    int n;
    cin >> n;

    long long a[n+10];
    rep(i,n){
        cin >> a[i];
    }

    set<int> s;
    rep(i,n){
        while(!(a[i]%2)){
            a[i]/=2;
        }
        s.insert(a[i]);
    }
    cout << s.size() << endl;
}