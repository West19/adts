#include "StackL.h"
#include <iostream>
using namespace std;


Class StackL::Node
{
	public:
	int data;
	Node* link;
};
void StackL::size(){
data.size();
}
void StackL::pop ()
{
	Node*delPtr = frontPtr;
	  
	  frontPtr = frontPtr->link;
	  delete delPtr;
	}

 void StackL::push(auto val)
 {
 
Node*newPrt= new Node {val}
newPtr->link=frontPtr;
frontPtr=newPtr;
	
}
 void StackL::top()
 {
	  
	  
		Node* iPtr = frontPtr;
		return iPtr->data;
	
	 }
 }
 
 int StackL::clear(){
	 {
    while(num_elements > 0)
      remove(1);
}
	 }
