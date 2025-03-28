#include <iostream>
#include <vector>
#include <algorithm>
#include <optional>
#include "../src/Math.h"
#include <map>

using namespace std;

map <int, vector <int>> fien(
    vector <int> angka,
    size_t len,
    map <int, vector <int>> result = {}
) {
    vector <int> rem;
    for (size_t i = 0; i < angka.size(); i++)
    {
        rem = angka;
        rem.erase(rem.begin() + i);
        result[DirectMath::timeli(rem)] = rem;

        if (rem.size() > len) {
            result = fien(rem, len, result);
        }
    }
    return result;
}   

optional <vector <int>> to_brute(int target, vector <int> sek, size_t len)
{
    map <int, vector <int>> super = fien(sek, len);
    if(super[target].size() != len) return nullopt;
    return super[target];
}

int main () {
    auto bsd = to_brute(12, {6, 2, 3, 5}, 2);
    return 0;
}
