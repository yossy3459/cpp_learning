#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

int main()
{
  cout << "性を入力してください: ";
  string name;
  cin >> name;
  cout << "こんにちは、" << name << "さん!" << endl;
  cout << "中間試験と期末試験の点数を入力してください: ";
  double midterm,final;
  cin >> midterm >> final;
  cout << "宿題の点数を全部に入力してください" 
    "(ただし、最後はend-of-file) : ";
  int count = 0;
  double sum = 0;
  double x;
  
  while ( cin >> x ){
    ++count;
    sum += x;
  }
  
  streamsize prec = cout.precision();
  cout << "あなたの最終成績:" << setprecision(3) << 0.2*midterm + 0.4*final + 0.4*sum / count << setprecision(prec) << endl;

  return 0;
}
