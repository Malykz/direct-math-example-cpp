#include <iostream>
#include "src/Math.h"
#include <map>
using namespace std;

vector <int> super(int target, vector <int> maven)
{
    map <int, int> super;
    vector <int> result;

    int idx = 0;
    for ( int s : maven)
    {
        super[s] = idx;
        idx += 1;
    } 
    
    for ( int a : maven ) for (int b : maven) if (a * b == target) result = {super[b], super[a]};

    return result;
}

int main() {
    for (int a : super(15, {1, 2, 5, 3}))
    {
        cout << a;
    }
    return 0;
}
