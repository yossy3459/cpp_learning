#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "Student_info.h"

double grade(const Student_info&);
double grade (double, double, double);
double grade(double, double, const std::vector<double>&);

#endif
