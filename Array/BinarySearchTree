#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* right;
    struct Node* left;
} * root = NULL;
struct Node* create(struct Node* root, int value) {
    if (root == NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        newNode->data = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (value < root->data) {
        // Insert into the left subtree
        root->left = create(root->left, value);
    } else if (value > root->data) {
        // Insert into the right subtree
        root->right = create(root->right, value);
    }
    return root;
}
struct Node* findMin(struct Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct Node* deleteNode(struct Node* root, int value) {
    if (root == NULL) {
        printf("Value not found");
        return NULL;
    }
    // Search for the node to be deleted
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Case 1: Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        // Case 2: Node with two children
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}
void postorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}


void preorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
struct Node* search(struct Node* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}
void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}
int main() {
    int choice;
    while (1) {
        printf("\n1.Create a binary search tree\n2.Traverse the tree in inorder, preorder, and postorder\n3.Search the tree for a given node\n4.Search an Element and Delete from the Tree\n5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            {
                int data_d, choice1;
                printf("Enter 1 to add data, 0 to exit: ");
                scanf("%d", &choice1);
                while (choice1 != 0) {
                    printf("Enter data: ");
                    scanf("%d", &data_d);
                    root = create(root, data_d);

                    printf("Enter 1 to add data, 0 to exit: ");
                    scanf("%d", &choice1);
                }
                break;
            }
        case 2:
            printf("Inorder Traversal is: ");
            inorderTraversal(root);
            printf("\nPreorder Traversal is: ");
            preorderTraversal(root);
            printf("\nPostorder Traversal is: ");
            postorderTraversal(root);
            break;
        case 3:
            {
                int data_d;
                printf("Enter value to search: ");
                scanf("%d", &data_d);
                struct Node* result = search(root, data_d);

                if (result != NULL) {
                    printf("Node with value %d found.\n", data_d);
                } else {
                    printf("Node with value %d not found.\n", data_d);
                }
                break;
            }
        case 4:
            {
                int data_d;
                printf("Enter value to delete: ");
                scanf("%d", &data_d);
                root = deleteNode(root, data_d);
                break;
            }
        case 5:
            freeTree(root);
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
}
