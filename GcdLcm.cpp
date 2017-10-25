#include <iostream>
#include <stdlib.h>

using namespace std;

int main(const int argc, const char *const argv[]) {

  if (argc < 3) {
    cerr << "Error: Unable to compute GCD and/or LCM because of insufficient arguments" << endl;
    return -1;
  } else if (argc > 3) {
    cerr << "Warning: Expecting two command-line arguments; received " << argc - 1<<"; ignoring extraneous arguments." << endl;
  } else {
    int first_number = atoi(argv[1]);
    int second_number = atoi(argv[2]);
    int limit = 0;
    int GCD=1;
    if (first_number <= 0 || second_number <= 0) {
      cerr << "Error Warning: Invalid input" << endl;
      return -1;
    }
    if (first_number > second_number) {
      limit = second_number;
    } else {
      limit = first_number;
    }
    for (int i = limit; i > 0; i--) {
      if ( (first_number % i == 0) && (second_number % i == 0) ) {
        GCD = i;
        break;
      }
    }
    int LCM1, LCM2;
    LCM1 =(second_number/GCD);
    LCM2 = first_number*LCM1;
    cout<<"GCD("<<first_number<<","<<second_number<<") = "<<GCD<<endl;
    cout<<"LCM("<<first_number<<","<<second_number<<") = "<<LCM2<<endl;
  }



  return 0;

}

/*
if (first_number == 0) {
cout<<"GCD("<<first_number<<","<<second_number<<") = "<<second_number<<endl;
}
if (second_number == 0) {
cout<<"GCD("<<first_number<<","<<second_number<<") = "<<first_number<<endl;
}
if (first_number < 0 || second_number < 0 ) {
cerr<<"Error: Invalid input"<<endl;
}
*/
