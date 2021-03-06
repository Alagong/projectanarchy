/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#ifndef RPG_PLUGIN_ACTION_SPAWN_H__
#define RPG_PLUGIN_ACTION_SPAWN_H__

#include <Vision/Samples/Engine/RPGPlugin/Action.h>

class RPG_Action_Spawn : public RPG_Action
{
public:
  RPG_Action_Spawn(RPG_Character *owner);

  virtual void Start(bool forced, RPG_ActionType_e prevAction, RPG_BaseEntity *interactionEntity, hkvVec3 const& interactionPosition) HKV_OVERRIDE;
  virtual void Tick(float const deltaTime) HKV_OVERRIDE;

protected:
  void PlayAnimation();

  VString m_behaviorTriggerVarName;
  bool m_animationPlayed;

  // TODO Spawn bug hack
  float m_animStartTime;
};

#endif  // RPG_PLUGIN_ACTION_SPAWN_H__

/*
 * Havok SDK - Base file, BUILD(#20130723)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2013
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available from salesteam@havok.com.
 * 
 */
