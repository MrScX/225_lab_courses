#include "DynArr.h"

DynArr::DynArr(int size){
    data= new int[size];
}

DynArr::~DynArr(){
    delete[] data;
}

void DynArr::insertItem(int index,int value){
    data[index]= value;
}

int DynArr::getItem(int index){
    return data[index];
}
