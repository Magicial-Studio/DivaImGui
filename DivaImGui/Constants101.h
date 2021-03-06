#pragma once
#include <stdint.h>

constexpr uint8_t NOP_OPCODE = 0x90;
constexpr uint8_t RET_OPCODE = 0xC3;
constexpr uint8_t JMP_OPCODE = 0xE9;
constexpr uint8_t JNE_OPCODE = 0x85;

constexpr uint64_t ENGINE_UPDATE_HOOK_TARGET_ADDRESS	= 0x000000014005D440;
constexpr uint64_t ENGINE_UPDATE_INPUT_ADDRESS			= 0x000000014005D3B0;

constexpr uint64_t CURRENT_GAME_STATE_ADDRESS			= 0x0000000140CEFAA0;
constexpr uint64_t RESOLUTION_WIDTH_ADDRESS				= 0x0000000140CEFB4C;
constexpr uint64_t RESOLUTION_HEIGHT_ADDRESS			= 0x0000000140CEFB50;
		  
constexpr uint64_t SYSTEM_WARNING_ELAPSED_ADDRESS		= (0x0000000140E67D90 + 0x68);
constexpr uint64_t DATA_INIT_STATE_ADDRESS				= 0x0000000140CEFA58;
		  
constexpr uint64_t AET_FRAME_DURATION_ADDRESS			= 0x0000000140842388;
constexpr uint64_t PV_FRAME_RATE_ADDRESS				= 0x0000000140CEFA7C;
constexpr uint64_t FRAME_SPEED_ADDRESS					= 0x0000000140CEFA48;
constexpr uint64_t FRAME_RATE_ADDRESS					= 0x0000000140CEF980;
		  
constexpr uint64_t DW_GUI_DISPLAY_INSTANCE_PTR_ADDRESS	= 0x0000000140E53E88;
constexpr uint64_t INPUT_STATE_PTR_ADDRESS				= 0x0000000140CEF5E0;
constexpr uint64_t SLIDER_CTRL_TASK_ADDRESS				= 0x0000000140EB3940;
constexpr uint64_t TASK_TOUCH_ADDRESS					= 0x0000000140EF5200;
constexpr uint64_t SEL_PV_TIME_ADDRESS					= 0x0000000140EA6628;
constexpr uint64_t PV_SEL_SLOTS_TO_SCROLL				= 0x0000000140EA6604;

constexpr uint64_t CAMERA_ADDRESS						= 0x0000000140D9CD40;
constexpr uint64_t CAMERA_POS_SETTER_ADDRESS			= 0x00000001400D1110;
constexpr uint64_t CAMERA_INTR_SETTER_ADDRESS			= 0x00000001400D10B0;
constexpr uint64_t CAMERA_ROT_SETTER_ADDRESS			= 0x00000001400D1130;
constexpr uint64_t CAMERA_PERS_SETTER_ADDRESS			= 0x00000001400D10F0;

constexpr uint64_t UPDATE_TASKS_ADDRESS					= 0x000000014006C570;
constexpr uint64_t GLUT_SET_CURSOR_ADDRESS				= 0x000000014073261C;
constexpr uint64_t CHANGE_MODE_ADDRESS					= 0x0000000140065B30;
constexpr uint64_t CHANGE_SUB_MODE_ADDRESS				= 0x00000001400659C0;

constexpr uint64_t FB1_WIDTH_ADDRESS					= 0x0000000140E780F8;
constexpr uint64_t FB1_HEIGHT_ADDRESS					= 0x0000000140E780FC;

constexpr uint64_t UI_WIDTH_ADDRESS						= 0x0000000140EB73F4;
constexpr uint64_t UI_HEIGHT_ADDRESS					= 0x0000000140EB73F8;

constexpr uint64_t FB_ASPECT_RATIO						= 0x0000000140D9CD68;
constexpr uint64_t UI_ASPECT_RATIO						= 0x0000000140EB73E0;