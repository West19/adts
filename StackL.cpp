#include "StackL.h"

#include <iostream>
using namespace std;


int StackL::size(){
 return data.size();

}
void StackL::pop ()
{
	data.remove(1);
	}

 void StackL::push(auto val)
 {
  data.insert(val,1);
}
 int StackL::top()
 {
	  
	 return data.get(1);
	
	 }
 
 
 void StackL::clear()
 {
	 
  data.~List();

	 }
