#include <iostream>
#include <ctime>
#include <cstdlib>

#include "DynArr.h"

using namespace std;

int main(){

    int size;

    cout << "Please enter array size: ";
    cin >> size;

    DynArr darr(size);

    srand(time(NULL)); /* Seed for random number, which we'll use to fill the data */

    for(int i=0;i<size;i++){

        int randomNum= rand()%100+1; // random numbers between 1-100 to be inserted;

        darr.insertItem(i,randomNum);
    }

    // view the data in DynArr;

    for(int i=0;i<size;i++){
        cout << "Index " << i << ": " << darr.getItem(i) << endl;
    }

    return 0;
}
