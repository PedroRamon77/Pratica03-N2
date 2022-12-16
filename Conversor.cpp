#include <stdio.h>
#include <locale.h>

float conversor_C_F(float c){
	float r;
	r= (c*1.8)+32;
	return r;
}
float conversor_F_C(float f){
	float r;
	r=(f-32)/1.8;
	return r;
}

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float c,f,r;
	int op;
	
	printf("Conversor de Celsius e Fahrenheit\n\n\n");
	printf("\n\nO valor é em celsius ou fahrenheit?\n");
	printf("Digite 0-celsius e 1-fahrenheit: ");
	scanf("%d",&op);
	
	if(op==0){
		printf("\n\nDigite o valor da temperatura em Celsius: ");
		scanf("%f",&c);
		r=conversor_C_F(c);
		printf("Temperatura em Fahrenheit é : %.2f°F\n",r);
	}else if(op==1){
		printf("\n\nDigite o valor da temperatura em Fahrenheit: ");
		scanf("%f",&f);
		r=conversor_F_C(f);
		printf("\nTemperatura em Celsius é : %.2f °C\n",r);
	}

	return 0;
}
