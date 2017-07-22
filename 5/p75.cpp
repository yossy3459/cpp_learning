#include <iostream>
#include <vector>

using std::vertor;


bool fgrade (const Student_info& s){
    return grade(s) < 60;
}

vector<Student_info> extract_fails1(vector<Student_info>& students)
{
    vector<Student_info> pass, fail;
    for ( vector<Stuent_info>::size_type i = 0 ; i!= students.size() ; ++i)
        if ( fgrade(students[i]) )
            fail.push_back(students[i]);
        else
            pass.push_back(students[i]);
    students = pass;
    return fail;
}

vector<Student_info> extract_fails2(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0;
    while ( i != students.size() ){
        if ( fgrade(students[i]) )
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        else
            ++i;
    }
    return fail;
}
