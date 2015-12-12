#ifndef PRIME_FACTORS_HPP
#define PRIME_FACTORS_HPP

using std::vector;

class PrimeFactors {
public:
  static vector<int> generate(int n) {
    vector<int> primes;
    if ( n > 1 ) {
      int candidate = 2;
      while ( n % candidate == 0) {
        primes.push_back(candidate);
        n /= candidate;
      }
    }
    if ( n > 1) {
      primes.push_back(n);
    }
    return primes;
  }
};

#endif //PRIME_FACTORS_HPP