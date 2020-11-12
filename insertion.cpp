#include<stdio.h>
int main(){
	int i, n, v, p, arr[50];
	printf("enter number of element: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
}
printf("array before insertion\n");
for(i=1;i<=n;i++){
		printf("%d ",arr[i]);
}
printf("\nenter the position: ");
scanf("%d",&p);
printf("enter the value to enter: ");
scanf("%d",&v);
for(i=n;i>=p;i--){
	arr[i+1]=arr[i];
}
arr[p]=v;
printf("array after insertion\n");
for(i=1;i<=n+1;i++){
	printf("%d ",arr[i]);
}
	return 0;
}
