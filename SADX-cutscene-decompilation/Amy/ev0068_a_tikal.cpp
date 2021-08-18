#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0068_a_tikal(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		CHAO1 = 0;
		CHAO2 = 0;
		CHAO3 = 0;
		CHAO4 = 0;
		W_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_tical);
		SetBankDir(97);
		EventSe_Init(5);
		CreateChaos0(-66.0f, -602.29999f, 234.60001f, 12288, 41472, 0, 360);
		SetWaterChaos0();
		EV_CreatePlayer(2, Tikal, 0.0f, 0.0f, 511.5f, 1264, 45904, 0);
		EV_CreateObjectFunc(&CHAO1, EV_Alife, -123.4f, 0.0f, 313.45001f, 64768, 41472, 0);
		EV_CreateObjectFunc(&CHAO2, EV_Alife, -139.0f, 0.0f, 346.60001f, 64768, 4096, 0);
		EV_CreateObjectFunc(&CHAO3, EV_Alife, -145.0f, 0.0f, 363.60001f, 64768, 5376, 0);
		EV_CreateObjectFunc(&CHAO4, EV_Alife, -135.0f, 0.0f, 358.79999f, 64768, 4864, 0);
		EV_Wait(1);
		EV_SetMode(CHAO1, 0);
		EV_SetMode(CHAO2, 0);
		EV_SetMode(CHAO3, 0);
		EV_SetMode(CHAO4, 0);
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_SetPos(player, -66.800003f, -0.0099999998f, 400.35001f);
		EV_SetAng(player, 1264, 44800, 0);
		tikal = EV_GetPlayer(2);
		EV_SetPos(tikal, -80.0f, 0.0f, 369.5f);
		EV_SetAng(tikal, 0, 48896, 0);
		EV_LookPoint(tikal, -115.6f, 1.5f, 368.79999f);
		EV_SetPos(CHAO1, -107.4f, 1.5f, 361.25f);
		EV_SetAng(CHAO1, 0, 52224, 64512);
		EV_SetPos(CHAO2, -113.0f, 1.5f, 366.60001f);
		EV_SetAng(CHAO2, 0, 51200, 64512);
		EV_SetPos(CHAO3, -117.0f, 1.5f, 379.60001f);
		EV_SetAng(CHAO3, 0, 47872, 64512);
		EV_SetPos(CHAO4, -109.0f, 1.5f, 374.79999f);
		EV_SetAng(CHAO4, 0, 47872, 64512);
		EV_SetAction(CHAO1, &action_al_e0001_al_model, ADV03_TEXLISTS[0], 0.80000001f, 1, 0);
		EV_SetAction(CHAO2, &action_al_e0001_al_model, ADV03_TEXLISTS[0], 0.69999999f, 1, 0);
		EV_SetAction(CHAO3, &action_al_e0001_al_model, ADV03_TEXLISTS[0], 0.60000002f, 1, 0);
		EV_SetAction(CHAO4, &action_al_e0001_al_model, ADV03_TEXLISTS[0], 1.0f, 1, 0);
		EV_Alife_FaceChange(CHAO1, 2);
		EV_Alife_FaceChange(CHAO2, 2);
		EV_Alife_FaceChange(CHAO3, 2);
		EV_Alife_FaceChange(CHAO4, 2);
		EV_SetShadow(CHAO1, 0.60000002f);
		EV_SetShadow(CHAO2, 0.60000002f);
		EV_SetShadow(CHAO3, 0.60000002f);
		EV_SetShadow(CHAO4, 0.60000002f);
		EV_CameraPos(1, 0, -69.330002f, 5.8000002f, 409.84f);
		EV_CameraAng(1, 0, 512, 2560, 0);
		EV_CameraPos(0, 50, -68.0f, 5.75f, 410.34f);
		EV_CameraAng(0, 50, 512, 4864, 0);
		EV_Wait(50);
		EV_CameraPos(0, 100, -66.220001f, 3.55f, 413.79999f);
		EV_CameraAng(0, 100, 1024, 4864, 0);
		EV_Wait(100);
		EV_SetPos(CHAO3, -128.0f, 1.5f, 371.87f);
		EV_SetAng(CHAO3, 0, 47872, 64768);
		EV_SetPos(CHAO4, -129.0f, 1.5f, 374.79999f);
		EV_SetAng(CHAO4, 0, 47872, 64768);
		EV_CameraPos(1, 0, -129.66f, 0.75f, 379.60001f);
		EV_CameraAng(1, 0, 3840, 59392, 64768);
		EV_CameraPos(0, 160, -123.94f, 0.73000002f, 385.20999f);
		EV_CameraAng(0, 160, 3840, 57344, 0);
		EV_Wait(60);
		EV_SetPos(CHAO4, -101.0f, 1.5f, 377.79999f);
		EV_SetAng(CHAO4, 0, 47872, 64768);
		EV_Wait(10);
		EV_SetPos(CHAO3, -100.0f, 1.5f, 382.85999f);
		EV_SetAng(CHAO3, 0, 47872, 64768);
		moveObject(CHAO3, -100.0f, 1.5f, 382.85999f, -104.0f, 1.5f, 372.85999f, 140);
		EV_Wait(90);
		EV_CameraAng(0, 55, 3840, 56576, 0);
		EV_CameraPos(0, 55, -121.54f, 0.87f, 383.14001f);
		EV_Wait(55);
		EV_CameraPos(1, 0, -85.480003f, 3.8599999f, 371.88f);
		EV_CameraAng(1, 0, 62464, 56832, 0);
		EV_CameraPos(1, 25, -84.120003f, 3.8599999f, 373.22f);
		EV_SerifPlay(919);
		EV_Msg(msgTbl_ev0068[TextLanguage][0]); //"\aYou're the... Chao."
		EV_SetAction(tikal, &action_j_j0002_tikal, &TIKAL_TEXLIST, 0.40000001f, 0, 4);
		EV_WaitAction(tikal);
		EV_SetPos(player, -66.800003f, -0.0099999998f, 420.35001f);
		EV_SetAng(player, 1264, 44800, 0);
		EV_SetPos(tikal, -100.0f, 0.0f, 369.60001f);
		EV_SetAng(tikal, 0, 48896, 0);
		EV_SetPos(CHAO3, -95.0f, 0.86000001f, 370.0f);
		EV_SetAng(CHAO2, 0, 19456, 4352);
		EV_SetAng(CHAO4, 0, 17152, 4096);
		EV_SetAction(CHAO1, &action_al_walk_al_model, *ADV03_TEXLISTS, 1.0f, 1, 0);
		EV_SetAction(CHAO2, &action_al_walk_al_model, *ADV03_TEXLISTS, 0.89999998f, 1, 0);
		EV_SetAction(CHAO3, &action_al_walk_al_model, *ADV03_TEXLISTS, 0.89999998f, 1, 0);
		EV_SetAction(CHAO4, &action_al_walk_al_model, *ADV03_TEXLISTS, 0.81999999f, 1, 0);
		moveObject(CHAO1, -107.4f, 1.5f, 361.25f, -109.3f, 1.45f, 360.79001f, 34);
		moveObjectAngle2(CHAO2, -113.0f, 1.5f, 366.60001f, -118.4f, 1.35f, 365.29999f, 0, 3072, 4352, 0, 3072, 16128, 35);
		moveObject(CHAO3, -104.0f, 1.5f, 379.85999f, -108.8f, 1.45f, 380.0f, 37);
		moveObject(CHAO4, -104.0f, 1.5f, 377.79999f, -117.33f, 1.45f, 374.57999f, 36);
		EV_CameraPos(1, 0, -127.84f, 1.841f, 370.92001f);
		EV_CameraAng(1, 0, 2560, 49920, 0);
		EV_MsgClose();
		EventSe_Oneshot(1336, 10, 80, 0);
		EV_Wait(10);
		EventSe_Oneshot(1337, 0, -20, 0);
		EV_Wait(10);
		EventSe_Oneshot(1337, 0, -20, 0);
		EV_Wait(17);
		EV_SetAction(CHAO1, &action_al_e0001_al_model, *ADV03_TEXLISTS, 0.80000001f, 1, 0);
		EV_SetAction(CHAO2, &action_al_e0001_al_model, *ADV03_TEXLISTS, 0.69999999f, 1, 0);
		EV_SetAction(CHAO3, &action_al_e0001_al_model, *ADV03_TEXLISTS, 0.60000002f, 1, 0);
		EV_SetAction(CHAO4, &action_al_e0001_al_model, *ADV03_TEXLISTS, 1.0f, 1, 0);
		EV_SetPos(CHAO1, -126.3f, 1.45f, 359.79001f);
		EV_SetPos(CHAO2, -124.4f, 1.45f, 365.29999f);
		EV_SetPos(CHAO3, -123.0f, 1.45f, 375.29999f);
		EV_SetPos(CHAO4, -119.83f, 1.45f, 367.78f);
		EV_SetAng(CHAO1, 0, 51200, 64512);
		EV_SetAng(CHAO2, 0, 51200, 64512);
		EV_SetAng(CHAO3, 0, 46848, 64768);
		EV_SetAng(CHAO4, 0, 47616, 64512);
		EV_Wait(1);
		EV_CameraPos(1, 0, -108.12f, 6.4200001f, 370.70001f);
		EV_CameraAng(1, 0, 2048, 50432, 0);
		EV_CameraPos(1, 120, -107.12f, 5.4200001f, 370.70001f);
		EV_CameraAng(1, 120, 2048, 51200, 0);
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "CCCCCCC");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "BCE");
		}
		EV_SerifPlay(920);
		EV_MsgW(60, msgTbl_ev0068[TextLanguage][1]); //"\aDon't be afraid. \nYou're safe with m"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPos(1, 0, -96.040001f, 10.0f, 376.97f);
		EV_CameraAng(1, 0, 62464, 9216, 0);
		EV_CameraPos(1, 90, -102.1f, 7.9699998f, 374.20001f);
		EV_CameraAng(1, 90, 62464, 12032, 0);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(100);
		EV_SetPos(player, -66.800003f, -0.0099999998f, 400.35001f);
		EV_SetAng(player, 1264, 36864, 0);
		EV_SetPos(CHAO1, -126.3f, 1.45f, 359.79001f);
		EV_SetPos(CHAO2, -124.4f, 1.45f, 365.29999f);
		EV_SetPos(CHAO3, -123.0f, 1.45f, 375.29999f);
		EV_SetPos(CHAO4, -117.83f, 1.45f, 367.78f);
		EV_SetAng(CHAO1, 0, 52224, 64512);
		EV_SetAng(CHAO2, 0, 51712, 64512);
		EV_SetAng(CHAO3, 0, 45056, 64768);
		EV_SetAng(CHAO4, 0, 47360, 64512);
		moveObject(CHAO4, -117.83f, 1.45f, 367.78f, -112.33f, 1.45f, 368.0f, 50);
		EV_CameraPos(1, 0, -106.84f, 9.6000004f, 369.44f);
		EV_CameraAng(1, 0, 58112, 13824, 0);
		EV_Wait(51);
		EV_SetAction(CHAO4, &action_al_e0001_al_model, *ADV03_TEXLISTS, 1.0f, 1, 0);
		EventSe_Oneshot(1333, 60, 0, 0);
		EV_Wait(21);
		EventSe_Oneshot(1333, 80, 0, 0);
		EV_SetPos(CHAO4, -105.5f, 1.45f, 369.60001f);
		EV_SetAng(CHAO4, 0, 47360, 64512);
		EV_CameraPos(1, 0, -90.400002f, 2.6800001f, 364.39999f);
		EV_CameraAng(1, 0, 4096, 21248, 0);
		EV_CameraPos(1, 75, -87.449997f, 6.4699998f, 368.70001f);
		EV_CameraAng(1, 75, 63232, 16896, 0);
		EV_SetAction(tikal, &action_j_j0004_tikal, &TIKAL_TEXLIST, 1.1f, 0, 0);
		EventSe_Oneshot(1333, 100, 0, 0);
		moveObject(CHAO4, -105.5f, 1.45f, 369.60001f, -105.5f, 2.5999999f, 369.60001f, 50);
		EV_Wait(75);
		EV_ClrAction(tikal);
		EV_CameraPos(1, 0, -104.45f, 9.1599998f, 378.54001f);
		EV_CameraAng(1, 0, 60416, 56576, 1024);
		EV_CameraPos(0, 120, -113.2f, 12.49f, 379.54001f);
		EV_SetPos(CHAO4, -102.2f, 4.3000002f, 369.60001f);
		EV_SetAng(CHAO4, 0, 16128, 0);
		EV_SetAction(tikal, &action_j_j0005_tikal, &TIKAL_TEXLIST, 0.5f, 1, 0);
		EV_SetAction(CHAO4, &action_al_e0008_al_model, *ADV03_TEXLISTS, 0.5f, 1, 0);
		EV_Alife_FaceChange(CHAO4, 2);
		moveObject(CHAO1, -126.3f, 1.45f, 359.79001f, -109.0f, 1.45f, 361.10001f, 90);
		moveObject(CHAO2, -124.4f, 1.45f, 365.29999f, -112.2f, 1.45f, 367.0f, 100);
		moveObject(CHAO3, -123.0f, 1.45f, 375.29999f, -110.0f, 1.45f, 375.76001f, 80);
		EV_Wait(120);
		EV_SetPos(CHAO1, -106.0f, 1.45f, 361.10001f);
		EV_SetPos(CHAO2, -113.2f, 1.45f, 367.0f);
		EV_SetPos(CHAO3, -111.0f, 1.45f, 375.76001f);
		EV_SetAng(CHAO1, 0, 48128, 64512);
		EV_SetAng(CHAO2, 0, 51712, 64512);
		EV_SetAng(CHAO3, 0, 45056, 64768);
		EV_CameraPos(1, 0, -119.08f, 1.6f, 369.60001f);
		EV_CameraAng(1, 0, 1792, 56576, 1024);
		EV_CameraPos(0, 140, -118.6f, 7.3699999f, 377.95001f);
		EV_CameraAng(0, 140, 63232, 55552, 1024);
		EV_Wait(20);
		EventSe_Oneshot(1333, 100, 120, 0);
		EV_Wait(40);
		EventSe_Oneshot(1333, 110, -100, 0);
		EV_Wait(20);
		EventSe_Oneshot(1333, 100, -20, 0);
		EV_Wait(30);
		EventSe_Oneshot(1333, 90, 80, 0);
		EV_Wait(10);
		EventSe_Oneshot(1333, 20, 30, 0);
		EV_Wait(10);
		EventSe_Oneshot(1333, 90, -90, 0);
		EV_CameraPos(1, 0, -87.290001f, 35.419998f, 257.0f);
		EV_CameraAng(1, 0, 57600, 54784, 63744);
		EV_CameraPos(1, 80, -91.300003f, 31.1f, 258.32001f);
		EventSe_Oneshot(1335, 110, -100, 0);
		createWaveCtrl(-73.0f, -0.60000002f, 223.60001f, 0.25f, 1.0f, 6, 18, 1);
		EV_Wait(30);
		EventSe_Oneshot(1335, 100, -80, 0);
		createWaveCtrl(-73.0f, -0.60000002f, 223.60001f, 0.2f, 1.0f, 7, 22, 1);
		EV_Wait(30);
		EventSe_Oneshot(1335, 110, -90, 0);
		createWaveCtrl(-73.0f, -1.3f, 223.60001f, 0.2f, 1.0f, 6, 18, 2);
		EV_Wait(30);
		EventSe_Oneshot(1335, 110, -20, 0);
		createWaveCtrl(-66.0f, -2.3f, 234.60001f, 0.30000001f, 1.0f, 6, 19, 3);
		EV_Wait(25);
		createWaveCtrl(-66.0f, -2.3f, 234.60001f, 0.30000001f, 1.0f, 6, 19, 3);
		EventSe_Oneshot(1335, 100, 10, 0);
		EV_Wait(40);
		EV_SetPos(tikal, -100.0f, 0.0f, 349.60001f);
		EV_SetAng(tikal, 0, 45824, 0);
		EV_SetPos(CHAO1, -126.3f, 1.45f, 339.79001f);
		EV_SetPos(CHAO2, -124.4f, 1.45f, 345.29999f);
		EV_SetPos(CHAO3, -123.0f, 1.45f, 355.29999f);
		EV_SetAng(CHAO1, 0, 52224, 64512);
		EV_SetAng(CHAO2, 0, 51712, 64512);
		EV_SetAng(CHAO3, 0, 45056, 64768);
		EV_SetPos(CHAO4, -101.8f, 4.1999998f, 349.60001f);
		EV_SetAng(CHAO4, 0, 45824, 0);
		EV_SetAng(CHAO1, 0, 37888, 64512);
		EV_SetAng(CHAO2, 0, 37120, 64512);
		EV_SetAng(CHAO3, 0, 28672, 64768);
		EV_SetPos(CHAO4, -104.5f, 1.45f, 372.60001f);
		EV_SetAng(CHAO4, 0, 40704, 0);
		EV_SetPos(tikal, -100.0f, 0.0f, 369.60001f);
		EV_SetAng(tikal, 0, 0x8000, 0);
		EV_ClrAction(tikal);
		EV_CameraPos(1, 0, -95.199997f, 6.1300001f, 364.70001f);
		EV_CameraAng(1, 0, 2048, 23943, 0);
		EV_CameraPos(1, 4, -95.900002f, 6.3200002f, 365.39999f);
		EV_SerifPlay(921);
		EV_SetAction(tikal, &action_j_j0006_tikal, &TIKAL_TEXLIST, 1.1f, 0, 0);
		EV_LookFree(tikal);
		EV_Wait(30);
		EV_LookPoint(tikal, -63.400002f, 18.49f, 300.29999f);
		EV_CameraPos(1, 0, -77.0f, 11.37f, 324.64999f);
		EV_CameraAng(1, 0, 64000, 25600, 0);
		EV_CameraPos(1, 90, -60.919998f, 15.04f, 305.92001f);
		EV_CameraPos(1, 0, -119.15f, 3.95f, 364.87f);
		EV_CameraAng(1, 0, 256, 40704, 0);
		EV_CameraPos(0, 30, -104.9f, 2.1500001f, 352.19f);
		EV_CameraAng(0, 30, 1792, 37888, 65280);
		ToHumanChaos0();
		EV_Wait(30);
		EV_ClrAction(tikal);
		EventSe_Play(1, 1336, 1800);
		EventSe_Pan(1, 30, 1);
		EventSe_Volume(1, 60, 1);
		EV_Wait(1);
		EventSe_Volume(1, 128, 140);
		SetPositionChaos0(-42.099998f, -3.0f, 238.25999f);
		SetAngleChaos0(0, 18688, 0);
		EV_CameraPos(1, 0, -32.099998f, 0.013f, 222.7f);
		EV_CameraAng(1, 0, 2188, 28345, 512);
		EV_CameraPerspective(1, 1, 9102);
		EV_Wait(4);
		EV_LookFree(tikal);
		EV_SetPos(tikal, -65.099998f, 0.0f, 301.39999f);
		EV_SetAng(tikal, 0, 27392, 0);
		EV_CameraPos(0, 100, -35.799999f, 3.7f, 231.8f);
		EV_CameraAng(0, 100, 0, 29625, 512);
		SetPositionChaos0(-42.099998f, -2.9000001f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.8f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.7f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.5999999f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.5f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.4000001f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.3f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.2f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.0999999f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -2.0f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.9f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.8f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.7f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.6f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.5f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.4f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.3f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.2f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -1.1f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -0.89999998f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -0.80000001f, 238.25999f);
		EV_Wait(1);
		SetPositionChaos0(-42.099998f, -0.80000001f, 238.25999f);
		EV_Wait(75);
		EV_CameraPerspective(1, 1, 12743);
		EV_Wait(1);
		EV_SetPos(tikal, -100.0f, 0.0f, 369.60001f);
		EV_SetAng(tikal, 0, 27392, 0);
		EV_CameraPos(1, 0, -71.199997f, 16.26f, 314.89999f);
		EV_CameraAng(1, 0, 63488, 27648, 256);
		EV_CameraPos(0, 24, -95.699997f, 9.3000002f, 360.66f);
		EV_CameraAng(1, 0, 63232, 27648, 65280);
		EventSe_Play(2, 760, 90);
		EV_Wait(24);
		EventSe_Volume(1, -20, 80);
		EV_SetPos(player, -66.800003f, -0.0099999998f, 400.35001f);
		EV_SetAng(player, 1264, 33280, 0);
		EV_CameraPos(1, 0, -69.599998f, 6.4899998f, 376.79999f);
		EV_CameraAng(1, 0, 0, 34048, 0);
		EV_CameraPos(1, 28, -67.550003f, 6.4899998f, 393.76999f);
		W_OUT = COverlayCreate(0.016000001f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_Wait(90);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		EV_SerifStop();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		EV_FreeObject(&CHAO1);
		EV_FreeObject(&CHAO2);
		EV_FreeObject(&CHAO3);
		EV_FreeObject(&CHAO4);
		DeleteChaos0();
		break;
	}

}