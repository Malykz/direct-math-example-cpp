#ifndef PERM_H
#define PERM_H

#include "Times.h"

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Perm : public Times {
public:
    static long int permutation(int n, int r)
    {
        long int permutasi = 1;

        for(int i = 0; i < r; i++)
            permutasi *= (n - 1);

        return permutasi;            
    }

    static vector <vector <int>> perm_gen(vector <int> angka)
    {
        vector <vector <int>> res;
        
        std::sort(angka.begin(), angka.end());
        do {
            res.push_back(angka);
        } while (std::next_permutation(angka.begin(), angka.end()));

        return res;
    }        

    static vector <int> range(
        int n,
        int s = 0
    ) {
        vector <int> result;
        for (int i = s; i <= n; i++) result.push_back(i);
        return result;        
    }

    static int combination(int n, int r)
    {
        if (r == n) return 1;

        int na = factorial(n);
        int ra = factorial(r);
        int rb = factorial(n - r);

        int ab = ra * rb;

        return na / ab;
    }

    static int combination_gen(int n)
    {
        return exponentiation(2, n) - 1;
    }
};

#endif