#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


struct Node {
	int data;

	struct Node* next;
};

struct Node* head;

void Append(int x) {
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->next = NULL;

	struct Node *current = head;
	while (current->next) {
		current = current->next;
			
	}
	current->next = newNode;

};
void InsertAthead(int x) {};
void InserAtPosition(int x, int position) {};
void DeleteAtPosition(int position) {};
void Print() {};
void Revers() {};

int main() {
	head = NULL;



}