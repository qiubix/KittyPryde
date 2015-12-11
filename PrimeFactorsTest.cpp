#include "gmock/gmock.h"
#include "PrimeFactors.hpp"

using namespace testing;
using std::vector;

class PrimeFactorsTest : public Test {
public:
  vector<int> list(std::initializer_list<int> ints) {
    vector<int> list;
    for (int i : ints)
      list.push_back(i);
    return list;
  }
  PrimeFactors primeFactors;
};

TEST_F(PrimeFactorsTest, testOne) {
  ASSERT_THAT(primeFactors.generate(1), Eq(list({})));
}

TEST_F(PrimeFactorsTest, testTwo) {
  ASSERT_THAT(primeFactors.generate(2), Eq(list({2})));
}
