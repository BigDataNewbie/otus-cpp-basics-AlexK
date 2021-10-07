#include <iostream>
//#include <string>
#include <cmath>
using namespace std;

int find_color(int k2, int i2) {
    if(k2 == 1)
    {
        return 0;
    }
    int half = exp2(k2-2);
    if(i2 > half)
         return (find_color(k2 - 1, i2 - half) == 9)? 0:(find_color(k2 - 1, i2 - half) + 1);
    else
         return find_color(k2 - 1, half - i2 + 1);
}


int main() {
    int k = 0, i = 0;
    cout << "Please enter k: " << endl;
    cin >> k;
    cout << "Please enter i: " << endl;
    cin >> i;
    int result1 = find_color(k, i);
    cout << "Recursive color is " << result1 << endl;
    return 0;
}
