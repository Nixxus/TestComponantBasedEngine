#include "Object.h"

void Object::AddComponant(BaseComponant* componant)
{
	this->Componants.push_back(componant);
}

void Object::Update()
{
	for (int i = 0;i <Componants.size(); i++)
	{
		Componants.at(i)->Update();
		std::cout << Output << std::endl;
	}
	
}

