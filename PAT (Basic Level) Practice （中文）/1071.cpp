#include<iostream>
using namespace std;

int T,K,n1,n2,b,t;

int main(){
    cin >> T >> K;
    while(K--){
        cin >> n1 >> b >> t >> n2;
        if(t>T){
            printf("Not enough tokens.  Total = %d.\n",T);
        } else if((b==0&&n1>n2)||(b==1&&n1<n2)) {
            T+=t;
            printf("Win %d!  Total = %d.\n",t,T);
        } else {
            T-=t;
            printf("Lose %d.  Total = %d.\n",t,T);
        }
        if(T<=0) {
            printf("Game Over.\n");
            break;
        }
    }
    return 0;
}