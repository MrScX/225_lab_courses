#include <iostream>
#include "MinMax.h"

using namespace std;

int main(){

    double arr[]= {2.1,5.7,18.17,90.0,3.1};

    MinMax mm;

    mm.initMinMax(arr,5); // 5 is the hard coded array size, can be dynamic if you take array input from the user.

    cout << "Min: " << mm.getMin() << " Max: " << mm.getMax() << endl;

    return 0;
}
