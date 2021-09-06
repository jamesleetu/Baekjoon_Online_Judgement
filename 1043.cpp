//
//  1043.cpp
//  BOJ test
//
//  Created by Lee Tae Ung on 2021/09/06.
//

#include <iostream>

using namespace std;

int main(void) {

    int N = 0, M = 0, count = 0;
    int num = 0, temp = 0;
    int noGura[49] = { 0 };
    int val[49] = { 0 };
    int arr[49][49] = { 0 };
    int arr_index[49] = { 0 };
    int moojin;
    
    cin >> N >> M;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> temp;
        noGura[temp] = 1;
    }

    for (int i = 0; i < M; i++) {
        cin >> num;
        arr_index[i] = num;
        
        for (int j = 0; j < num; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < M; i++) {

        for (int j = 0; j < arr_index[i]; j++) {
            
            int v = arr[i][j];

            if (noGura[v] == 1) {
                val[i] = 1;
                moojin = 1;
                
                for (int k = 0; k < arr_index[i]; k++) {
                    if (noGura[arr[i][k]] == 0 && j != k) {
                        moojin = 0;
                        noGura[arr[i][k]] = 1;
                    }
                }
                if (moojin == 0) {
                    i = -1;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < M; i++) {
        if (val[i] == 0) count++;
    }
    
    cout << count << endl;
}
