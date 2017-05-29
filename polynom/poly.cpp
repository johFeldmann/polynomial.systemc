// Copyright (C) 2014 University of Kaiserslautern
// Microelectronic System Design Research Group
//
// This file is part of the FPGAHS Course
// de.uni-kl.eit.course.fpgahs
//
// Christian De Schryver <schryver@eit.uni-kl.de>
// Markus Steffes <steffesm@rhrk.uni-kl.de>

#include <iostream>
#include "poly.h"

// TODO: implement your function(s) for your Module here

void poly::Poly_Calc()
{
    double temp = 0.0;
    double X_temp = 1.0;
    for(int i = 0; i <= poly_degree; i++)
    {
       temp += poly_coeff[i] * X_temp;
       X_temp *= X;
    }
    Y = temp;
}
