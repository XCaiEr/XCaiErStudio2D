#include "Component.h"

 struct Vecter3
{
	float x;
	float y;
	float z;
};

 struct Vector2
 {
	 float x;
	 float y;
 };

class Transform : public Component
{
public:
	Transform();
	~Transform();

	void Translate(Vector2 vct2Spead, Vector2 vct2);
private:
	Vecter3 m_vct3Position;
	Vecter3 m_vct3LocalPosition;
	Vector2 m_vct2Socal;
	float m_fRotation;
};

Transform::Transform()
{
}

Transform::~Transform()
{
}