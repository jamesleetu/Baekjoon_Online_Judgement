//
//  2675.cpp
//  BOJ
//
//  Created by Lee Tae Ung on 2021/09/05.
//

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int loop;
    
    cin >> loop;
    
    for (int i = 0; i < loop; i++) {
        int num;
        string s;
        
        cin >> num;
        cin >> s;
        
        for (int j = 0; j < s.length(); j++) {
            for (int k = 0; k < num; k++) {
                cout << s[j];
            }
        }
        cout << endl;
    }
    return 0;
}
