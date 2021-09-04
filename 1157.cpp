//
//  1157.cpp
//  BOJ test
//
//  Created by Lee Tae Ung on 2021/09/05.
//

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int arr[26] = {0,};
    char qmark = '?';
    int zero = 0;
    int var;
    
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] < 91) {
            arr[str[i] - 65]++;
        }
        else {
            arr[str[i] - 97]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (zero < arr[i]) {
            zero = arr[i];
            var = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (var != i) {
            if (zero == arr[i]) {
                cout << qmark << endl;
                
                return 0;
            }
        }
    }
    cout << char(var + 65) << endl;
    
    return 0;
}
