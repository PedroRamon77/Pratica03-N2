#include <stdio.h>
#include <locale.h>
#define pi 3.14

float calcarea(float r){
	float area;
	area= pi * (r*r);
	return area;
}
int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float raio,area,r;
	
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	r=calcarea(raio);
	
	printf("\nA �rea do circulo que possuir o raio: %.2f �: %.2f\n",raio,r);
	
	return 0;
}
