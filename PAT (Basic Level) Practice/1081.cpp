#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    getchar();
    while (n--) {
        string pwd;
        getline(cin, pwd);
        bool num = false, cha = false, other = false;
        if (pwd.length() < 6)
            cout << "Your password is tai duan le.\n";
        else {
            for (int i = 0; i < pwd.length(); i++) {
                if ((pwd[i] >= '0' && pwd[i] <= '9'))
                    num = true;
                else if ((pwd[i] >= 'a' && pwd[i] <= 'z') || pwd[i] >= 'A' && pwd[i] <= 'Z')
                    cha = true;
                else if(pwd[i]!='.')
                    other = true;
            }
            if (other)
                cout << "Your password is tai luan le.\n";
            else {
                if (num && !cha)
                    cout << "Your password needs zi mu.\n";
                else if (!num && cha)
                    cout << "Your password needs shu zi.\n";
                else
                    cout << "Your password is wan mei.\n";
            }
        }
    }
    return 0;
}