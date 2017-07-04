#include "InsertionSort.h"

/*/mine is not good ,this function modify from book
this moving element while checking.
*/

void insertionsort(DATATYPE array[],int length){
  printf("start insertionsort\n");
  for(int i=1;i<length;i++){
    DATATYPE key=*(array+i);
    int j=i-1;
    while(j>=0&&*(array+j)<key){
      *(array+j+1)=*(array+j);
      j--;
    }
    *(array+j+1)=key;
  }
}

/*
defect: though I defined DATATYPE as the type of array element,but this function just can print type of int now.
*/
void arrayprint(DATATYPE array[],int length){
	for(int i=0;i<length;i++){
	  printf(" %d ",*(array+i));
	}
	printf("\n");
}

void main(void){
  DATATYPE temp[ARRAYLENGTH]={20,8,16,76,52,4};
  arrayprint(temp,ARRAYLENGTH);
  printf("--------------start--------\n");
  insertionsort(temp,ARRAYLENGTH);
  printf("--------------end----------\n");
  arrayprint(temp,ARRAYLENGTH);
}
