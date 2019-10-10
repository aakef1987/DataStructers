#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


struct Node {
	int data;

	struct Node* next;
};

struct Node* head;

void Append(int x) {};
void InsertAthead(int x) {};
void InserAtPosition(int x, int position) {};
void DeleteAtPosition(int position) {};
void Print() {};
void Revers() {};

int main() {
	head = NULL;

}