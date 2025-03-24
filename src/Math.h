#ifndef DIRECT_MATH_H
#define DIRECT_MATH_H

#include "Prime.h"
#include "Fpb.h"
#include "Times.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class DirectMath : public Prime, public FPBCalculator, public Times {
public :
    DirectMath() {}
};

#endif