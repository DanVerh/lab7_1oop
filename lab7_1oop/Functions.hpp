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

long int minind(vector<int> a) {
        vector <int> v;
        for (int i = 0; i < a.size() + 1; i++) {
            if (a[i] % 2 != 0) {
                v.push_back(a[i]);
            }
        }
    int min = *min_element(v.begin(), v.end());
    long int minind = find(a.begin(), a.end(), min) - a.begin();
    return minind;
}
