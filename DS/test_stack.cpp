#include<stdio.h>
#include<iostream>

using namespace std;

struct node {
    int roll;
    node *next;
};
node *root = NULL;

void push(int roll) {
    if (root == NULL) {
        root = new node();
        root->roll = roll;
        root->next = NULL;
    } else {
        node *currentNode = root;
        while (currentNode->next != NULL) {
            currentNode = currentNode->next;
        }
        node *newNode = new node();
        newNode->roll = roll;
        newNode->next = NULL;
        currentNode->next = newNode;
    }
}

void pop() {
    if (root == NULL) {
        printf("No data in list");
    } else if (root->next == NULL) {
        root = NULL;
    } else {
        node *lastNode = root;
        node *lastPreviousNode = NULL;
        while (lastNode->next != NULL) {
            lastPreviousNode = lastNode;
            lastNode = lastNode->next;
        }
        lastPreviousNode->next = NULL;
    }
}

void print() {
    node *currentNode = root;
    while (currentNode != NULL) {
        printf("%d\n", currentNode->roll);
        currentNode = currentNode->next;
    }
    printf("\n");
}

int main() {
    push(1);
    push(8);
    push(15);

    pop();
    pop();
   

    print();
    return 0;
}
