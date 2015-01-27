#include <stdio.h>

int main(){
	int t, m, n;
	scanf("%d", &t);
	for(int i = 0 ; i < t ; i++){
		scanf("%d %d", &n, &m);
		if(n == m){
			if(n % 2 == 0){
				printf("L\n");
			}
			else{
				printf("R\n");
			}
		}
		else if(n < m){
			if(n % 2 == 0){
				printf("L\n");
			}
			else{
				printf("R\n");
			}
		}
		else{
			if(m % 2 == 0){
				printf("U\n");
			}
			else{
				printf("D\n");
			}
		}
	}
	return 0;
}