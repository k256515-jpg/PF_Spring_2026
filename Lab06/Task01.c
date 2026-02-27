#include<stdio.h>
int main(){
	int attendance,total=0;
		for(int i=1;i<=30;i++){
	printf("enter attendance of student(use 1 for present, 0 for absent): ",i);
	scanf("%d",&attendance);
	
		if(attendance==1){
			total++;
		}
	}
	printf("\nthe total number of students present is %d ",total);
	return 0;
}
