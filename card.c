#include<stdio.h>

int count(int a,int b){
   int counter = 0;
   if(a%2 != 0 && b%2 != 0){
   return 1;
   }
   if(a%2 == 0){
     return 2*count(a/2,b);   
   }
   else{
     return 2*count(a,b/2);
   }
   
}

int main() {
	int w,n,h;
	int counter;
	int T;
	scanf("%d",&T);
	
for(int i=0;i<T;i++){
	scanf("%d %d %d",&w,&h,&n);
	counter = count(w,h);
	if(counter >= n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	
}
	return 0;
}
