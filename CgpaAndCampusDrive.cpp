#include<stdio.h>
int main()
{
	int n,i;
	float cgpa[20],s,avg;
	printf("enter the number of passed semesters: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("CGPA of semester%d: ",i);
		scanf("%f",&cgpa[i]);
		s+=cgpa[i];
	}
	avg=s/n;
	printf("Final CGPA is: %f\n",avg);
	if(avg>=6.5){
		printf("Eligible for campus drive");
	}
	else{
		printf("Not eligible for campus drive");
	}
	return 0;
}
