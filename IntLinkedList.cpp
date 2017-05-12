struct IntNode {
    int data;
    IntNode * next;
}

class IntLinkedList {
public:
    IntNode head;
    void addNode(int val);
    void deleteNode(int val); // shouldn't be necessary
    bool contains(int val);
    IntLinkedList();
private:
    /* 
     * Adds a node with value val to the linked list
     */
    void IntLinkedList::addNode(int val) {
	IntNode * toAdd = new IntNode;
	toAdd->data = val;
	toAdd->next = NULL;
	IntNode cur = head;
	while (cur->next) {
	    cur = cur->next;
	}
	cur->next = toAdd;
    }

    void IntLinkedList::deleteNode(int val) {
	IntNode cur = head;
	while (cur->next) {
	    if (cur->next.data == val) {
		cur.next = cur->next.next;
	    }
	}
    }

    bool IntLinkedList::contains(int val){
	IntNode cur = head;
	while (cur->next) {
	    if (cur->next.data == val) {
		return true;
	    }
	}
	return false;
    }
}
