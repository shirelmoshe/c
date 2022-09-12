

#include <iostream>
#include <stdio.h>
#include <stdlib.h>



 typedef struct Node {
	int data;
	struct Node* next;
    struct Node* prve;

}Node;

 struct Node* head = NULL;
 struct Node* tail = NULL;
 struct Node* item;
 struct Node* kodem;

 void mall() {
	 int a;
	 scanf("%d", &a);

	item= ( struct Node*)malloc(sizeof(struct Node));
	if (head == NULL) {
		head = item;
		tail = item;
		item->prve = NULL;
		item->next = NULL;


	}
	else {
		tail = item;
		item->prve = kodem;
		kodem->next = item;
		item->next = NULL;

	}
	item->data = a;
 }



 int main() {
	

 }
