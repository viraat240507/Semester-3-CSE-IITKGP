#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int data;
	struct _node *next;
} node;

// Declare head as a global variable
node *head;

// Initialization function
node* init(){
	node* p = (node*)malloc(sizeof(node));
	if (p == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
	p->data = 0;
	p->next = NULL;
	return p;
}

// Inserts an element in sorted order without duplicates
void insert(node *head, int val) {
    node *curr = head;

    // Advance until curr is just before the insertion point or at the end
    while (curr->next != NULL && curr->next->data < val) {
        curr = curr->next;
    }

    // Check if the element already exists
    if (curr->next != NULL && curr->next->data == val) {
        return;
    }

    // Allocate and insert (works for empty list, middle, and end)
    node *p = (node*)malloc(sizeof(node));
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    p->data = val;
    p->next = curr->next;
    curr->next = p;
}

// Prints list elements (skipping the dummy node)
void print_list(node *head) {
    node *curr = head->next;
    while (curr != NULL) {
        printf(" %d", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

// Delete the node if exists, otherwise do nothing - Bad version
node *ldel ( node *L, int x ){
	// Set the head to a temporary pointer p which will be iterated through
	node *p;
	p = L;
	while (p -> next){
		if (p -> next -> data == x){
			p -> next = p -> next -> next;
			return L;
		}
		if (p -> next -> data > x) break;
		p = p -> next;
	}
	return L;
}

/*// Delete the node if exists, otherwise do nothing - Good version
node *ldel ( node *L, int x ){
	// Set the head to a temporary pointer p which will be iterated through
	node *p, *q;
	p = L;
	while(p -> next){
		if (p -> next -> data == x){
			q = p->next;
			p -> next = p -> next -> next;
			free(q);
			return L;
		}
		if(p -> next -> data > x) break;
		p = p -> next;
	}
	return L;
}*/

void ldestroy(node *L){
	node *p;
	while(L){
		p = L -> next;
		free(L);
		L = p;
	}
}

int main(){
	printf("sizeof(node) = %lu\n", sizeof(node));

    head = init();

    // Sequence of insertions
    int ins_items[] = {5, 14, 18, 4, 13, 20, 8, 9};
    int num_ins = sizeof(ins_items) / sizeof(ins_items[0]);

    for (int i = 0; i < num_ins; i++) {
        insert(head, ins_items[i]);
        printf("insert %2d :", ins_items[i]);
        print_list(head);
    }

    // Sequence of deletions
    int del_items[] = {5, 14, 18, 13, 20};
    int num_del = sizeof(del_items) / sizeof(del_items[0]);

    for (int i = 0; i < num_del; i++) {
        head = ldel(head, del_items[i]);
        printf("delete %2d :", del_items[i]);
        print_list(head);
    }

    /*// Clean up all memory before exit to ensure zero Valgrind leaks
    ldestroy(head);*/

    return 0;
}
