#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <math.h>

using namespace std;

int main(const int argc, const char *const argv[]) {

    int numFloats = argc - 1;

    float value;
    float minValue = FLT_MAX;
    float maxValue = FLT_MIN;
    float average = 0;
    int i = 1;

    if (argc == 1) {
        cerr << "Unable to compute statistics over data set because: insufficient arguments" << endl;
        return -1;
    } else {

        while (i <= numFloats) {
            value = atof(argv[i]);
            /*
            if (argv[i][0] < 45 || argv[i][0] > 57) {
              cerr<<"Unable to compute statistics over data set because: Inputs you entered are not integers. "<<endl;
              return -1;
            }
            */
            if (value < minValue) {
                minValue = value;
            }
            if (value > maxValue) {
                maxValue = value;
            }
            average += value;
            i++;
        }
        float f_average = average / (argc - 1);
        cout << "Number of floating-point numbers: " << argc - 1 << endl;
        cout << "Minimum floating-point number: " << minValue << endl;
        cout << "Average floating-point number: " << f_average << endl;
        cout << "Maximum floating-point number: " << maxValue << endl;

        /*
          avg = total sum / number of things
          divide by argc-1
        */
    }

    return 0;
}
