#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
struct card{
                char letter,value;
            };

void bubbleSort(struct card A[],int N){
    for(int i=0;i<N;i++){
        for(int j=N-1;j>i;j--){
            if(A[j].value < A[j-1].value){
                swap(A[j],A[j-1]);
            }
        }
    }
}
void selectionSort(struct card A[],int N){
    for(int i=0;i<N;i++){
        int minj=i;
        for(int j=i;j<N;j++){
            if(A[j].value < A[minj].value){
                minj=j;
            }
        }
        swap(A[minj],A[i]);
    }
}
void output(struct card A[],int N){
    for(int i=0;i<N;i++){
        if(i!=0)
        cout << " ";

        cout << A[i].letter << A[i].value;
    }
    cout << endl;
}
bool isstable(struct card C1[],struct card C2[], int N){
    for(int i=0;i<N;i++){
        if(C1[i].letter != C2[i].letter)
            return false;
    }
    return true;

}
int main() 
{
    int n;
    cin >> n;
    struct card C1[n+10],C2[n+10];
    rep(i,n){
        cin >> C1[i].letter >> C1[i].value;
        C2[i]=C1[i];
    }

    bubbleSort(C1,n);
    selectionSort(C2,n);

    output(C1,n);
        cout << "Stable" << endl;
    output(C2,n);
    if(isstable(C1,C2,n))
        cout << "Stable" << endl;
    else
    {
        cout << "Not stable" << endl;
    }

}