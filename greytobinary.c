#include<stdio.h>
#define BITS 10
int arr[]={1,2,4,8,16,32,64,128,256,512};
void greytobinary(int *a, int count)
{
	int i;
	for(i = count - 2; i >= 0; i--)
	{
	    a[i] = a[i]^a[i+1];
	}
}

void binarytodecimal(int *a, int count)
{
	int sum=0,i;
	for(i= 0;i < BITS;i++){
//		printf("arr[%d]*a[%d] = %d * %d\n",i,i,arr[i],a[i]);	
		sum = sum + (arr[i]*a[i]);
//		printf("sum = %d\n",sum);
	}
	
	printf("Decimal value= %d\n",sum);
}

main(int argc, char **argv)
{
	int a[BITS],i;

	memset(a,BITS,0);
	for(i=BITS-1;i>=0;i--)
	{
		printf("value for a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("value of a\n");
	for(i=BITS-1;i>=0;i--)
	printf("%d ",a[i]);
	greytobinary(a,BITS);

	printf("\nconverted value of a\n");
	for(i=BITS-1;i>=0;i--)
	printf("%d ",a[i]);
	printf("\n");
	
	binarytodecimal(a,BITS);
}
