/*
  Name: Md Morshed Alam,
  ID: 2018100010018
*/

#include <stdio.h>
#include <iostream>
using namespace std;

struct node{
  int data;
  node *next;
};
node *root = NULL;

void push(int data){
  if(root==NULL){
    root = new node();
    root->data = data;
    root->next = NULL;
  }
  else{
    node *current_node=root;
    while(current_node->next != NULL){
      current_node = current_node->next;
    }
    node *newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    current_node->next = newnode;
  }
}

int pop(){
  if(root == NULL){
    printf("Can't pop cause your stack is empty\n");
  }
  if(!root->next){
    root = NULL;
  }
  else{
    node *current_node = root;
    node *prev_node = NULL;
    while(current_node->next != NULL){
      prev_node = current_node;
      current_node = current_node->next;
    }
    prev_node->next = NULL;
    int pop_value = current_node->data;
    printf("the value of pop: %d\n", pop_value);
    delete(current_node);
  }

  return 0;
}



void print(){
  if (root == NULL){
    printf("empty stack\n");
  }else{
    node *current_node = root;
    while(current_node != NULL){
      printf("%d\n", current_node->data);
      current_node = current_node->next;
    }
  }

}

int main(){
  push(1);
	push(2);
	push(6);
  push(10);
  push(8);
  pop();
  pop();
  pop();
  pop();
  pop();


	print();

  return 0;
}