//
//  10809.cpp
//  BOJ
//
//  Created by Lee Tae Ung on 2021/09/04.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string alpha = "abcdefghijklmnopqrstuvwxyz";

    cin >> s;

    for (int i = 0; i < alpha.length(); i++)
    {
        cout << (int)s.find(alpha[i]) << " ";
    }
    
    return 0;
}
