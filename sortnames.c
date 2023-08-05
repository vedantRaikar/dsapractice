#include<stdio.h>
#include<string.h> 


int main(){
	int n , i , j ;
	char name[50][50], temp[50];
	
	printf("Enter the number of names you want to enter: ");
	scanf("%d" , &n); 
	printf("Enter the list of names :  ");
	
	for( i = 0 ; i < n ; i++){
		scanf("%s" , name[i]);
	}
	
for( i =0 ; i < n ; i++){
	for(j = i + 1 ; j < n ; j++){
		if(strcmp(name[i] , name[j] )>0){
			strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
	}
}
printf("The sorted list of name is : ");
for( j = 0 ; j < n; j++){
	printf(" %s " , name[j]);
}
}
return 0;
}


