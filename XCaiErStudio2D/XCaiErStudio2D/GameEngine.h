#include "HGE/include/hge.h"
#include "Object.h"
#include "Resources.h"
#include <list>
using namespace std;
class Engine
{
public:
	Engine();
	~Engine();
	
	void Run();

private:
	HGE* m_pHGE;
	list<Object> m_lstHire;
	list<Resources> m_lstProject;
};

Engine::Engine()
{
}

Engine::~Engine()
{
}
