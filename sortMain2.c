#include <stdio.h>
 
#include <stdlib.h>
 
#include "mySort.h"
 
 
 
int main(int argc, char * argv[])
 
{
 
    int data[100000]; /* Array of ints to sort */
 
    int nDataItems;   /* number of actual items in the array */
 
    int i;
 
    if(argc==1){
 
    /* Test data */
 
    nDataItems = 4;
 
    data[0] = 10;
 
    data[1] = 20;
 
    data[2] = 30;
 
    data[3] = 40;
 
    
 
    mySort(data, nDataItems);
 
    
 
    /* Check that the data array is sorted. */
 
    for(i = 0; i < nDataItems-1; i++) {
	printf("%d\n",data[i]);}}
 
  else if (argc>1) {
 
            nDataItems = argc-1;
 
     for(i=1;i<argc;i++){
		data[i-1]=atoi(argv[i]);
 
        }
	for(i=0; i<nDataItems;i++){
		mySort(data,nDataItems);}
 
    
 
    /* Print sorted array to stdout */
 
    for(i = 0; i < nDataItems; i++) {
 
        printf("%d\n", data[i]);
 
    }}
 
    exit(0);
 
}
