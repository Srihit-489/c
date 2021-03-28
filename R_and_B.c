#include<stdio.h>

void R_and_B(int n,char R[],char B[]){
     int i;
     int count=0;
     for(i=0;i<n;i++){
		if(R[i] > B[i])
	    	count++;
		else if(R[i] < B[i])
	    	count--;   
	    else
	   		continue;   
	}
	if(count > 0)
	     printf("RED\n");
	else if(count < 0)
	     printf("BLUE\n");
	else
	     printf("EQUAL\n");
}

int main(){
    int T;
    scanf("%d",&T);
	for(int j=0;j<T;j++){
	    int n;
	    scanf("%d",&n);
	    char R[n],B[n];
	    scanf("%s",R);
	    scanf("%s",B);
	    R_and_B(n,R,B);
	}    
	return 0;
}
