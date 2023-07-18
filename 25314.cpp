//
//  25314.cpp
//  BOJ test
//
//  Created by Lee Tae Ung on 2023/07/18.
//

#include <iostream>

using namespace std;

int main(void) {
    int n, checker = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        if (checker % 4 == 0) {
            cout << "long ";
        }

        checker += 1;
    }

    cout << "int";

    return 0;
}