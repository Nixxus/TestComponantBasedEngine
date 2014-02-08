

#ifndef OBJECT
#define OBJECT

#include <vector>
#include <string>
#include <iostream>
#include "BaseComponant.h"


#ifndef BASECOMPONANT
#define BASECOMPONANT
#include <string>

class Object;

class BaseComponant
{
	
public:
	BaseComponant(Object* owner);
	virtual void Update();
	std::string GetType();

private:
	Object* Owner;
	std::string Type;
};

#endif

class BaseComponant;

class Object
{
	friend class BaseComponant;
public:
	void AddComponant (BaseComponant*);
	//bool RemoveComponant(std::string Type);
	void Update();

private:
	std::vector<BaseComponant*> Componants;
	std::string Output;
};

#endif