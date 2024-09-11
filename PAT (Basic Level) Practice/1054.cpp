#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int n, num = 0;
    double sum = 0, x, p = 0.1;
    bool flag = true, pflag = false;
    scanf("%d", &n);
    char str[256];
    while (n--) {
        scanf("%s", str);
        flag = true;
        pflag = false;
        x = 0;
        p = 0.1;
        for (int i = 0; i < strlen(str); i++) {
            if (i == 0 && str[i] == '-') {
                continue;
            }
            if (str[i] == '.' && !pflag) {
                pflag = true;
            } else if (str[i] < '0' || str[i] > '9') {
                flag = false;
                break;
            } else if (pflag) {
                x += (str[i] - '0') * p;
                p /= 10;
                if (p <= 0.0001) {
                    flag = false;
                    break;
                }
            } else {
                x = x * 10 + (str[i] - '0');
            }
            if (x > 1000) {
                flag = false;
                break;
            }
        }
        if (flag) {
            if (str[0] == '-')
                sum -= x;
            else
                sum += x;
            num++;
        } else {
            printf("ERROR: %s is not a legal number\n", str);
        }
    }
    if (num == 0) {
        printf("The average of 0 numbers is Undefined");
    } else if (num == 1) {
        printf("The average of 1 number is %.2lf", sum);
    } else {
        printf("The average of %d numbers is %.2lf", num, sum / num);
    }
    return 0;
}