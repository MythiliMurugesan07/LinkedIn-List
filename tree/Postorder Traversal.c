#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* createTree() {
    int value;
    printf("Enter node value (-1 for no node): ");
    scanf("%d", &value);

    if (value == -1)
        return NULL;

    struct Node* root = createNode(value);

    printf("Enter left child of %d\n", value);
    root->left = createTree();

    printf("Enter right child of %d\n", value);
    root->right = createTree();

    return root;
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct Node* root;

    printf("Create Binary Tree\n");
    root = createTree();

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}
