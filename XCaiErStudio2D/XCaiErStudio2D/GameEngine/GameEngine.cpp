#include "GameEngine.h"

Engine::Engine()
{
	m_pHGE = hgeCreate(HGE_VERSION);
	m_pHGE->System_SetState(HGE_WINDOWED, true);
	m_pHGE->System_SetState(HGE_USESOUND, false);
	m_pHGE->System_SetState(HGE_TITLE, "Crazy Plane - Version 0.1beta");
}

Engine::~Engine()
{
}

void Engine::Run()
{
	if (m_pHGE->System_Initiate())
	{
		m_pHGE->System_Start();
	} 
	else
	{
		MessageBoxA(NULL, m_pHGE->System_GetErrorMessage(), "Error",
			MB_OK | MB_ICONERROR | MB_APPLMODAL);
	}
}

HGE* Engine::GetHGEPtr()
{
	return m_pHGE;
}
