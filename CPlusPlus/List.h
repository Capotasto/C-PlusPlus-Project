#ifndef LIST_H
#define LIST_H

#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include "Listnode.h" // ListNode class definition

template< typename NODETYPE >
class List{
public:
	List(); // constructor
	~List(); // destructor
	void insertAtFront(const NODETYPE &);
	bool removeFromFront();
    void insertAtBack(const NODETYPE &);
    bool removeFromBack();
	bool isEmpty() const;
	void printAsc() const;
    void printDesc() const;
    string getValue(int index) const;
    int getSize()const;
    ListNode<NODETYPE>* getNode(int index)const;

private:
	ListNode< NODETYPE > *firstPtr; // pointer to first node
	ListNode< NODETYPE > *lastPtr; // pointer to last node

	// utility function to allocate new node
	ListNode< NODETYPE > *getNewNode(const NODETYPE &);
}; // end class List

// default constructor
template< typename NODETYPE >
List< NODETYPE >::List(): firstPtr(0), lastPtr(0){}

// destructor
template< typename NODETYPE >List< NODETYPE >::~List(){
	if (!isEmpty()){
		cout << "Destroying nodes ...\n";

		ListNode< NODETYPE > *currentPtr = firstPtr;
		ListNode< NODETYPE > *tempPtr;

		while (currentPtr != 0){
			tempPtr = currentPtr;
			cout << tempPtr->data << '\n';
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		}
	}
	cout << "All nodes destroyed\n\n";
}

// insert node at front of list
template< typename NODETYPE >
void List< NODETYPE >::insertAtFront(const NODETYPE &value){
	ListNode< NODETYPE > *newPtr = getNewNode(value); // new node

    if (isEmpty()){
		firstPtr =newPtr;
        lastPtr = newPtr;
    }else {
		newPtr->nextPtr = firstPtr; // point new node to previous 1st node
        firstPtr->previousPtr = newPtr;
		firstPtr = newPtr; // aim firstPtr at new node
	}
}
// delete node from front of list
template< typename NODETYPE >
bool List< NODETYPE >::removeFromFront(){
	if (isEmpty())
		return false;
	else{
		ListNode< NODETYPE > *tempPtr = firstPtr;
        if (firstPtr == lastPtr){
			firstPtr = lastPtr = 0;
        }else{
			firstPtr = firstPtr->nextPtr; // point to previous 2nd nod
        }

        cout << "Deleted front node. The value is "<< tempPtr->data << endl;
		delete tempPtr;
		return true;
	}
}

template< typename NODETYPE >
void List< NODETYPE >::insertAtBack(const NODETYPE &value){
    ListNode< NODETYPE > *newPtr = getNewNode(value); // new node
    
    if (isEmpty()){
        firstPtr = lastPtr = newPtr;
    }else{
        newPtr->previousPtr = lastPtr;
        lastPtr->nextPtr = newPtr;
        lastPtr = newPtr; // aim firstPtr at new node
        
    }
}

// delete node from front of list
template< typename NODETYPE >
bool List< NODETYPE >::removeFromBack(){
    if (isEmpty()){
        return false;
    }else{
        ListNode< NODETYPE > *tempPtr = lastPtr;
        
        if (firstPtr == lastPtr){
            firstPtr = lastPtr = 0;
        }else{
            lastPtr = lastPtr->previousPtr; // point to previous 2nd node
        }
        cout << "Deleted back node. The value is "<< tempPtr->data << endl;
        delete tempPtr; // reclaim previous front node
        return true; // delete successful
    }
}
// is List empty?
template< typename NODETYPE >
bool List< NODETYPE >::isEmpty() const{
	return firstPtr == 0;
}

// return pointer to newly allocated node
template< typename NODETYPE >
ListNode< NODETYPE > *List< NODETYPE >::getNewNode(const NODETYPE &value){
	return new ListNode< NODETYPE >(value);
}

// display contents of List
template< typename NODETYPE >
void List< NODETYPE >::printAsc() const{
	if (isEmpty()) {
		cout << "The list is empty\n\n";
		return;
	}

	ListNode< NODETYPE > *currentPtr = firstPtr;

	cout << "The list is: ";

	while (currentPtr != 0){
		cout << currentPtr->data << ' ';
		currentPtr = currentPtr->nextPtr;
	}

	cout << "\n\n";
}

// display contents of List
template< typename NODETYPE >
void List< NODETYPE >::printDesc() const{
    if (isEmpty()) {
        cout << "The list is empty\n\n";
        return;
    }
    
    ListNode< NODETYPE > *currentPtr = lastPtr;
    
    cout << "The list is: ";
    
    while (currentPtr != 0){
        cout << currentPtr->data << ' ';
        currentPtr = currentPtr->previousPtr;
    }
    
    cout << "\n\n";
}
template< typename NODETYPE >
string List< NODETYPE >::getValue(int index) const{
    string value;
    if (isEmpty()) {
        return "";
    }
    
    ListNode< NODETYPE > *currentPtr = firstPtr;
    int i = 0;
    while (currentPtr != 0){
        if (i == index) {
            return currentPtr->data;
        }
        currentPtr = currentPtr->nextPtr;
        i++;
    }
    return value;
}
template< typename NODETYPE >

int List< NODETYPE >::getSize()const{
    if (isEmpty()) {
        return 0;
    }
    ListNode< NODETYPE > *currentPtr = firstPtr;
    int i = 0;
    while (currentPtr != 0){
        i++;
        currentPtr = currentPtr->nextPtr;
    }
    return i;
}
template< typename NODETYPE >
ListNode<NODETYPE>* List< NODETYPE >::getNode(int index)const{
    if (isEmpty()) {
        return NULL;
    }
    ListNode< NODETYPE > *currentPtr = firstPtr;
    int i = 0;
    while (currentPtr != 0){
        if (i == index) {
            return currentPtr;
        }
        currentPtr = currentPtr->nextPtr;
        i++;
    }
    return NULL;
};


#endif