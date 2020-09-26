#include<iostream>
#include<cstdlib>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* head=NULL;

void insert(int new_data){
    if(head==NULL){
            head = new Node();
            head->data=new_data;
            head->next=NULL;
    }else{
        struct Node* current_node;
        current_node = head;
        while(current_node->next != NULL){
            current_node = current_node->next;
        }
        struct Node* new_node = new Node();
        new_node->data = new_data;
        new_node->next = NULL;

        current_node->next = new_node;
    }
}

void display(){
    struct Node* temp;
    temp = head;
    while(temp!=NULL){
            cout<< temp->data <<" ";
            temp=temp->next;
    }
}

int main(){

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    display();

    return 0;
}
