#include<stdio.h>
int main()
{
	int n,i,j,a, arr[100];
	printf("---Array sorting in ascending order---\n");
	printf("\nenter the number of elements: ");
	scanf("%d", &n);
	printf("enter the elements: ");
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	printf("entered array: \n");
	for(i=1;i<=n;i++){
	printf("%d ",arr[i]);}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
		if(arr[i]>arr[j]){
			a=arr[i];
			arr[i]=arr[j];
			arr[j]=a;
		}
	}}
	printf("\narray after sorting:\n");
	for(i=1;i<=n;i++){
	printf("%d ",arr[i]);}
	
	return 0;
}
