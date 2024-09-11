#include<iostream>
using namespace std;

int main(){
    int n;
    int winner=0,loser=0,max=0,min=20000;
    cin >> n;
    while(n--){
        int code, x, y;
        cin >> code >> x >> y;
        int d=x*x+y*y;
        if(d>max){
            loser=code;
            max=d;
        }
        if(d<min){
            winner=code;
            min=d;
        }
    }
    printf("%04d %04d",winner,loser);
    return 0;
}