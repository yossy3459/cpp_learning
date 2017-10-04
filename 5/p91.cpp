#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::max;

string::size_type width(const vector<string>& v)
{
  string::size_type maxlen = 0;
  for(vector<string>::size_type i = 0; i != v.size(); ++i)
    maxlen = max(maxlen, v[i].size());
    return maxlen;
}

vector<string> frame(const vector<string>& v)
{
  vector<string> ret;
  string::size_type maxlen = width(v);
  string border(maxlen + 4, '*');

  // フレームの一番上を出力
  ret.push_back(border);

  // 内部の行を左右に*と空白を入れて出力
  for (vector<string>::size_type i = 0; i < v.size(); ++i) {
    ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
  }
  // フレームの一番下を出力
  ret.push_back(border);

  return ret;
}

vector<string> vcat(const vector<string>& top, const vector<string>& bottom)
{
  // 上の絵をコピー
  vector<string> ret = top;

  // 下の絵を全部コピー
  ret.insert(ret.end(), bottom.begin(), bottom.end());

  return ret;
}

int main(int argc, char const *argv[])
{
  // initialize
  vector<string> p,out;
  p.push_back("This is an");
  p.push_back("example");
  p.push_back("to");
  p.push_back("illustrate");
  p.push_back("framing");

  // exec functions
  out = frame(p);
  out = vcat(out, out);

  // out
  for (vector<string>::size_type i = 0; i != out.size(); ++i)
    cout << out[i] << endl;

  return 0;
}
