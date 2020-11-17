#include<stdio.h>
int main(){
	int n,i,arr[100],e;
	printf("enter number of elements: ");
	scanf("%d",&n);
	printf("enter array elements...\n");
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search: ");
	scanf("%d",&e);
	for(i=1;i<=n;i++){
		if(arr[i]==e){
			printf("element found at position no. %d.",i);
			break;
		}
		else if(i==n){
			printf("element not found");
		}
	}
	return 0;
}
