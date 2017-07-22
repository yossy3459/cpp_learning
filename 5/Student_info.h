#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>

struct Student_info{
    std::string name;
    double midterm,final;
    std::vector<double> homework;

};

std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
bool compare(const Student_info&, const Student_info&);

#endif
