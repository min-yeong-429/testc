#include <stdio.h>
main(){
	int i;
	float sum;
	sum=0;
	for(i=2;i<11;i=i+1)   
	  sum=sum+((i+3)/(i*(i+1.0)));
	printf("sum= %f \n", sum);
}
 // 값은  2.747150 임  
 // for문 안에는 정수 값이 들어가야 한다
