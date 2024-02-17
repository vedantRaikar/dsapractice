// Adjacency Matrix representation in C

#include <stdio.h>
#define V 3

// Initialize the matrix to zero
void init(int arr[][V]) {
  int i, j;
  for (i = 0; i < V; i++)
    for (j = 0; j < V; j++)
      arr[i][j] = 0;
}

// Add edges
void addEdge(int arr[][V], int i, int j) {
  arr[i][j] = 1;
  arr[j][i] = 1;
}

// Print the matrix
void printAdjMatrix(int arr[][V]) {
  int i, j;

  for (i = 0; i < V; i++) {
    printf("%d: ", i);
    for (j = 0; j < V; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int adjMatrix[V][V] ;
  int i , j , ch ; 
  init(adjMatrix);
do{
	printf("\n1.add edge \n2.print matrix \n3.exit");
	printf("Enter the choice: ");
	scanf("%d" , &ch);
	switch(ch){
		case 1: 
		    printf("Enter the edge you want to enter: ");
		    scanf("%d %d" , &i , &j);
		    addEdge(adjMatrix , i , j);
		    break ;
		case 2:
			printAdjMatrix(adjMatrix);
			break ; 
			
	}
	
}while(ch!=3);

  return 0;
}
