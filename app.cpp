#include <iostream>
#include "src/Math.h"

int main() {
    for (vector <int> a : DirectMath::perm_gen({1, 2, 3}))
    {
        for (int b : a) cout << b;
        cout << endl;
    }
    return 0;
}
