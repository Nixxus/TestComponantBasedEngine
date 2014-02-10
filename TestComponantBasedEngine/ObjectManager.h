#include <vector>

#include "Object.h"
#include "ComponantsList.h"

using namespace std;

class ObjectManager
{
public:
	int CreateNewObject();
	bool AddComponants(string ComponantType, int objectNumber);
	void UpdateAllObjects();

private:
	struct ObjectComponants
	{
		Object object;
		vector<BaseComponant*> Componants;
	};

	vector<ObjectComponants*> Objects;

	void AddBaseComponant(int objectNumber, BaseComponant* Componant);
	void AddWriteComponant(int objectNumber);
	void AddReadComponant(int objectNumber);
};