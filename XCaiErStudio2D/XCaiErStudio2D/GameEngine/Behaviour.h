#include "Component.h"

class Behaviour : public Component
{
public:
	Behaviour();
	~Behaviour();

	void Awake();
	void Start();
	void Update(float fDelTIme);
	void FixedUpdate(float fDelTime);

private:

};

Behaviour::Behaviour()
{
}

Behaviour::~Behaviour()
{
}