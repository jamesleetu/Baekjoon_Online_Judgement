//
//  25304.cpp
//  BOJ test
//
//  Created by Lee Tae Ung on 2023/07/17.
//

#include <iostream>

using namespace std;

int main(void) {
    int total, loop, a, b , c, d = 0;

    cin >> total;
    cin >> loop;

    for (int i = 0; i < loop; i++) {
        cin >> a >> b;

        c = (a * b);
        d = d + c;
        a = 0;
        b = 0;
    }

    if (d == total) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}