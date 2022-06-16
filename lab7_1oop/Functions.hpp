#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <numeric>
using namespace std;

int randnum() {
    return (std::rand() % 100);
}

void print(vector<int> a) {
    for (int i : a)
        cout << i << " ";
    cout << endl;
}

int minind(vector<int> &v) {
    int index = 0;
    int n = v[0];
        for (int i = 1; i < v.size(); i++) {
            if (v[i] < n && v[i]%2!=0) {
                n = v[i];
                index = i;
            }
        }
    return index;
}
