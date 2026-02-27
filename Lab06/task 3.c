#include<stdio.h>
int main(){
	int password,correctpass=1234;
	do{
		printf("enter password: ");
		scanf("%d",&password);
		if(password!=correctpass){
			printf("access denied, pls try again.\n");
		}
	}
		while(password!=correctpass);
			printf("access granted.");
		
	
	return 0;
}
