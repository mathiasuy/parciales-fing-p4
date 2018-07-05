#include "SpecialIterator.h"	
	
	SpecialIterator::SpecialIterator(Node* n){
		this->current = n;
		this->stepSize = 1;
		this->forward = true;
	}

	SpecialIterator::~SpecialIterator(){
	}
	


	bool SpecialIterator::hasNext(){
		if (current == NULL)
			return false;
		Node* n = current;
		int i=stepSize;
		bool seguir = true;
		while (i>0){
			if (forward){
				if (n->hasNext()){
					n = n->getNext();
				}else{
					seguir = false;
				}
			}else{
				if (n->hasPrevious()){
					n = n->getPrevious();
				}else{
					seguir = false;
				}
			}
			i--;
		}
		return seguir;
	};

	Object SpecialIterator::next(){
		Node* n = current;
		for (int i=0; i<stepSize; i++){
			if (!this->hasNext())
				throw std::domain_error("Error");			
			if (forward){
				n = n->getNext();
			}else{
				n = n->getPrevious();			
			}
		}
		current = n;
		return n->getItem();
	};

	void SpecialIterator::setForward(){
		this->forward = true;
	};

	void SpecialIterator::setBackward(){
		this->forward = false;
	};

	void SpecialIterator::setStepSize(int i){
		this->stepSize = i;
	};