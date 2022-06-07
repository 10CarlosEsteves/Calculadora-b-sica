#include <stdio.h>
#include <math.h>

void main(){

    long int digito=0;
    int pot=0;
    long int backup=0;
    double trabalha=0;
    long int resultado=0;
    long int inteiro;
    
    printf("Digite um numero: ");
    scanf("%ld",&digito);
    printf("%ld",digito);
    backup=digito;
 if(digito==0){
 	
 	printf("0 em binario quando convertido para qualquer base decimal, sempre retorna 0\n");
 	
 }
 
 else{
 while(digito!=0){
 	
 	
 	trabalha=digito;
 	trabalha=trabalha/10;
 	digito=trabalha;
 	trabalha=(trabalha-digito)*10;
 	inteiro=round(trabalha);
 	
 	if(inteiro==1){
 		
 		resultado=resultado+pow(2,pot);
 	}
	pot++;
	
}
printf("\n\n");
printf("O numero %ld quando convertido para decimal retorna o valor %i",backup,resultado);
 
}
    
}