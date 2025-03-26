#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "../src/Math.h"
#include <map>

using namespace std;

map <int, vector <int>> fien(
    vector <int> angka,
    map <int, vector <int>> result = {}
) {
    vector <int> rem;
    for (int i : angka)
    {
        rem = angka;
        rem.erase(remove(rem.begin(), rem.end(), i), rem.end());
        result[DirectMath::timeli(rem)] = rem;

        if (rem.size() > 2) {
            result = fien(rem, result);
        }
    }

    return result;
}   

vector <int> to_brute(int target, vector <int> sek)
{
    map <int, vector <int>> super = fien(sek);
    return super[target];
}

int main (int argc, char* argv[]) {
    int val = std::stoi(argv[1]);
    for (int super : to_brute(val, {3, 5, 2, 67, 42})) cout << super;

    return 0;
}
