#include "Object.h"

BaseComponant::BaseComponant(Object* owner)
{
	this->Owner = owner;
	this->Type = "Base";
}

std::string BaseComponant::GetType()
{
	return Type;
}

void BaseComponant::Update()
{
	this->Owner->Output = "Output Editied:";// + rand();
}