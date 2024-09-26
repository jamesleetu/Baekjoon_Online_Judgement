//
//  1181.cpp
//  BOJ test
//
//  Created by Lee Tae Ung on 2023/07/18.
//

#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

int main(void) {
    int i;
    int n;
    string str[20000];

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> str[i];
    }

    sort(str, str + n, compare);

    for (i = 0; i < n; i++) {
        if (str[i] == str[i - 1]) {
            continue;
        }
        cout << str[i] << "\n";
    }

    return 0;
}