#include "MinMax.h"

MinMax::MinMax(){
    maxEl= -1;
    minEl= -1;
}

void MinMax::initMinMax(double arr[],int size){

    minEl= arr[0]; /* initially assume that the first element of the array is the max/min */
    maxEl= arr[0];

    for(int i=0;i<size;i++){

        if(arr[i]<minEl)
            minEl= arr[i]; /* if current iteration is less than the current min, then make current iteration the new min */
        if(arr[i]>maxEl)
            maxEl= arr[i]; /* if current iteration is greater than the current max, then make current iteration the new max */
    }

}

double MinMax::getMin(){
    return minEl;
}

double MinMax::getMax(){
    return maxEl;
}
