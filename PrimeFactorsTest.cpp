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
};

TEST_F(PrimeFactorsTest, testOne) {
  ASSERT_THAT(PrimeFactors::generate(1), Eq(list({})));
}

TEST_F(PrimeFactorsTest, testTwo) {
  ASSERT_THAT(PrimeFactors::generate(2), Eq(list({2})));
}

TEST_F(PrimeFactorsTest, testThree) {
  ASSERT_THAT(PrimeFactors::generate(3), Eq(list({3})));
}

TEST_F(PrimeFactorsTest, testFour) {
  ASSERT_THAT(PrimeFactors::generate(4), Eq(list({2,2})));
}

TEST_F(PrimeFactorsTest, testSix) {
  ASSERT_THAT(PrimeFactors::generate(6), Eq(list({2,3})));
}

TEST_F(PrimeFactorsTest, testEight) {
  ASSERT_THAT(PrimeFactors::generate(8), Eq(list({2,2,2})));
}
