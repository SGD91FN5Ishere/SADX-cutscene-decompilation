#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00B0[] = { 0 };

void ev00B0_e_intro(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(104);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_CameraPerspective(1, 1, 0x22D8);
		EV_CameraPos(0, 0, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 0, 0x300, 0xBFF2, 0);
		EventSe_Play(0, 1333, 1800);
		createBoot(10, 50, 60, 20);
		createScanLine(128u, 0, 80u, 85u, 5);
		EV_SetPos(player, -167.36f, 114.88f, 0.25999999f);
		EV_SetAng(player, 0, 0x3FDE, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(2, Eggman, -143.89f, 108.75f, 12.23f, 0, 42748, 0);
		EV_Wait(1);
		EV_InitPlayer(2);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, -146.42f, 108.76f, -0.07f);
		EV_SetAng(eggman, 0, 0xBED8, 0);
		EV_Wait(120);
		EventSe_Stop(0);
		EV_SerifPlay(1171);
		EV_MsgW(0, msgTbl_ev00B0[TextLanguage][0]); //"\aExcellent!   All systems-full power!"
		EV_Wait(5);
		EventSe_Play(0, 1334, 1800);
		RumbleA(0, 0);
		EV_SetAction(eggman, &action_g_0010_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(20);
		BGM_Play(MusicIDs_thee102);
		EV_Wait(20);
		EV_SetAction(eggman, &action_g_0015_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 16);
		EV_Wait(35);
		EV_SetAction(player, &action_e_e0019_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_Wait(50);
		EV_MsgClose();
		RumbleA(0, 10);
		EventSe_Play(0, 867, 1800);
		EV_CameraPos(0, 1, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 1, 0x400, 0xBFF2, 0);
		EV_Wait(1);
		EventSe_Oneshot(868, 0, 0, 0);
		EV_CameraPos(0, 1, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 1, 0x200, 0xBFF2, 0);
		EV_Wait(1);
		EventSe_Stop(0);
		EV_CameraPos(0, 2, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 2, 0x300, 0xBFF2, 0);
		EV_Wait(2);
		EV_CameraPos(0, 1, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 1, 0x400, 0xBFF2, 0);
		EV_Wait(1);
		EV_CameraPos(0, 2, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 2, 0x200, 0xBFF2, 0);
		EventSe_Oneshot(868, 0, 0, 0);
		EV_Wait(2);
		EV_CameraPos(0, 1, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 1, 0x300, 0xBFF2, 0);
		EV_Wait(1);
		EV_CameraPos(0, 1, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 1, 0x200, 0xBFF2, 0);
		EV_Wait(1);
		EV_CameraPos(0, 2, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 2, 0x400, 0xBFF2, 0);
		EV_Wait(2);
		EventSe_Play(0, 868, 1800);
		EV_CameraPos(0, 1, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 1, 0x200, 0xBFF2, 0);
		EV_Wait(1);
		EV_CameraPos(0, 2, -152.67999f, 122.18f, -0.1f);
		EV_CameraAng(0, 2, 0x300, 0xBFF2, 0);
		EV_Wait(2);
		EV_CameraPos(0, 50, -161.77f, 127.83f, 0.34f);
		EV_CameraAng(0, 50, 0x44D, 0xC0F2, 0);
		EventSe_Play(0, 868, 1800);
		EV_Wait(50);
		EV_CameraPos(0, 10, -161.77f, 127.83f, 0.34f);
		EV_CameraAng(0, 10, 0x752, 0xE74F, 0);
		EventSe_Stop(0);
		EventSe_Play(0, 868, 1800);
		EV_Wait(30);
		EV_Wait(10);
		EV_CameraPos(0, 20, -161.77f, 127.83f, 0.34f);
		EV_CameraAng(0, 20, 0x752, 0x9B4F, 0);
		EventSe_Stop(0);
		EventSe_Play(0, 868, 1800);
		EV_Wait(50);
		EV_CameraPos(0, 10, -161.77f, 127.83f, 0.34f);
		EV_CameraAng(0, 10, 0x44D, 0xC0F2, 0);
		EventSe_Stop(0);
		EventSe_Play(0, 868, 1800);
		EV_Wait(30);
		EV_SerifPlay(1172);
		EV_MsgW(0, msgTbl_ev00B0[TextLanguage][1]); //"\aLook at me! I'm your brilliant creato"...
		EV_CameraPos(0, 30, -161.47f, 126.5f, 5.29f);
		EV_CameraAng(0, 30, 0, 0xCDF2, 0);
		EV_CameraPos(0, 30, -161.77f, 127.83f, 0.34f);
		EV_CameraAng(0, 30, 0xF04D, 0xC0F2, 0);
		EventSe_Stop(0);
		EventSe_Play(0, 868, 1800);
		EV_Wait(100);
		EventSe_Stop(0);
		deleteScanLine();
		EV_CameraPos(0, 0, -154.25999f, 114.4f, 4.75f);
		EV_CameraAng(0, 0, 0xFD00, 0x32F2, 0);
		EV_CameraPos(0, 300, -154.81f, 122.37f, 4.5599999f);
		EV_CameraAng(0, 300, 0xFD00, 0x32F2, 0);
		EV_Wait(50);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_0011_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1173);
		EV_Wait(10);
		EV_MsgW(0, msgTbl_ev00B0[TextLanguage][2]); //"\aYou're the second of my E-100\nmodel "...
		EV_CameraPos(0, 0, -157.0f, 120.64f, -8.3100004f);
		EV_CameraAng(0, 0, 0xFD00, 0x57F2, 0);
		EV_CameraPos(0, 200, -157.42999f, 127.62f, -8.0299997f);
		EV_CameraAng(0, 200, 0xFD00, 0x57F2, 0);
		EV_Wait(50);
		EV_SetPos(eggman, -140.31f, 108.74f, -0.07f);
		EV_SetAng(eggman, 0, 16467, 0);
		EV_MovePoint2(eggman, -64.199997f, 108.77f, 1.95f, 0.30000001f, 0.059999999f);
		createScanLine(0x80u, 0, 0x50u, 0x55u, 5);
		EV_CameraPos(0, 0, -159.19f, 128.89f, 0.51999998f);
		EV_CameraAng(0, 0, 0xEF51, 0xC0F2, 0);
		EV_CameraPos(0, 100, -160.11f, 129.28999f, 0.54000002f);
		EV_CameraAng(0, 100, 0xF500, 0xC0F2, 0);
		EV_Wait(120);
		deleteScanLine();
		EV_CameraPos(0, 0, -157.21001f, 130.92999f, -5.9000001f);
		EV_CameraAng(0, 0, 0xFD00, 0x5256, 0);
		EV_CameraPos(0, 80, -158.91f, 130.71001f, 6.73f);
		EV_CameraAng(0, 80, 0xFD00, 0x2956, 0);
		EV_Wait(70);
		EV_SerifPlay(1174);
		EV_MsgW(0, msgTbl_ev00B0[TextLanguage][3]); //"\aE-102!  Code name: Gamma."
		EV_MoveFree(eggman);
		EV_SetAction(eggman, &action_g_g0022_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 8);
		EV_Wait(10);
		EV_CameraPos(0, 0, -160.11f, 129.28999f, 0.54000002f);
		EV_CameraAng(0, 0, 0xFAD4, 0xBDF2, 0);
		createScanLine(0x80u, 0, 0x50u, 0x55u, 5);
		EV_WaitAction(eggman);
		deleteScanLine();
		EV_CameraPos(0, 0, -154.3f, 117.31f, 0.72000003f);
		EV_CameraAng(0, 0, 0xF700, 0x3EF2, 0);
		EV_CameraPos(0, 100, -153.27f, 131.27f, 0.75f);
		EV_CameraAng(0, 100, 0x300, 0x3EF2, 0);
		EV_SetAction(player, &action_e_e0019_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_MsgClose();
		EV_Wait(20);
		EV_SetAction(eggman, &action_g_0012_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_Wait(20);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(50);
		EV_SerifPlay(1175);
		EV_MsgW(0, msgTbl_ev00B0[TextLanguage][4]); //"\aGamma."
		EV_Wait(30);
		EV_CameraPos(0, 30, -114.82f, 126.23f, 0.23f);
		EV_CameraAng(0, 30, 0, 0x40F2, 0);
		EV_Wait(1);
		EV_SetPos(eggman, -102.29f, 108.77f, 6.0900002f);
		EV_SetAng(eggman, 0, 0xC000, 0);
		EV_MovePoint2(eggman, -140.31f, 108.74f, -0.07f, 0.30000001f, 0.059999999f);
		EV_SetAction(eggman, &action_g_g0002_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_MsgClose();
		EV_CameraPos(0, 0, -96.400002f, 109.65f, -39.82f);
		EV_CameraAng(0, 0, 0xB00, 0x56F2, 0);
		EV_Wait(28);
		EV_MsgW(0, msgTbl_ev00B0[TextLanguage][5]); //"\aThat's right!   \nYou will now obey o"...
		EV_SerifPlay(1176);
		EV_Wait(20);
		EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(130);
		EV_CameraPos(0, 0, -111.66f, 108.76f, 24.41f);
		EV_CameraAng(0, 0, 0xF00, 0x26F2, 0);
		EV_SetAction(eggman, &action_g_g0005_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(30);
		EV_CameraPos(0, 0, -112.72f, 165.42999f, -40.93f);
		EV_CameraAng(0, 0, 0xE600, 0x62EF, 0);
		EV_ClrAction(eggman);
		EV_SetPos(eggman, -140.31f, 108.74f, -0.07f);
		EV_SetAng(eggman, 0, 0x6D6B, 0);
		EV_SetAction(eggman, &action_g_g0002_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(eggman, -104.46f, 108.76f, -43.139999f, 0.30000001f, 0.059999999f);
		EV_Wait(100);
		EV_ClrAction(eggman);
		EV_ClrAction(player);
		break;
	case 2:
		EventSe_Close();
		EV_RemovePlayer(2);
		EV_InitPlayer(0);
		deleteBoot();
		deleteScanLine();
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}