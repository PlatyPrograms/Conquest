#include <iostream>

typedef struct IntNode {
    int data;
    IntNode * next;
} IntNode;

class IntLinkedList {
public:
    IntNode * head;
    /*
     * Constructor
     */
    IntLinkedList() {
	head->next = NULL;
    }
    /* 
     * Adds a node with value val to the linked list
     */
    void addNode(int val) {
	IntNode * toAdd = new IntNode;
	toAdd->data = val;
	toAdd->next = NULL;
	IntNode * cur = head;
	while (cur->next) {
	    cur = cur->next;
	}
	cur->next = toAdd;
    }

    /*
     * Deletes the first node with value val it finds
     */
    void deleteNode(int val) {
	IntNode * cur = head;
	while (cur->next) {
	    if (cur->next->data == val) {
		cur->next = cur->next->next;
		return;
	    }
	    cur = cur->next;
	}
    }

    /*
     * Returns true if the linked list contains a node with value val
     */
    bool contains(int val){
	IntNode * cur = head;
	while (cur->next) {
	    if (cur->next->data == val) {
		return true;
	    }
	}
	return false;
    }
};

int main () {
    /*
     * For testing the linked list
     */
    // std::cout << "testing the linked list\n";
    // IntLinkedList test;
    // test.addNode(1);
    // test.addNode(2);
    // test.addNode(3);
    // test.addNode(4);
    // test.addNode(5);
    // std::cout << "added nodes 1-5\n";
    // IntNode * cur = test.head->next;
    // while (cur) {
    // 	std::cout << cur->data << "\n";
    // 	cur = cur->next;
    // }
    // std::cout << "printed the nodes\n";
    // test.deleteNode(3);
    // std::cout << "deleted node 3\n";
    // cur = test.head->next;
    // while (cur) {
    // 	std::cout << cur->data << "\n";
    // 	cur = cur->next;
    // }
    // std::cout << "all done!\n";
    return 0;
}
