#ifndef BUCKET_H
#define BUCKET_H

typedef struct{
    int interval[2];
    int* elements;
    int size;
}BucketOfIntegers;

int calculateBucketNumbers(int dataSize);

int calculateIntervalSize(int* minVal, int* maxVal, int* bucketsNumbers);

int* searchMinVal(int* data, int dataSize);
int* searchMaxVal(int* data, int dataSize);

#endif