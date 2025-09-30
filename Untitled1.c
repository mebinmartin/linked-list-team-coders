#include <stdio.h>
#include <stdlib.h>
struct Node {
int rollNo;
struct Node* next;
};
struct Node* createNode(int rollNo) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->rollNo = rollNo;
newNode->next = NULL;
return newNode;
}
void insertEnd(struct Node** head, int rollNo) {
struct Node* newNode = createNode(rollNo);
if (*head == NULL) {
*head = newNode;
return;
}
struct Node* temp = *head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
}
void display(struct Node* head) {
printf("Roll Numbers in Linked List: ");
while (head != NULL) {
printf("%d", head->rollNo);
if (head->next != NULL) printf(" -> ");
head = head->next;
}
printf("\n");
}
int main() {
struct Node* head = NULL;
insertEnd(&head, 101);
insertEnd(&head, 102);
insertEnd(&head, 103);
insertEnd(&head, 104);
display(head);
return 0;
}
