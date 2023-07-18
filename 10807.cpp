//
//  10807.cpp
//  BOJ test
//
//  Created by Lee Tae Ung on 2023/07/18.
//

#include <iostream>

using namespace std;

int main (void) {
    int n, arr[100], v, counter = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> v;

    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            counter++;
        }
    }

    cout << counter;

    return 0;
}