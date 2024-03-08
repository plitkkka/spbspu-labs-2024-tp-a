#ifndef DATA_STRUCT_H
#define DATA_STRUCT_H

#include <complex>
#include <string>
#include <istream>
#include <ostream>

namespace kravchenko
{
  namespace dataStruct
  {
    struct DataStruct
    {
      long long key1;
      std::complex< double > key2;
      std::string key3;
			bool operator<(const DataStruct& other);
    };
    std::istream& operator>>(std::istream& in, DataStruct& value);
    std::ostream& operator<<(std::ostream& out, const DataStruct& value);
  }
}

#endif