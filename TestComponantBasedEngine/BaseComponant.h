#include <string>
#include "Object.h"

#ifndef BASECOMPONANT
#define BASECOMPONANT

class BaseComponant
{
	
public:
	BaseComponant(Object* owner);
	virtual void Update();
	std::string GetType();

protected:
	Object* Owner;
	std::string Type;
};
#endif