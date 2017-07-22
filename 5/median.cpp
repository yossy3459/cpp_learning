#include <algorithm>
#include <stdexcept>
#include <vector>

using std::domain_error;
using std::sort;
using std::vector;

double median(vector<double> vec)
{
  typedef vector<double>::size_type vec_sz;
  vec_sz size = vec.size();
  if ( size == 0 )
    throw domain_error("空のvectorでmedianを探した");
  sort(vec.begin(),vec.end());
  vec_sz mid = size/2;
  return size % 2 == 0 ? (vec[mid] + vec[mid-1])/2 : vec[mid];
}
