// Determining Even/Odd Numbers:

#include <iostream>
using namespace std;

int oddeven(int num) {
  if (num % 2 == 0) {
    cout << "The number is even." << endl;
  } else {
    cout << "The number is odd." << endl;
  }
  return 0;
}  

  int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    oddeven(num);
}
