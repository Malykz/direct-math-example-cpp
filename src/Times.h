#ifndef TIMES_LIST_H
#define TIMES_LIST_H

#include <iostream>
#include <vector>

using namespace std;

class Times {
public:
    static int permutation(int n, int r)
    {
        if (r == n) return 1;

        int na = factorial(n);
        int ra = factorial(n - r);

        return na / ra;
    }

    static int factorial(int n)
    {
        vector <int> res;
        for (auto s = 1; s <= n; s++) {
            res.push_back(s);
        }

        return timeli(res);
    }        

    static int timeli(vector <int> dt)
    {
        int b = dt[0];

        for(size_t c = 1; c < dt.size(); c++)
        {
            b *= dt[c];
        }
    
        return b;        
    }

    static int exponentiation(int basis, int komponen)
    {
        int b = basis;

        for(int a = 1; a < komponen; a++)
        {
            basis *= b;
        }

        return basis;
    }
};

#endif