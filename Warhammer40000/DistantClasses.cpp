#include "StdAfx.h"
#include "DistantClasses.h"

DistantAttacking::DistantAttacking(void)
{
}

DistantAim::DistantAim(void)
{
	ArmorSave = 7;
	InvulnerableSave = 7;
	CoverSave = 7;
}

Conditions::Conditions(void)
{
	HitCondition = 7;
	SecondHitCondition = 7;
	WoundCondition = 7;
	SaveCondition = 7;
}

Results::Results(void)
{
	Wounds = 0;
	Hits = 0;
	Saves = 0;
}

void Results::Deleting(void)
{
	delete HitCubes;
	delete SaveCubes;
	delete WoundCubes;
	delete HitCubesArr;
	delete SaveCubesArr;
	delete WoundCubesArr;
}

Displacements::Displacements(void)
{
	WoundBlock = 0;
	SaveBlock = 0;
	SpacingBetweenBlocks = 30;
	SpacingInsideBlock = 15;
	CloseButton = 0;
}
