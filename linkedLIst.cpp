#include "linkedList.h"

List::List() {
  HEAD = NULL;
  TAIL = NULL;
}

List::~List() {

}

void List::addToHead(int data) {
  Node *newNode = new Node;
  newNode->info = data;
  newNode->next = HEAD;
  HEAD = newNode;
  if(TAIL == NULL)
    TAIL = HEAD;
}

void List::addToTail(int data) {
  Node *newNode = new Node;
  newNode->info = data;
  newNode->next = NULL;
  TAIL->next = newNode;
  TAIL = newNode;
}

void List::add(int data, Node *predecessor) {
  Node *newNode = new Node;
  newNode->info = data;
  newNode->next = predecessor->next;
  predecessor->next = newNode;
}

void List::removeFromHead() {
  Node *nodeToDelete = HEAD;
  HEAD = nodeToDelete->next;
  nodeToDelete = NULL;
}

void List::remove(int data) {
  
}

bool List::isEmpty() {

}

bool List::search(int data) {
  Node *temp = HEAD;
  while(temp!=NULL){
    if (temp->info==data)
      return true;
    else
      temp = temp->next;
  }
  return false;
}

void List::traverse() {
  Node *temp = HEAD;
  while(temp!=NULL){
    cout << temp->info << " ";
    temp = temp->next;
  }
}


int main() {
  List l1;
  cout << "Adding 2 to Head: ";
  l1.addToHead(2);
  l1.traverse();  cout << endl;
  cout << "Adding 4 to Tail: ";
  l1.addToTail(4);
  l1.traverse(); cout << endl;
  cout << "Adding 1 to Head: ";
  l1.addToHead(1);
  l1.traverse(); cout << endl;
  cout << "Removing element from head: ";
  l1.removeFromHead();
  l1.traverse(); cout << endl;
  cout << "Searching for 8(0: not in list 1: in list): ";
  cout<<l1.search(8); cout << endl;
  cout << "Adding 8 to Tail:";
  l1.addToTail(8);
  l1.traverse(); cout << endl;
  cout << "Searching for 8(0: not in list 1: in list): ";
  cout<<l1.search(8); cout << endl;
  return 0;
  cout << "HW";
} 

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Hello World";
//   return 0;
// }