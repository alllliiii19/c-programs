#include <stdio.h>
#include <stdlib.h>

// Definition of the node structure
struct node {
    int data;
    struct node *next;
};

// Function to create a linked list
struct node *create_ll(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    
    printf("\nEnter -1 to end");
    
    // Read the first number
    printf("\nEnter the data: ");
    scanf("%d", &num);
    
    while (num != -1) {
        // Allocate memory for new node
        new_node = (struct node*)malloc(sizeof(struct node));
        if (new_node == NULL) {
            printf("Memory allocation failed\n");
            return start;  // Return current list if memory allocation fails
        }
        
        // Initialize the new node
        new_node->data = num;
        new_node->next = NULL;
        
        if (start == NULL) {
            // If the list is empty, set the new node as the start
            start = new_node;
        } else {
            // Otherwise, find the end of the list and append the new node
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
        
        // Read the next number
        printf("\nEnter the data: ");
        scanf("%d", &num);
    }
    
    return start;
}

// Function to display the linked list
void display_ll(struct node *start) {
    struct node *ptr = start;
    if (ptr == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("The linked list is:\n");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Function to free the linked list
void free_ll(struct node *start) {
    struct node *temp;
    while (start != NULL) {
        temp = start;
        start = start->next;
        free(temp);
    }
}

int main() {
    struct node *head = NULL;
    
    // Create the linked list
    head = create_ll(head);
    
    // Display the linked list
    display_ll(head);
    
    // Free the linked list
    free_ll(head);
    
    return 0;
}

