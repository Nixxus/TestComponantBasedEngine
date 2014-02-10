#include "ObjectManager.h"

int ObjectManager::CreateNewObject()
{
	Objects.push_back(new ObjectComponants); // creating a new ObjectComponants automatically creates a new object
	return Objects.size() -1;

}

bool ObjectManager::AddComponants(string ComponantType, int objectNumber)
{
	if (ComponantType == "Read")
	{
		AddReadComponant(objectNumber);
		return true;
	}
	else if (ComponantType == "Write")
	{
		AddWriteComponant(objectNumber);
		return true;
	}
	else
	{
		return false;
	}
}

void ObjectManager::AddBaseComponant(int objectNumber, BaseComponant* Componant)
{
	Objects.at(objectNumber)->Componants.push_back(Componant);
}

void ObjectManager::AddReadComponant(int objectNumber)
{
	BaseComponant* componant = new ReadComponant(&Objects.at(objectNumber)->object);
	AddBaseComponant(objectNumber, componant);
}

void ObjectManager::AddWriteComponant(int objectNumber)
{
	BaseComponant* componant = new WriteComponant(&Objects.at(objectNumber)->object);
	AddBaseComponant(objectNumber, componant);
}

void ObjectManager::UpdateAllObjects()
{
	//For each componant of each object, run update.

	for(int i = 0; i < Objects.size(); i++)
	{
		for (int j = 0; j < Objects.at(i)->Componants.size(); j++)
		{
			Objects.at(i)->Componants.at(j)->Update();
		}
	}
}