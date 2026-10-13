#include <iostream>

// Lab 7 — Betsy Caudel
// CIS 5 Week 07 · Two arrays

using std::cout;
using std::endl;

int main() {

  const int N = 5;
  int quiz[N] = {75, 90, 46, 92, 62};
  int sum1 = 0;
  int hi1 = quiz[0];

  int lab [N] = {48, 17, 94, 89, 95};
  int sum2 = 0;
  int hi2 = lab[0];

  // Label for list.
  cout << "Quiz" << endl;

  // Prints index and element for each item in quiz list.
  for (int i = 0; i < N; ++i) {
    cout << "[" << i << "] " << quiz[i] << endl;
  }
  
  // Adds each element in the list.
  for (int i = 0; i < N; ++i) {
    sum1 += quiz[i];
    // Checks if the current element is higher than the previous.
    if (quiz[i] > hi1) {
      hi1 = quiz[i];
    } 
  }

  cout << "Sum: " << sum1 << endl;
  cout << "High: " << hi1 << endl;

  // Label for list
  cout << "Lab" << endl;

  // Prints index and element of each item in lab list.
  for (int l = 0; l < N; ++l) {
    cout << "[" << l << "] " << lab[l] << endl;
  }

  // Adds each element in the list.
   for (int l = 0; l < N; ++l) {
    sum2 += lab[l];
    // Checks if the current element is higher than the previous.
    if (lab[l] > hi2) {
      hi2 = lab[l];
    } 
   }
  
  cout << "Sum: " << sum2 << endl;
  cout << "High: " << hi2 << endl;

  return 0;
}
