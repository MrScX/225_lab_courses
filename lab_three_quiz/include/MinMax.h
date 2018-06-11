#ifndef MINMAX_H
#define MINMAX_H


class MinMax{
private:
    double minEl;
    double maxEl;

public:
    MinMax();
    void initMinMax(double arr[],int size);
    double getMin();
    double getMax();

};

#endif // MINMAX_H
