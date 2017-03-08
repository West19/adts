#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 L1.insert(56,1);
 L1.insert(516,2);
 L1.insert(506,3);
 L1.insert(9,4);
 L1.insert(34,1);
 
 L2.insert(1,1);
 L2.insert(11,2);
 L2.insert(111,1);
 L2.insert(1111,4);
 
 
for (int i=1 ; i< L1.size()+1; i++)
	{
		cout << L1.get(i) << " ";
		
	}
	cout <<endl;
	for (int i=1; i< L2.size()+1; i++)
	{
		cout << L2.get(i) << " ";
		
	}
	cout << endl;
}
