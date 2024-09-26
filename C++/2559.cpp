//
// Created by 이태웅 on 2023/11/28.
//

#include <iostream>

using namespace std;

int n, k;
int sum[100002];
int num;
int maximum = -10000001;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        sum[i] = sum[i - 1] + num;
    }
    for (int i = k; i <= n; i++) {
        maximum = max(maximum, sum[i] - sum[i - k]);
    }
    cout << maximum;
}