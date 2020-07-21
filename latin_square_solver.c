#include<stdio.h>

/*Latin Square Solver
Question 2 of 4
You are given a two-dimensional n × n integer matrix containing integers from 0 to n. 
Assuming that 0 represents an unfilled square, return whether you can fill empty squares such that in each row and each column every number from 1 to n appears exactly once.

Constraints

k <= 20 where k is the number of unfilled squares.
Example 1
Input

matrix = [[1, 2, 3],
[2, 0, 1],
[0, 0, 2]]
Output

True
Explanation

We can set the matrix to

[[1, 2, 3]
 [2, 3, 1],
 [3, 1, 2]]
Example 2
Input

matrix = [[1, 2, 3],
[2, 0, 1],
[3, 3, 2]]
Output
False*/

int main(){
	
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("Enter a two-dimensional n × n integer matrix containing integers from 0 to n:\n");
	
	int matrix[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n[");
	for(i=0;i<n;i++){
		printf("[");
		for(j=0;j<n;j++){
			printf("%d",matrix[i][j]);
			if(j<n-1){
				printf(",");
			}
		}
		printf("]");
		if(i<n-1){
			printf(",\n");
		}
	}
	printf("]");
	
	
	
	
	
	
	
	int k,count=0,a=n;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
		  if(matrix[i][j]!=0&&matrix[i][j]==matrix[i][j+1]){
		  	count++;
		  }	
		 
			
			
		}
		
	}
	
	if(count!=0){
		printf("\nFALSE");
	}
	else{
		
		for(i=0;i<n;i++){
	     	for(j=0;j<n;j++){
	     	  if(matrix[i][j]==0){
	     	     matrix[i][j]=n;
	     		for(k=0;k<n;k++){
	     		   if(j==k){
	     		  	k++;
			}
	     		  if(n==matrix[i][k]){
	     		  		
	     		  	n--;
	     		  	matrix[i][j]=n;
			   }
		   }		
			  
			  n=a;
	     		  
	     			
	     		
			 }
		   }
			
		 }                                    
		
		
		
		printf("\nTRUE");
		
		printf("\n[");
	    for(i=0;i<n;i++){
		   printf("[");
		   for(j=0;j<n;j++){
		   	printf("%d",matrix[i][j]);
			if(j<n-1){
				printf(",");
			}
		}
	    	printf("]");
		if(i<n-1){
			printf(",\n");
		}
	  }
	     printf("]");
		
	}
	
	
	

	
	
	return 0;
}
