//////////////////////////////////////////////////////////////
//
// Your #includes here; make sure you are allowed them ...
//

#include <stdlib.h>

//////////////////////////////////////////////////////////////
//
// #includes and function declarations; do not remove
//

#ifndef MARMOSET_TESTING

#include <iostream>

using namespace std;

float NthRoot(const float S, const int N, const float precision);
#endif

//////////////////////////////////////////////////////////////
//
// Your code here ...
//
// Return std::numeric_limits<float>::quiet_NaN() (comes from
// <limits>) if cannot compute the Nth root of S with
// precision.
//
/*MAPPINGS

*/

float NthRoot(const float S, const int N, const float precision) {
  /*
  S = atof(argv[1]);
  N = atof(argv[2]);
  precision = atof(argv[3]);
  */
  float x_curr;
  float comparison = 1.0;
  float xmn1 = 1.0;
  float result = 1.0;
  float x_prev = 1000;
  if (N < 2) {
      cerr << "Error: Invalid input." << endl;
      return -1;
  }

  while (comparison > precision) {
      result = 1.0;
      xmn1 = 1.0;
      for (int i = 1; i < N; i++) {
          xmn1 *= x_prev;
      }
      x_curr = ((N - 1)/N)*x_prev + S/(N*xmn1);

      for (int i = 1; i <= N; i++) {
          result *= x_curr;
      }
      comparison = (S - result)/S;
      if (comparison < 0) {    //0.0001 2.5678
          comparison = -1*comparison;
      }
      x_prev = x_curr;
  }
  //set the precision you set as the new precision that you can modify
  float new_precision = precision;
  //purpose of decimals is to transfer it to an integer number of decimal places, so for example, if its 0.0001, then
  //its 4, but for marmoset is 4 - 1, so three
  int decimals = 0;
  while ((int)new_precision < 1) {
      new_precision *= 10; //multiply it by 10 each and every time until it reaches the number of decimals so,
      // e.g keepo on incrementing until new_precision == 1, and what number of "decimals" it does it at, keep it
      //at that value and break out of the while loop
      decimals ++;
  }
  float multFactor = 1;
  for (int y = 1; y < decimals - 1; y++) { //decimals is already stored in this for loop from before
      multFactor *= 10; //multiply it by the power of 10
  }
  int  xCurrentInteger = x_curr * multFactor; //multiply a float with a large number of decimal places by 10^(decimal - 1)
  float xCurrentFloat = xCurrentInteger/multFactor; //cast it to a float by dividing it by the multFactor (which is
  //10^decimals - 1

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

#define isNaN(X) (X != X)  // NaN is the only float that is not equal to itself

int main(const int argc, const char* const argv[]) {

  if (argc < 4) {
    cerr << "Error: Usage: " << argv[0] << " <number> <root> <precision>; exiting" << endl;
    return -1;
  }

  float root = NthRoot(atof(argv[1]),atoi(argv[2]),atof(argv[3]));
  if (isNaN(root))
    cerr << "Unable to compute " << argv[2] << "th root of " << argv[1] << " with precision " << argv[3] << endl;
  else
    cout << "Root(" << argv[1] << "," << argv[2] << ") = " << root << endl
	 << "(with precision " << argv[3] << ")" << endl;

  return 0;
}

#endif
