////////////////////////////////////////////////////////////////////////////
//	Module 		: script_hit.h
//	Created 	: 06.02.2004
//  Modified 	: 24.06.2004
//	Author		: Dmitriy Iassenev
//	Description : XRay Script hit class
////////////////////////////////////////////////////////////////////////////

#pragma once

#include "alife_space.h"
#include "script_export_space.h"

struct SHit;
class CScriptGameObject;

class CScriptHit
{
public:
	float m_fPower;
	Fvector m_tDirection;
	shared_str m_caBoneName;
	CScriptGameObject* m_tpDraftsman;
	float m_fImpulse;
	int m_tHitType;
	u16 m_tpWeaponID;
	u32 bulletId;

public:
	IC CScriptHit();
	IC CScriptHit(const CScriptHit* tpLuaHit);
	IC CScriptHit(const SHit* tpHit);
	virtual ~CScriptHit();
	IC LPCSTR get_bone_name() const;
	IC void set_bone_name(LPCSTR bone_name);
DECLARE_SCRIPT_REGISTER_FUNCTION
};

add_to_type_list(CScriptHit)
#undef script_type_list
#define script_type_list save_type_list(CScriptHit)

#include "script_hit_inline.h"
