#include<stdio.h>

void insertion(int a[],int n){

        int i,j,v;
        
        for(i=1;i<n;i++){
        
        
                j = i;
        
                v = *(a+i);
               
                while(j>0 && v <*(a+(j-1))){
                
                         *(a+j) = *(a+(j-1));
                         
                         j--;
                                        
                }             
               *(a+j) = v;       
        }
        
}

int main(){
	int arr[4];
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
	insertion(arr,4);
	printf("%d\n",arr[0]*arr[2]);
	}
	return 0;
}
