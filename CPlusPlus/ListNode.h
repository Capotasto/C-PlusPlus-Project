#ifndef LISTNODE_H
#define LISTNODE_H

// forward declaration of class List required to announce that class 
// List exists so it can be used in the friend declaration at line 13
template< typename NODETYPE > class List;

template< typename NODETYPE >
class ListNode{
	friend class List< NODETYPE >; // make List a friend

public:
    ListNode();
	ListNode(const NODETYPE &);
	NODETYPE getData() const;
private:
	NODETYPE data;
	ListNode< NODETYPE > *nextPtr;
    ListNode< NODETYPE > *previousPtr;
};

// constructor
template< typename NODETYPE >
ListNode< NODETYPE >::ListNode()
: data(""), nextPtr(0), previousPtr(0){}


// constructor
template< typename NODETYPE >
ListNode< NODETYPE >::ListNode(const NODETYPE &info)
: data(info), nextPtr(0), previousPtr(0){}

// return copy of data in node
template< typename NODETYPE >
NODETYPE ListNode< NODETYPE >::getData() const{
	return data;
}
#endif