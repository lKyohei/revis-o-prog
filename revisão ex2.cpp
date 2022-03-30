#include <stdio.h>
int main()
{
	char nomeproduto[50];
	float precoproduto;
	
	printf("digite o nome do produto:");
	gets(nomeproduto);
	printf("digite o preco do prduto");
	scanf("%f", &precoproduto);
	
	if(precoproduto < 10.00)
	{
		printf("Lucro: %f\n", precoproduto*1.7);
		
	}
	else if(10.00 < precoproduto && precoproduto < 30.00)
{
	printf("Lucro: %f\n", precoproduto*1.6);
	
	}
	else if(30.00 < precoproduto && precoproduto < 50.00)
{
	printf("Lucro: %f\n", precoproduto*1.4);
	
	}
	else
	{
		printf("Lucro: %f", precoproduto*1.3);
	}
		

	
	
	
	return 0;
}
