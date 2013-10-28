#pragma once

using namespace System;

class DistantAttacking
{
public:
	Int32 A;
	Int32 S;
	Int32 AP;
	Int32 BS;
	DistantAttacking(void);
};

class DistantAim
{
public:
	Int32 ArmorSave;
	Int32 InvulnerableSave;
	Int32 CoverSave;
	Int32 T;
	DistantAim(void);
};

class Conditions
{
public:
	Int32 HitCondition;
	Int32 SecondHitCondition;
	Int32 WoundCondition;
	Int32 SaveCondition;
	Conditions(void);
};

public ref class Results
{
public:
	Int32 Wounds;
	Int32 Hits;
	Int32 Saves;
	String^ HitCubes;
	String^ WoundCubes;
	String^ SaveCubes;
	array< Int32 >^ HitCubesArr;
	array< Int32 >^ WoundCubesArr;
	array< Int32 >^ SaveCubesArr;
	void Deleting(void);
	Results(void);
};

class Displacements
{
public:
	Displacements(void);
	Int32 WoundBlock;
	Int32 SaveBlock;
	Int32 SpacingInsideBlock;
	Int32 SpacingBetweenBlocks;
	Int32 CloseButton;
};