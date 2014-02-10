#include "BaseComponant.h"

BaseComponant::BaseComponant(Object* owner)
{
	this->Owner = owner;
	if (this->Type == "")
	{
		this->Type = "Base";
	}
}

std::string BaseComponant::GetType()
{
	return Type;
}

void BaseComponant::Update()
{
	this->Owner->Output = "Output Editied:";// + rand();
}