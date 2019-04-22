//LUIZ FLÁVIO PEREIRA RA91706 09/04/2018
#include <stdio.h>

int main(void){ 
	while(true){
		long long vl_escolhido = 0, num = 0, vl_fatoracao = 2, var_controle_laco = 0;   
	    
	    printf("Insira um numero >= 2: ");
	    scanf("%lli", &vl_escolhido);
	    if(vl_escolhido <= 1){
	    	printf("VALOR INVALIDO, TENTE NOVAMENTE.");
	    	printf("\n------------------------------------------------------------------------------------------------------------------------");
	    	continue;
		}
	    printf("%lli = ", vl_escolhido);
		num = vl_escolhido;
		
		while (num > 1){
	        while (num % vl_fatoracao == 0){
	            var_controle_laco++;
	    		num = num / vl_fatoracao; 
	        }
	        while(var_controle_laco > 0){
				printf("%lli", vl_fatoracao);
				if(num == 1 && var_controle_laco == 1){
					printf(" . ");
				}else{
					printf(" x ");
				}
	        	var_controle_laco--;
			}
	        vl_fatoracao++; 
		}
		printf("\n------------------------------------------------------------------------------------------------------------------------");
	}
}
