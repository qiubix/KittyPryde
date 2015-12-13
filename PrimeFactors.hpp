#ifndef PRIME_FACTORS_HPP
#define PRIME_FACTORS_HPP

using std::vector;

class PrimeFactors {
public:
  static vector<int> generate(int n) {
    vector<int> primes;

    for (int candidate = 2; n > 1; ++candidate) {
      for (; n % candidate == 0; n /= candidate) {
        primes.push_back(candidate);
      }
    }
    return primes;
  }
};

#endif //PRIME_FACTORS_HPP