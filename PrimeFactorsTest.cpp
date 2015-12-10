#include "gmock/gmock.h"
#include "PrimeFactors.hpp"

using namespace testing;
using std::vector;

class PrimeFactorsTest : public Test {
public:
  vector<int> list() {
    return vector<int> {};
  }
  PrimeFactors primeFactors;
};

TEST_F(PrimeFactorsTest, testOne) {
  ASSERT_THAT(primeFactors.generate(1), Eq(list()));
}
