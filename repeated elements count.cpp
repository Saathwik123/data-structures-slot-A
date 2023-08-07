#include<stdio.h>
int main(){
	int i,j,n,count=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
	}
	printf(" repeated elements count is :%d",count);
	
	
}
