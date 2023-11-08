#include<math.h>
#include<stdio.h>
#include <stdlib.h>
#include "../includes/Bucket.h"

int* searchMinVal(int* data, int dataSize){
    if(dataSize <= 0){
        return NULL;
    }
    int* minPtr = data;

    for(int i = 0 ; i < dataSize ; i++){
        if(data[i] < *minPtr){
            minPtr = &data[i] ;
        }
    }
    return minPtr;
}
int* searchMaxVal(int* data, int dataSize){
    if(dataSize <= 0){
        return NULL;
    }
    int* maxPtr = data;

    for(int i = 0 ; i < dataSize ; i++){
        if(data[i] > *maxPtr){
            maxPtr = &data[i] ;
        }
    }
    return maxPtr;
}

int calculateBucketNumbers(int dataSize){
    return 1 + (int)(3.332 * log10(dataSize));
}
int calculateIntervalSize(int* minVal, int* maxVal, int* bucketsNumbers){
    return (int)((*maxVal - *minVal) / *bucketsNumbers);
}

int main(){
    int data[] = {163,5,3,8,12,5,234};

    int dataSize = sizeof(data) / sizeof(int);
    int* maxVal = searchMaxVal(data, dataSize);
    int* minVal = searchMinVal(data, dataSize);
    int bucketNumbers = calculateBucketNumbers(dataSize);
    int intervalSize =  calculateIntervalSize(minVal, maxVal, bucketNumbers);
    BucketOfIntegers* buckets = malloc((sizeof(BucketOfIntegers) * bucketNumbers));
    

}