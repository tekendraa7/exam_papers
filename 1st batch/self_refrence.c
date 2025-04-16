/*
What is self referential structure? How could it be possible to create structure pointer? Illustrate with
suitable program
*/

#include <stdio.h>

// Self-referential structure
struct Node {
    int value;
    struct Node *next;
};

int main() {
    // Declare two struct variables (not using malloc)
    struct Node node1, node2;

    // Assign values
    node1.value = 10;
    node1.next = &node2;   // node1 points to node2

    node2.value = 20;
    node2.next = NULL;     // end of the list

    // Print values
    printf("First node value: %d\n", node1.value);
    printf("Second node value: %d\n", node1.next->value);

    return 0;
}
