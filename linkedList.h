#include <iostream>
using namespace std;

class Node {
  public: 
    int info;
    Node *next;
};

class List {
  public:
    Node *HEAD;
    Node *TAIL;
    List();
    ~List();
    bool isEmpty();
    void addToHead(int data);
    void add(int data, Node *predecessor);
    void addToTail(int data);
    void removeFromHead();
    void remove(int data);
    bool search(int data);
    void traverse();
    bool retrieve(int data, Node *outputptr);
};

