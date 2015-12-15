#ifndef PRIME_FACTORS_HPP
#define PRIME_FACTORS_HPP

using std::vector;

class PrimeFactors {
public:
  vector<int> generate(int n) {
    vector<int> primes;
    if ( n > 1 ) {
      primes.push_back(n);
    }
    return primes;
  }
};

#endif //PRIME_FACTORS_HPP