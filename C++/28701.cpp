//
// Created by 이태웅 on 2023/08/14.
//

#include <iostream>

using namespace std;

int main(void) {
    int i, n;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    cin >> n;

    for (i = 1; i <= n; i++) {
        sum1 += i;
        sum2 += i;
        sum3 += (i * i * i);
    }

    sum2 = sum2 * sum2;

    cout << sum1 << "\n";
    cout << sum2 << "\n";
    cout << sum3;

    return 0;
}