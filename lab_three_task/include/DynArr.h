#ifndef DYNARR_H
#define DYNARR_H

class DynArr{

private:
    int *data; /* integer pointer, which will hold an address pointing to a piece of memory created dynamically on the fly */

public:
    DynArr(int size);
    ~DynArr();
    void insertItem(int index,int value);
    int getItem(int index);

};

#endif // DYNARR_H
