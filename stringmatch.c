#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stringmatch(char *text , char *pattern , int t , int p ){
	int i , k=0 ;
	
for(i = 0 ; i < t - p ; ++i){
	int j ;
	for(j = 0 ; j < p ; j++){	
	if(text[i + j] != pattern[j]){
         break ;
	}

}
if(j == p){
	return 1;
}
	return -1; 

}
}
void main(){
	char text[100];
	char pattern[100];
	printf("Enter the text: ");
	gets(text);
	printf("Enter the pattern: ");
	gets(pattern);
	int t , p ;
	t = strlen(text);
	p = strlen(pattern);
	int c ; 
	
	
	c = stringmatch(text , pattern , t , p);
	if(c == 1){
		printf("string found");
	}
	else{
		printf("string not  found");
	}

}
