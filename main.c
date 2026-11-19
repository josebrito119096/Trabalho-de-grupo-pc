#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>



int main() 
{
	SetConsoleOutputCP(CP_UTF8);
	
	int zonas;
	float habitabilidade[zonas][5];  //colunas  0. quantidade de água 1. estabilidade geologica 2. condições térmicas 3. qualidade do ar 4. media
	//habitabilidade(0 - 100)= ((quantidade de água + estabilidade geologica + condições térmicas + qualidade do ar)/4)*10  
	// Inadequadas (0 - 39) Aceitáveis( 40 - 60) Favoráveis(60 - 80)  Excelentes(80 - 100) 
	
		
	printf("«Projeto NOVA TERRA: Seleção de Zonas para Colonização» \n Insira o número de zonas exploradas no planeta Nova Terra: ");
	scanf("%d", &zonas);
	
	
	return 0;
}