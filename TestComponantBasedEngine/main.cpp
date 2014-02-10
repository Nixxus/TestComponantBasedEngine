//Entry point
#include "ObjectManager.h"
#include <iostream>
void main()
{
	ObjectManager Manager;

	Manager.CreateNewObject();

	Manager.AddComponants("Write", 0);
	Manager.AddComponants("Read", 0);

	Manager.UpdateAllObjects();

	cin.get();
}