#ifndef _BOX_COLLOIDER_H_
#define _BOX_COLLOIDER_H_
#include "General\GameObject.h"
#include "Physics\Components\Collider.h"
#include "Physics\Components\Box.h"
#include "Rendering\Components\RenderComponent.h"


class BoxCollider : public Collider
{
private:
	Box boundingBox;

public:
	BoxCollider(GameObject * pParent);
	~BoxCollider();
	void LateUpdate(double dt);
	void Destroy();
	void Start();
	void Update(double dt);


	Box GetBounds()
	{
		return boundingBox;
	}

};

#endif