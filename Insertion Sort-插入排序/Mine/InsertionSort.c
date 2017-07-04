#include "InsertionSort.h"

void insertionsort(DATATYPE array[],int length){
  printf("start insertionsort\n");
  for(int i=1;(i<length-1)&&(*(array+i)!=0);i++){
	for(int j=0;j<i;j++){
	  if(*(array+i)<*(array+j)){
		DATATYPE temp=*(array+i);
		for(int m=i;m>j;m--){
			*(array+m)=*(array+m-1);
			}
		*(array+j)=temp;
		break;
		}
	  }
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
