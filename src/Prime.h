#ifndef IS_PRIME_H
#define IS_PRIME_H

#include <iostream>
#include <list>
using namespace std;

class Prime {
    public: 
        static list<int> generate_primes(int na) {
            int ind = 0;
            list<int> raw;
    
            while(ind <= na) {
                if(is_prime(ind)) {
                    raw.push_back(ind);
                }
                ind += 1;
            }
    
            return raw;
        };
        
        static bool is_prime(int n) {
            if(n % 2 == 0) return false;
    
            int ind = 2;
            while(ind <= n) {
                if(n % ind == 0) {
                    return false;
                }
                ind += 2;
            };
    
            return true;
        }
        
    };

#endif    