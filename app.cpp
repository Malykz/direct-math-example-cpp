#include <iostream>
#include "src/Math.h"
#include <map>
#include <optional>
#include <variant>

using namespace std;

int timeli(vector <int> ls)
{
    int ba = ls[0];
    for(size_t a = 1; a < ls.size(); a++) ba *= ls[a];
    return ba;
}

map <int, vector <int>> super(
    vector <int> maven,
    size_t len,
    map <int, vector <int>> result = {}
) {
    vector <int> rem;
    map <int, int> index;
    auto asd = 0;

    for (int i : maven) index[maven[i]] = i;
    for (size_t asd = 0; asd < maven.size(); asd++)
    {
        
        rem = maven;
        rem.erase(rem.begin() + asd);
        result[timeli(rem)] = rem;

        if (rem.size() > len) {
            result = super(rem, len, result);
        }
    }

    return result;
    
}

optional <vector <int>> brute(int target, vector <int> maven, size_t len)
{
    map <int, vector <int>> spr = super(maven, len);
    if(spr[target].size() != len) return nullopt;
    return spr[target];
}

int main() {
    vector <int> mvn = {1, 2, 3, 4, 5};
    auto asd = brute(6, mvn, 2);
    if (asd) for (int a : asd.value()) cout << a;
    
    return 0;
}
