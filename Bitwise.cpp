#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

using namespace std;

int main (const int argc, const char* const argv[]) {

  int N = atoi(argv[1]);
  int S = atoi(argv[2]);

  int T = pow(2.0,S);
  int bitshift_left = N << S;
  int bitshift_right = N >> S;
  int mathOp_left = N*T;
  int mathOp_right = N/T;


  cout <<"N: "<< N <<endl;
  cout<<"S: "<< S <<endl;
  cout<<"Left-shift of N by S bits is: " << bitshift_left <<endl;
  cout<<"Right-shift of N by S bits is: " << bitshift_right <<endl;
  cout<<"The equivalent math operation of left-shift N by S bits is: N*pow(2,S)"<<endl;
  cout<<"And the result of that operation is: "<< mathOp_left <<endl;
  cout<<"The equivalent math operation of right-shift N by S bits is: N/(pow(2,S))"<<endl;
  cout<<"And the result of that is: "<<mathOp_right<<endl;



  return 0;

}
