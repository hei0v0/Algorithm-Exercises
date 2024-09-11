#include<iostream>
#include<string>
using namespace std;

int main(){
    int Min=10000,l=0,r=0,point;
    string s,str;
    cin >> s >> str;
    for(int i=0;i<s.length()-str.length();i++){
        if(s[i]==str[0]){
            point=1;
            for(int j=i+1;j<s.length();j++){
                if(s[j]==str[point]){
                    point++;
                    if(point==str.length()){
                        if(j-i<Min) {
                            Min=j-i;
                            l=i;r=j;
                        }
                        break;
                    }
                }
            }
        }
    }
    cout << s.substr(l,r-l+1);
    return 0;
}