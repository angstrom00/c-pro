#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
#define LEN 100005

struct pp{
    char name[100];
    int t;
};
struct pp Q[LEN];
int head, tail, n;

void enqueue(struct pp x){
       Q[tail] = x;
       tail = (tail + 1)%LEN;
   }

struct pp dequeue(){
    struct pp x = Q[head];
    head = (head+1)%LEN;
    return x;
}
int main() 
{
   cin >> n;
   int q,t_sum=0;
   cin >> q;

    struct pp A[n+10];

    for(int i=0;i<n;i++){
        cin >> A[i].name >> A[i].t;
    }
    for(int i=0;i<n;i++){
        enqueue(A[i]);
    }
while(head != tail){
    if(Q[head].t > q){
        Q[head].t -= q;
        enqueue(dequeue());
        t_sum += q;
    }
    else
    {
        t_sum += Q[head].t;
        dequeue();
        cout << Q[head].name << " " << t_sum << endl;
    }
    
}

}