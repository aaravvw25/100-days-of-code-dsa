#include <stdio.h>
#include <stdlib.h>

// Define structure for node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to count nodes
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* temp = head;
    
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    
    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    int x;
    scanf("%d", &x);

    // Create head node
    struct Node* head = createNode(x);
    struct Node* temp = head;

    // Create remaining nodes
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        temp->next = createNode(x);
        temp = temp->next;
    }

    // Count and print result
    printf("%d", countNodes(head));

    return 0;
}