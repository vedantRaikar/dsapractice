#include <stdio.h>
#include <stdlib.h>

// Node structure for the binary search tree
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node with a given key
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to perform search and insert in the binary search tree
struct Node* insert(struct Node* root, int key) {
    // If the tree is empty, create a new node and return it
    if (root == NULL)
        return createNode(key);

    // Otherwise, traverse the tree
    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);

    // If the key is equal to the current node's key, it's a duplicate; do nothing

    return root;
}

// Function to search for a key in the binary search tree
struct Node* search(struct Node* root, int key) {
    // If the tree is empty or the key is found
    if (root == NULL || root->key == key) {
        if (root != NULL){
		
            printf("Key %d found.\n", key);
            return root;}
        else{
		
            printf("Key %d not found. Inserting...\n", key);
			return insert(root, key);}
    }

    // Traverse the tree
    if (key < root->key)
        root->left = search(root->left, key);
    else
        root->right = search(root->right, key);

    return root;
}

// Function to free the memory allocated for the tree nodes
void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}
// Example usage
int main() {
    struct Node* root = NULL;
    int val ;
    int ch;
    do{
    	printf("\n1.insert\n2.search\n3.exit\n");
    	
    	printf("Enter the choice: ");
    	scanf("%d" , &ch);
    	
    	switch(ch){
    		case 1:
    			printf("Enter the value to insert ");
    			scanf("%d" , &val);
    			root = insert(root , val);
    			break ;
    		case 2:
    			printf("Enter the value to search ");
    			scanf("%d" , &val);
    			root = search(root , val);
    			break ;
    		
		}
	}while(ch != 3);

    return 0;
}

