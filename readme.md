
# Direct Math Example in C++

## Api Method
| Method          | Input Type       | Output Type      | Description                     |
|----------------|----------------|----------------|---------------------------------|
| `fpb`         | `vector<int>`      | `int`          | Calculates the greatest common divisor (GCD) of a vector of integers         |
| `gcd`         | `int, int`      | `int`          | Calculates the greatest common divisor (GCD) of two integers.         |
| `permutation`       | `int, int`      | `int`          | Calculates the permutation of `n` and `r`       |
| `perm_gen`  | `vector<int>`           | `vector <vector <int>>`         | Generates all permutations of an ellements |
| `combination`         | `int, int`      | `int`          | Calculates the combination of `n` and `r`|
| `combination_gen` | `int` | `int` | Generates the number of combinations for a given `n`|
| `factorial` | `int` | `int` | Calculates the factorial of a number|
| `timeli` | `vector<int>` | `int` | Multiplies all elements in a vector.|
| `exponentiation` | `int, int` | `int` | Calculates the exponentiation of a base and an exponent.|
| `generate_primes` | `int` | `list<int>` | Generates a list of prime numbers up to a given number.|
| `is_prime` | `int` | `bool` | Checks if a number is prime.|

## How To Use
### Quick Test
```bash
git clone https://github.com/Malykz/direct-math-example-cpp
cd direct-math-example-cpp
./bld app
```

### Or write it Dirrectly
```c++
#include <iostream>
#include "src/Math.h"

int main() {
    cout << DirectMath::exponentiation(2, 3); // 8
    cout << DirectMath::is_prime(2); // 0
    return 0;
}
```
