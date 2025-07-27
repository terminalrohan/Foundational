#include <iostream>
using namespace std;

bool isPrime(int num) {
  if (num <= 1)
    return false;

  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0)
      return false; // Not prime
  }
  return true; // Prime
}

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  if (isPrime(number))
    cout << "The number is prime." << endl;
  else
    cout << "The number is not prime." << endl;

  return 0;
}
