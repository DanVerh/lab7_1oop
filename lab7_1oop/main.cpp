#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <numeric>
#include "Functions.hpp"

using namespace std;

int main() {
    
    srand(unsigned(time(0)));
    int n;
    cout << "n = ? "; cin >> n;
    vector<int> v(n);
    generate(v.begin(), v.end(), randnum);
    print(v);
    cout << minind(v) << endl;
    
    return 0;
}
