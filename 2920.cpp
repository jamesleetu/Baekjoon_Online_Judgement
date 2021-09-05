//
//  2920.cpp
//  BOJ test
//
//  Created by Lee Tae Ung on 2021/09/05.
//

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int start;
    int rest;
    int state = 0;
    
    cin >> start;
    
    if (start == 1) {
        for (int i = 2; i <= 8; i++) {
            cin >> rest;
            state = 1;
            if (rest != i) {
                state = 3;
                break;
            }
        }
    }
    else if (start == 8) {
        for (int i = 7; i > 1; i--) {
            cin >> rest;
            state = 2;
            if (rest != i) {
                state = 3;
                break;
            }
        }
    }
    else {
        state = 3;
    }
    
    if (state == 1) {
        cout << "ascending" << endl;
    }
    else if (state == 2) {
        cout << "descending" << endl;
    }
    else if (state == 3) {
        cout << "mixed" << endl;
    }
    
    return 0;
}
