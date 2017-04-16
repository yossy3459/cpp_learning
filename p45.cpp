#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::sort;
using std::vector;


int main()
{
  cout << "姓を入力してください: ";
  string name;
  cin >> name;
  cout << "こんにちは、" << name << "さん!" << endl;
  cout << "中間試験と期末試験の点数を入力してください: ";
  double midterm,final;
  cin >> midterm >> final;

  cout << "宿題の点数を全部に入力してください"
    "(ただし、最後はend-of-file) : ";
  vector<double> homework;
  double x;

  while ( cin >> x ){
    homework.push_back(x);
  }

  typedef vector<double>::size_type vec_sz;
  vec_sz size = homework.size();

  if ( size == 0 ){
      cout << endl << "あなたの宿題の点数が必要です。"
                      "やり直してください。" << endl;
      return 1;
  }

  sort(homework.begin(),homework.end());

  vec_sz mid = size/2;

  double median;

  median = size%2 == 0 ? (homework[mid]+homework[mid-1])/2 : homework[mid];

  streamsize prec = cout.precision();
  cout << "あなたの最終成績:" << setprecision(3) << 0.2*midterm + 0.4*final + 0.4*median << setprecision(prec) << endl;
  cout << midterm << " " << final << " " << median << endl;
  return 0;
}
