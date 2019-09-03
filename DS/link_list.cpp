#include <stdio.h>
#include <iostream>
using namespace std;

struct node{
  int roll;
  node *next;
};
node *root = NULL;

void append(int roll){
  if(root==NULL){
    root = new node();
    root->roll = roll;
    root->next = NULL;
  }
  else{
    node *current_node=root;
    while(current_node->next != NULL){
      current_node = current_node->next;
    }
    node *newnode = new node();
    newnode->roll = roll;
    newnode->next = NULL;
    current_node->next = newnode;
  }
}


void delete_node(int roll){
  node *current_node = root;
  node *previous_node = NULL;
  while(current_node->roll != roll){
    previous_node = current_node;
    current_node = current_node->next;
  }
  if(current_node==root){
    node *temp = root;
    root = root->next;
    delete(temp);
  }
  else{
    previous_node->next = current_node->next;
    delete(current_node);
  }
}

void insert(int roll1, int roll2){
  node *current_node = root;
  node *previous_node = NULL;
  while(current_node->roll != roll1){
    previous_node = current_node;
    current_node = current_node->next;
    printf("value of prev %d\n", previous_node->next->roll);
  }

  node *newnode = new node();
  newnode->roll = roll2;
  newnode->next = current_node;
  previous_node->next = newnode;

}


void print(){
  node *current_node = root;
  while(current_node->roll){
    printf("%d\n", current_node->roll);
    current_node = current_node->next;
  }
}

int main(){
  append(1);
	append(2);
	append(6);
  append(10);
  append(8);
  delete_node(10);
  insert(6, 7);
	print();

  return 0;
}