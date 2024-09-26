//
//  10810.cpp
//  BOJ test
//
//  Created by Lee Tae Ung on 2023/07/18.
//

#include <iostream>

using namespace std;

int main (void) {
    int n, m;
    int arr[101] = { 0, };
    int a, b, c;

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        for(int k = a; k <= b; k++) {
            arr[k] = c;
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}