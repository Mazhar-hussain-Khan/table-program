#include<stdio.h>
int main()
{
	int Number;
	while(1){
	
	printf("Enter any number of your own choice:\n");
	scanf("%d",&Number);
	printf("The number you enter is : %d\n",Number);
	
	for(int i=1;i<=10;i++)
	{
		printf("%d * %d =%d\n",Number,i,Number*i);
	}
	printf("\n");}
	return 0;
}
