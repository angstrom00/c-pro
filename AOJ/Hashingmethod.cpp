#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, n) for(int i = 1; i <= (int)(n); i++)
const long long INF = 1LL << 60;
const double PI=3.14159265358979323846;
#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int getChar(char ch){
        if (ch == 'A') return 1;
        else if(ch == 'G') return 2;
        else if (ch == 'C') return 3;
        else if(ch == 'T') return 4;
        else return 0;
}

long long getkey(char str[]){
    long long p=1,sum=0, i;
       for(i=0; i<strlen(str);i++){
           sum += p*getChar(str[i]);
            p *=5;
        }
    return sum;
}
    
int h1(int key){ return key % M;}
int h2(int key){return 1 + ( key % (M-1));}

int find(char str[]){
    long long key, i,h;
    key = getkey(str);
    for(i=0;;i++){
        h= (h1(key) + i*h2(key))%M;
        if(strcmp(H[h],str) == 0) return 1;
        else if(strlen(H[h]) == 0)return 0;
    }
    return 0;
}
int insert(char str[]){
    long long key, i, h;
    key = getkey(str);
        for(i=0;;i++){
            h = (h1(key) + i*h2(key))%M;
            if(strcmp(H[h],str) == 0)return 1;
            else if(strlen(H[h]) == 0){
                strcpy(H[h],str);
                return 0;
            }
        }
    return 0;
}

int main() 
{
    int n;
    cin >> n;

    char com[9], str[L];
    rep(i,n){
        cin >> com >> str;
        if(com[0] == 'i'){
            insert(str);
        }
        else{
            if(find(str))cout << "yes" << endl;
            else
            {
               cout << "no" << endl;
            }
            
        }
    }

    
}