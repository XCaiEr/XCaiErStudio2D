#include "Object.h"
#include "Transform.h"
#include <map>

class GameObject : public Object
{
public:
	GameObject();
	~GameObject();

private:
	Transform* m_ptrTransform;
	GameObject* m_ptrParent;
	map<int, GameObject> m_mapChild;

};

GameObject::GameObject() 
{
}

GameObject::~GameObject()
{
}