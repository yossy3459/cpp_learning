#include "Student_info.h"

using std::istream;
using std::vector;

istream& read(istream& is,Student_info& s)
{
    // 学生の名前、中間試験の成績、期末試験の成績を読み込む
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);
    return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
    if (in){
        hw.clear();
        double x;
        while ( in >> x )
            hw.push_back(x);
        in.clear();
    }
    return in;
}

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}
