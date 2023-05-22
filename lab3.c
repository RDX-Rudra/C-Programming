#include <stdio.h>
void main(){
	int n;
	printf("Enter any number: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			if(j*j*j == i){
				for(int k = 1; k <= i; k++){
					if(k*k == i){
						printf("%d ", i);
			  		}
		   		}
	    	}
     	}
   	}
}

