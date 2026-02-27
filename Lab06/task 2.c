#include<stdio.h>
int main(){
	int n,withdrawl;
	printf("current bank balance: ");
	scanf("%d",&n);
	while(n>0){
		printf("how much do you want to withdrawl?: ",withdrawl);
		scanf("%d",&withdrawl);
		n=n-withdrawl;
	}
	printf("\nyour balance is now 0.");
	return 0;
}
