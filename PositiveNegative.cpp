#include<stdio.h>
int check(int),num;
int main()
{
	scanf("%d",&num);
	check(num); //calling the function
	return 0;
}
int check(int num){
	if(num>0){
		printf("positive\n");
	}
	else if(num<0){
		printf("negative\n");
	}
	else{
		printf("0 is neither positive nor negative");
	}
}
//program without function
//#include <stdio.h>
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    if (num > 0)
//        printf("positive\n");
//    else if (num < 0)
//        printf("negative\n");
//    else
//        printf("0 is neither positive nor negative");
//}
