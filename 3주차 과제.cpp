#include <stdio.h>
main(){
	int i;
	float sum;
	sum=0;
	for(i=2;i<11;i=i+1) 
	//�����Բ��� i�� ���� 
	//2���� 13���� ���Ͻ�  
	  sum=sum+((i+3)/(i*(i+1.0)));
	printf("sum= %f \n", sum);
}
 // ����  2.747150 ��  
