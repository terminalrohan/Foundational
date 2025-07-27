#include <iostream>
using namespace std;

//Generating the Fibonacci Series
void fibonacci(int num){
  int n1 = 1, n2 = 1, nextTerm;
  cout << "Fibonacci Series: " << n1 << ", " << n2 << ", ";
  for (int i = 3; i <= num; ++i){
    nextTerm = n1 + n2;
    cout << nextTerm << ", ";
    n1 = n2;
    n2 = nextTerm;
    
    
  }
}


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
fibonacci( num);
}
