//////////////////////////////////////////////////////////////
//
// Your #includes here; make sure you are allowed them ...
//

#include <stdlib.h>
#include <climits>

//////////////////////////////////////////////////////////////
//
// #includes and function declarations; do not remove
//

#ifndef MARMOSET_TESTING

#include <iostream>

using namespace std;

int greatestCommonDenominator(const int a, const int b);
int leastCommonMultiple(const int, const int);
#endif

//////////////////////////////////////////////////////////////
//
// Your code here ...
//

int greatestCommonDenominator(const int a, const int b) {
  int first_number = a;
  int second_number = b;
  int limit = 0;
  int gcd = 1;
  if (a <= 0 || b <= 0) {
    return -1;
  }
  if (first_number > second_number) {
    limit = second_number;
  } else {
    limit = first_number;
  }
  for (int i = limit; i > 0; i--) {
    if ( (first_number % i == 0) && (second_number % i == 0) ) {
      gcd = i;
      break;
    }
  }
  return gcd;
}

int leastCommonMultiple (const int a, const int b) {
  int LCM1, lcm;
  float c;
  if (a <= 0 || b <= 0) {
    return -1;
  }
  LCM1 =(b/greatestCommonDenominator(a,b));
  c = INT_MAX/LCM1;
  if (a > c) {
    return -2;
  }
  else {
  lcm = a*LCM1;
}
    return lcm;

}

//////////////////////////////////////////////////////////////
//
// Test Driver
//
// Do not remove the #ifndef and its associated #endif
// This is required so that when you submit your code,
// this test driver will be ignored by Marmoset
//

#ifndef MARMOSET_TESTING

int main(const int argc, const char* const argv[]) {

  if (argc < 3) {
    cerr << "Error: Usage: " << argv[0] << "<num1> <num2>; exiting" << endl;
    return -1;
  }

  int gcd = greatestCommonDenominator(atoi(argv[1]),atoi(argv[2]));
  if (gcd < 0)
  cerr << "Unable to compute GCD(" << argv[1] << "," << argv[2] << ")" << endl;
  else
  cout << "GCD(" << argv[1] << "," << argv[2] << ") = " << gcd << endl;

  int lcm = leastCommonMultiple(atoi(argv[1]),atoi(argv[2]));
  if (lcm < 0)
  cerr << "Unable to compute LCM(" << argv[1] << "," << argv[2] << ")" << endl;
  else
  cout << "LCM(" << argv[1] << "," << argv[2] << ") = " << lcm << endl;


  return 0;
}

#endif
