#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

using namespace std;

int main(const int argc, const char* const argv[]) {

int x;
unsigned int y;
int ysigFig;
  x = atoi(argv[1]);
  y = x;
  // unsigned case
  ysigFig = (y >> 31);
  // signed case
  int signx = (x >> 31) & 1;
    cout<<"The value of x is "<< x <<endl;
    cout<<"The value of y is "<< y <<endl;
    cout<<"The most significant bit of x is "<< signx <<endl;
    cout<<"The most significant bit of y is "<< ysigFig <<endl;
//------------------------SIZE_OF--------------------------------
cout<<"Type: \"short int\""<< " Size: "<< sizeof(short int) <<" bytes" << " Minimum value : "<< SHRT_MIN << " Maximum value: " << SHRT_MAX <<endl;
cout<<"Type: \"signed char\""<< " Size: "<< sizeof(signed char) <<" bytes" << " Minimum value : "<< SCHAR_MIN << " Maximum value: " << SCHAR_MAX <<endl;
cout<<"Type: \"int\""<< " Size: "<< sizeof(int) <<" bytes" << " Minimum value : "<< INT_MIN << " Maximum value: " << INT_MAX <<endl;
cout<<"Type: \"long int\""<< " Size: "<< sizeof(long int) <<" bytes" << " Minimum value : "<< LONG_MIN << " Maximum value: " << LONG_MAX <<endl;
cout<<"Type: \"long long int\""<< " Size: "<< sizeof(long long int) <<" bytes" << " Minimum value : "<< LLONG_MIN << " Maximum value: " << LLONG_MAX <<endl;
cout<<"Type: \"float\""<< " Size: "<< sizeof(float) <<" bytes" << " Minimum value : "<< FLT_MIN << " Maximum value: " << FLT_MAX <<endl;
cout<<"Type: \"double\""<< " Size: "<< sizeof(double) <<" bytes" << " Minimum value : "<< DBL_MIN << " Maximum value: " << DBL_MAX <<endl;
cout<<"Type: \"long double\""<< " Size: "<< sizeof(long double) <<" bytes" << " Minimum value : "<< LDBL_MIN << " Maximum value: " << LDBL_MAX <<endl;
cout<<"Type: \"unsigned char\""<< " Size: "<< sizeof(unsigned char) <<" bytes" << " Minimum value : "<< CHAR_MIN << " Maximum value: " << UCHAR_MAX <<endl;
cout<<"Type: \"unsigned short int\""<< " Size: "<< sizeof(unsigned short int) <<" bytes" << " Minimum value : "<< SHRT_MIN << " Maximum value: " << USHRT_MAX <<endl;
cout<<"Type: \"unsigned int\""<< " Size: "<< sizeof(unsigned int) <<" bytes" << " Minimum value : "<< INT_MIN << " Maximum value: " << UINT_MAX <<endl;
cout<<"Type: \"unsigned long int\""<< " Size: "<< sizeof(unsigned long int) <<" bytes" << " Minimum value : "<< LONG_MIN << " Maximum value: " << ULONG_MAX <<endl;
cout<<"Type: \"unsigned long long int\""<< " Size: "<< sizeof(unsigned long long int) <<" bytes" << " Minimum value : "<< LLONG_MIN << " Maximum value: " << ULLONG_MAX <<endl;








return 0;
}


/*
1010

0101

1101
1110
111111111111111111111111111111 -> print 1
000000000000000000000000000000 -> print 0

1111
0001
0001
signed case (where the value is <0)
bitshift it right 31 times
--> ...11111
AND it with the binary value for 1


*/
