#ifndef PRIME_FACTORS_HPP
#define PRIME_FACTORS_HPP

using std::vector;

class PrimeFactors {
public:
  static vector<int> generate(int n) {
    vector<int> primes;
    int candidate = 2;
    while ( n > 1 ) {
      for (; n % candidate == 0; n /= candidate) {
        primes.push_back(candidate);
      }
      candidate++;
    }
    return primes;
  }
};

#endif //PRIME_FACTORS_HPP