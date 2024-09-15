#include <iostream>
using namespace std;
struct Node{
  int data;
  Node * next;
};
class Linked_list{
  Node*head;
  Node *tail;
  int size;
  public:
  Linked_list(){
    head = NULL;
    tail = NULL;
    size = 0;

  }
  void add_at_last(int x){
    Node* temp = new Node ();
    temp->data = x;
    temp->next = NULL;
    if(head== NULL){
        head =temp;
        tail = temp;
        size++;

    }
    else{
        tail->next=  temp;
        tail = tail->next;
        size++;
    }
  }
  void print(){
    Node*temp;
    temp = head;
    if(head == NULL){
        cout<<"linked list is empty"<<endl;
        return;
    }
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;


  }
  void add_at_beginning(int x){
    Node*temp =new Node();
    temp->data = x;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        tail = temp;
        size++;

    }

    else{
       temp->next=  head;
       head = temp;
       size++;
    }
  }
  void add_at_any_index(int index,int x){
    if(head == NULL && index !=0){
        cout<<"sorry please fill the previous spaces first"<<endl;
        return ;
    }
    Node*temp = head;
    
    int iterator = 0;
    Node* new_node = new Node();
    new_node->data = x;
    if(index ==0){
        new_node->next = head;
        head = new_node;
        size++;
        return ;
        
    }
    while(iterator <index-1 && temp != NULL){
        temp = temp->next;
        iterator ++;
    }
    if (temp == NULL){
        cout<<"Index out of bounds"<<endl;
        return ;
    }
    Node* holder;
    holder= temp->next;
    new_node->next = holder;
    temp->next = new_node;
    size++;


  }
  int search (int x){
    if(head ==NULL){
      cout<<"Linked list is empty so returning ";
      return -1;

    }
    bool found = false;
    int iterator = 0;
    Node* temp = head;
    while(temp != NULL){
      if(temp->data == x){
      found = true;
      break;
      }
      temp=temp->next;
      iterator++;
    }
    if(found == true){
      cout<<"Found so the index is ";
      return iterator;
    }
    else{
      cout<<"sorry it was not present so returning ";
      return -1;
    }
  }
  void modify(int index,int x){
    Node*temp = head;
    if(index <0){
      cout<<"why are you gay"<<endl;
      return ;
    }
    if(index>=size){
      cout<<"abay saal* pehlay pichli saari values fill ker"<<endl;
      return ;
    }
      int iterator = 0;
    while(iterator<index &&temp != NULL){
      temp= temp->next;
      iterator++;

    }
    if(temp == NULL){
      cout<<"index out of bounds"<<endl;
      return ;
    }
    temp->data = x;
    cout<<"modified"<<endl;
    
  }
  void delete_elem(int index){
    Node * temp = head;
    int iterator = 0;
    if(index<0){
      cout<<"why are you gay"<<endl;
      return ;
    }
    if(index>=size){
      cout<<"abay saal*"<<endl;
      return ;
    }
    if(head == NULL){
      cout<<"Linked list is empty"<<endl;
      return ;
    }
    if(index ==0){
      head = head->next;
      size--;
    }
    Node *previous;
    while(iterator<index && temp!= NULL){
         previous = temp;
         temp = temp->next;
         iterator++;
    }
    if(temp == NULL){
      cout<<"Index out of bounds"<<endl;
    }
    Node* holder = temp->next;
    previous->next = holder;
    size--;

  }
  ~Linked_list(){
    Node*temp = head;
    while(temp != NULL){
        Node* next_node = temp->next;
        delete temp;
        temp=  next_node;
    }
  }
};
int main() 
{
    Linked_list l1;
    l1.print();
    l1.add_at_last(23);
    l1.print();
    l1.add_at_last(34);
    l1.print();
    l1.add_at_last(44);
    l1.add_at_last(54);
    l1.add_at_last(64);
    l1.print();
    l1.add_at_beginning(74);
    l1.print();
    l1.add_at_any_index(1,69);
    l1.print();
    cout<<l1.search(44)<<endl;
    l1.print();
    cout<<l1.search(45)<<endl;
    cout<<l1.search(23)<<endl;
    l1.print();
    l1.modify(1,96);
    l1.print();
    l1.delete_elem(1);
    l1.print();
    l1.delete_elem(0);
    l1.print();
    l1.modify(0,24);
    l1.print();
    l1.modify(3,69);
    l1.print();
    l1.delete_elem(3);
    l1.print();

    
return 0;
}
