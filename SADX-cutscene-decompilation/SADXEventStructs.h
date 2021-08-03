#pragma once
#include "SADXModLoader.h"

struct PADREC_DATA
{
	BYTE on;
	BYTE angle;
	BYTE stroke;
};

struct PADREC_DATA_TAG
{
	PADREC_DATA** data;
	int size;
};

struct CutsceneData_
{
	void(__cdecl* Function)(int a1);
	PVMEntry* Textures;
};