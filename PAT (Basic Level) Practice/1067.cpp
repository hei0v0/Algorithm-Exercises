#include <iostream>
#include <string>
using namespace std;

int main() {
    string pwd, input;
    int n, num = 0;
    cin >> pwd >> n;
    getchar();
    while (getline(cin, input)) {
        if (input[0] == '#' && input.length() == 1)
            break;
        if (input == pwd) {
            cout << "Welcome in\n";
            break;
        } else {
            cout << "Wrong password: " << input << "\n";
            num++;
            if (num == n) {
                cout << "Account locked\n";
                break;
            }
        }
    }
    return 0;
}