
#ifndef CC_RAY_RESULT_CALLBACK_H
#define CC_RAY_RESULT_CALLBACK_H

#include "BulletCollision/CollisionDispatch/btCollisionWorld.h"

ATTRIBUTE_ALIGNED16(class) ccClosestRayResultCallback : public btCollisionWorld::ClosestRayResultCallback
{
private:
	/* data */
public:

	BT_DECLARE_ALIGNED_ALLOCATOR();

	// return true when pairs need collision
	virtual bool needsCollision(btBroadphaseProxy* proxy0) const
	{
		return (proxy0->m_collisionFilterGroup & m_collisionFilterMask) != 0;
	}
};

ATTRIBUTE_ALIGNED16(class) ccAllHitsRayResultCallback : public btCollisionWorld::AllHitsRayResultCallback
{
private:
	/* data */
public:

	BT_DECLARE_ALIGNED_ALLOCATOR();

	// return true when pairs need collision
	virtual bool needsCollision(btBroadphaseProxy* proxy0) const
	{
		return (proxy0->m_collisionFilterGroup & m_collisionFilterMask) != 0;
	}
};

#endif //CC_RAY_RESULT_CALLBACK_H