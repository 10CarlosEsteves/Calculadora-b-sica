#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define PI  3.14159265358979323846

void Soma();
void Subtracao();
void Multiplicacao();
void Divisao();
void Potencia();
void Radiciacao();
void Trigonometria();
void Convert();

void main(){
	
	
	int comando=1;
do{
	printf("#########################################\n");
	printf("CALCULADORA BASICA EM C\n");
	printf("#########################################\n");
	printf("1-SOMA\n");
	printf("2-SUBTRACAO\n");
	printf("3-MULTIPLICACAO\n");
	printf("4-DIVISAO\n");
	printf("5-POTENCIACAO\n");
	printf("6-RADICIACAO\n");
	printf("7-VALORES DE ANGULOS TRIGONOMETRICOS\n");
	printf("8-CONVERSOR BINARIO\n");
	printf("9-DESLIGAR\n");
	printf("#########################################\n");
	printf("Comando: ");scanf("%i",&comando);
	
switch(comando){
	
	case 1:
	Soma();
	break;
	
	case 2:
	Subtracao();
	break;
	
	case 3:
	Multiplicacao();
	break;
	
	case 4:
	Divisao();
	break;
	
	case 5:
	Potencia();
	break;
	
	case 6:
	Radiciacao();
	break;
	
	case 7:
	Trigonometria();
	break;
	
	case 8:
	Convert();
	break;
	
	case 9:
	printf("\n\nENCERRANDO...");
	exit(0);
	default:
	printf("ERROR,opcao invalida\n");
}	
	
}while(comando!=9);
}


//FUNÇÃO SOMA
void Soma(){
	
	system("pause");
	system("cls");
	float numero1=0;
	float numero2=0;
	float resultado=0;
	
    printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%f",&numero2);
    resultado=numero1+numero2;
    printf("O resultado desta operacao eh: %.2f\n\n",resultado);
	
    system("pause");
    system("cls");
}

//FUNÇÃO DE SUBTRAÇÃO
void Subtracao(){
	
	system("pause");
	system("cls");
	float numero1=0;
	float numero2=0;
	float resultado=0;
	
	printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Digite o quanto sera subtraido do numero: ");
    scanf("%f",&numero2);
    resultado=numero1-numero2;
    printf("O resultado da subtracao eh: %.2f\n\n",resultado);
    system("pause");
	system("cls");
    
	
}

//FUNÇÃO DE MULTIPLICAÇÃO
void Multiplicacao(){
	
	system("pause");
	system("cls");
	float numero1=0;
	float numero2=0;
	float resultado=0;
	
	printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%f",&numero2);
	resultado=numero1*numero2;
	printf("O resultado da multiplicacao eh :%.2f\n\n",resultado);
	system("pause");
	system("cls");
	
}

//FUNÇÃO DE DIVISÃO
void Divisao(){
	
	system("pause");
	system("cls");
	
	float numero1=0;
	float numero2=0;
	float divisao=0;
	printf("Digite o dividendo: ");
	scanf("%f",&numero1);
	printf("Digite o divisor: ");
	scanf("%f",&numero2);
	divisao=numero1/numero2;
	printf("O resultado da divisao eh: %.2f\n\n",divisao);
	system("pause");
	system("cls");
}

//FUNÇÃO DE POTENCIAÇÃO
void Potencia(){
	
	system("pause");
	system("cls");
	
	float base=0;
	float expoente=0;
	float resultado=0;
	
	printf("Digite a base:");
	scanf("%f",&base);
	printf("Digite o expoente:");
	scanf("%f",&expoente);
	resultado=pow(base,expoente);
	printf("O resultado de %.0f^%0.f eh igual a: %.2f\n\n",base,expoente,resultado);
	system("pause");
	system("cls");
}

//FUNÇÃO DE RADICIAÇÃO
void Radiciacao(){
	
	system("pause");
	system("cls");
	
	float radicando=0;
	float indice=0;
	float raiz=0;
	printf("Por favor, informe o radicando: ");
	scanf("%f",&radicando);
	printf("Por favor, informe o indice: ");
	scanf("%f",&indice);
	raiz=pow(radicando,1/indice);
	printf("A raiz de %.0f de indice %.0f eh igual a: %.2f\n\n",radicando,indice,raiz);
	system("pause");
	system("cls");
	
	
}

//FUNÇÃO DE ANGULOS TRIGONOMETRICOS
void Trigonometria(){
	
	system("pause");
	system("cls");
	int escolha;
	float angulo;
	float resultado;
	float convert;
	
	printf("####################\n");
	printf("1-SENO\n");
	printf("2-COSSENO\n");
	printf("3-TANGENTE\n");
	printf("4-COTANGENTE\n");
	printf("5-SECANTE\n");
	printf("6-COSECANTE\n\n");
	printf("Qual desses voce gostaria de saber\?\n");
	scanf("%i",&escolha);
	printf("\n");
	
switch(escolha){
	
	case 1:
	printf("Por favor, digite o angulo em graus: ");
	scanf("%f",&angulo);
	convert=(angulo*PI)/180;
    resultado=sin(convert);
    printf("O Seno de %.2f eh igual a %.2f\n\n",angulo,resultado);
	break;
	
	case 2:
	printf("Por favor, digite o angulo em graus: ");
	scanf("%f",&angulo);
	convert=(angulo*PI)/180;
	resultado=cos(convert);
	printf("O Cosseno de %.2f eh igual a %.2f\n\n",angulo,resultado);
	break;
	
	case 3:
	printf("Por favor, digite o angulo em graus: ");
	scanf("%f",&angulo);
	convert=(angulo*PI)/180;
	resultado=tan(convert);
	printf("A Tangente de %.2f eh igual a %.2f \n\n",angulo,resultado);
	break;
	
	case 4:
	printf("Por favor, digite o angulo em graus: ");
	scanf("%f",&angulo);
	convert=(angulo*PI)/180;
	resultado=1/tan(convert);
	printf("A Cotangente de %.2f eh igual a %.2f \n\n",angulo,resultado);
	break;
	
	case 5:
	printf("Por favor, digite o angulo em graus: ");
	scanf("%f",&angulo);
	convert=(angulo*PI)/180;
	resultado=1/cos(convert);
	printf("A Secante de %.2f eh igual a %.2f \n\n",angulo,resultado);
	break;
	
	case 6:
	printf("Por favor, digite o angulo em graus: ");
	scanf("%f",&angulo);
	convert=(angulo*PI)/180;
	resultado=1/sin(convert);
	printf("A Cosecante de %.2f eh igual a %.2f \n\n",angulo,resultado);
	break;
	
	default:
	printf("ERROR,reiniciando a calculadora...\n\n");
	}
	
	system("pause");
	system("cls");	
}

//CONVERSOR DE DECIMAL PARA BINARIO
void Convert(){
	
	int numero=0;
	int sacrificio=0;
	int p=0;
	printf("Por favor, digite o numero em decimal para ser convertido: ");
	scanf("%i",&numero);
	sacrificio=numero;
	
while(sacrificio!=0){
	
	sacrificio=sacrificio/2;
	
	p++;}
	sacrificio=numero;
	int binario[p];
    int percorredor=0;
while(numero!=0){
	
	binario[percorredor]=numero%2;
	numero=numero/2;
	percorredor++;
}	

    printf("O numero %i convertido em binario eh igual a:\n",sacrificio);

while(p!=0){
	
	printf("%i ",binario[p-1]);
	p=p-1;
	
}
    printf("\n\n");
    system("pause");
	system("cls");	

}


