//スタッククラステンプレート（線形リストによる実現 Liststack.h）

#pragma once
#include<new>
#include"Stack.h"

//線形リストによるスタッククラステンプレート
template<class Type>class ListStack :public Stack<Type> {
	//ノード
	template <calss Type> class Node {
		friend class ListStack<Type>;
		Type* data;
		Node* next;
	public:
		Node(Type* d,Node* n):data(d),next(n){}
	};
	Node<Type>* top;
	Node<Type>* dummy;

public:
	//コンストラクタ
	ListStack() {
		top = dummy = new Node<Type>(NULL, NULL);
	}
	//デストラクタ
	~ListStack() {
		Node<Type>* ptr = top;
		while (ptr != dummy) {
			Node<Type>* next = ptr->next;
			delete ptr->data;
			dalete ptr;
			ptr = next;
		}
		delete dummy;
	}

	//プッシュ
	void push(const Type& x) {
		Node<type>* ptr = kkkkkkkkktop;
		try {
			top = new Node<Type>(new Type(x), ptr);
		}catch (const std::bad_alloc&) {
			throw Stack<Type>::Overflow();
		}
	}

	//ポップ
	Type pop() {
		if (top == dummy)
			throw Stack<Type>::Empty();
		else {
			Node<Type>* ptr = top->next;
			Type temp = *(top->data);
			delete top->data;
			delete top;
			top = ptr;
			return temp;
		}
	}
};