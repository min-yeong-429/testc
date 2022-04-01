#include <stdio.h>
main() {
  int i;
  int hap=2+4; 
  float sum=0;
  for(i=8;i<=50;i=i+2){
    hap=hap+(i-2);
    sum=sum+(float)i/hap;   
  } 
  printf("result = %f\n",sum); 
}

