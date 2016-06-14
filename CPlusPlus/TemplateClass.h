#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class t>
class MyQueue{
private:
	vector <t> data;
public:
	void add(const t &value);
	void print();
	void remove();
};

template <typename t>
void MyQueue<t>::add(const t &value){
	data.push_back(value);
}

template <typename t>
void MyQueue<t>::remove(){
	data.erase(data.begin() + 0, data.begin() + 1);
}

template <typename t>
void MyQueue <t>::print(){
//	vector<t>::iterator it1;
//	it1 = data.begin();
//	for (it1; it1 < data.end(); it1++){
//		cout << " " << *it1 << endl;
//	}
}

#endif