#include <iostream>
using namespace std;

void armstrng(int num){
  int originalNum, remainder, result = 0;
  originalNum = num;
  while (originalNum != 0) {
    remainder = originalNum % 10;
    result += remainder * remainder * remainder;
    originalNum /= 10;
  }
  if (result == num){
    cout << num << " is an Armstrong number." << endl;
  
  }else{
    cout << num << " is not an Armstrong number." << endl;
  }
}

  int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    armstrng(num);
}
