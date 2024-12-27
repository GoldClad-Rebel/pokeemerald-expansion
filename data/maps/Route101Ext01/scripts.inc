Route101Ext01_MapScripts::
# 3 "data/maps/Route101Ext01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101Ext01_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route101Ext01_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/Route101Ext01/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 6 "data/maps/Route101Ext01/scripts.pory"
	setobjectaswildencounter 6, 1
	return


Route101Ext01_EventScript_PlayerApproachesRoute101Ext01::
# 13 "data/maps/Route101Ext01/scripts.pory"
	lockall
# 14 "data/maps/Route101Ext01/scripts.pory"
	addobject 1
# 15 "data/maps/Route101Ext01/scripts.pory"
	delay 8
# 16 "data/maps/Route101Ext01/scripts.pory"
	applymovement 1, Route101Ext01_Movement_ZapdosFlysBy
# 17 "data/maps/Route101Ext01/scripts.pory"
	waitmovement 1
# 18 "data/maps/Route101Ext01/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 19 "data/maps/Route101Ext01/scripts.pory"
	applymovement 1, Route101Ext01_Movement_ZapdosFlysBy2
# 20 "data/maps/Route101Ext01/scripts.pory"
	waitmovement 1
# 21 "data/maps/Route101Ext01/scripts.pory"
	removeobject 1
# 22 "data/maps/Route101Ext01/scripts.pory"
	setflag FLAG_ZAPDOS_0x023
# 23 "data/maps/Route101Ext01/scripts.pory"
	setvar VAR_ROUTE101_STATE, 6
# 24 "data/maps/Route101Ext01/scripts.pory"
	releaseall
	return


# 27 "data/maps/Route101Ext01/scripts.pory"
Route101Ext01_Movement_ZapdosFlysBy:
# 28 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 29 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 30 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 31 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 32 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 33 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 34 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 35 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 36 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 37 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 38 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 39 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 40 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 41 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 42 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 43 "data/maps/Route101Ext01/scripts.pory"
	face_up
# 44 "data/maps/Route101Ext01/scripts.pory"
	step_end

# 47 "data/maps/Route101Ext01/scripts.pory"
Route101Ext01_Movement_ZapdosFlysBy2:
# 48 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 49 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 49 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 50 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 51 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 51 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 52 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 52 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 53 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 53 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 54 "data/maps/Route101Ext01/scripts.pory"
	step_end

Route101Ext01_EventScript_RivalRunsToOlddale::
# 60 "data/maps/Route101Ext01/scripts.pory"
	lockall
# 61 "data/maps/Route101Ext01/scripts.pory"
	setobjectxy 2, 16, 4
# 62 "data/maps/Route101Ext01/scripts.pory"
	closemessage
# 63 "data/maps/Route101Ext01/scripts.pory"
	applymovement 2, Route101Ext01_Movement_RivalRUNSAway
# 64 "data/maps/Route101Ext01/scripts.pory"
	waitmovement 2
# 65 "data/maps/Route101Ext01/scripts.pory"
	removeobject 2
# 66 "data/maps/Route101Ext01/scripts.pory"
	setflag FLAG_RivalRoute101Ext01_0x025
# 67 "data/maps/Route101Ext01/scripts.pory"
	setvar VAR_ROUTE101_STATE, 7
# 68 "data/maps/Route101Ext01/scripts.pory"
	setweather WEATHER_SHADE
# 69 "data/maps/Route101Ext01/scripts.pory"
	doweather
# 70 "data/maps/Route101Ext01/scripts.pory"
	releaseall
	return


# 73 "data/maps/Route101Ext01/scripts.pory"
Route101Ext01_Movement_RivalRUNSAway:
# 74 "data/maps/Route101Ext01/scripts.pory"
	face_up
# 75 "data/maps/Route101Ext01/scripts.pory"
	delay_8
# 76 "data/maps/Route101Ext01/scripts.pory"
	walk_up
# 77 "data/maps/Route101Ext01/scripts.pory"
	walk_up
# 78 "data/maps/Route101Ext01/scripts.pory"
	walk_up
# 79 "data/maps/Route101Ext01/scripts.pory"
	walk_up
# 80 "data/maps/Route101Ext01/scripts.pory"
	walk_up
# 81 "data/maps/Route101Ext01/scripts.pory"
	step_end

Route101Ext01_EventScript_AipomShowsUp::
# 85 "data/maps/Route101Ext01/scripts.pory"
	lockall
# 86 "data/maps/Route101Ext01/scripts.pory"
	clearflag FLAG_Aipom_0x026
# 87 "data/maps/Route101Ext01/scripts.pory"
	releaseall
	return


Route101Ext01_EventScript_Rattata::
# 93 "data/maps/Route101Ext01/scripts.pory"
	lock
# 94 "data/maps/Route101Ext01/scripts.pory"
	applymovement 5, Route101Ext01_Movement_RattataFacesPlayer
# 95 "data/maps/Route101Ext01/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_ENCOUNTER
# 96 "data/maps/Route101Ext01/scripts.pory"
	delay 40
# 97 "data/maps/Route101Ext01/scripts.pory"
	waitmoncry
# 98 "data/maps/Route101Ext01/scripts.pory"
	setwildbattle SPECIES_RATTATA, 6
# 99 "data/maps/Route101Ext01/scripts.pory"
	dowildbattle
# 100 "data/maps/Route101Ext01/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/Route101Ext01/scripts.pory"
	removeobject 5
# 102 "data/maps/Route101Ext01/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 103 "data/maps/Route101Ext01/scripts.pory"
	releaseall
	return


# 106 "data/maps/Route101Ext01/scripts.pory"
Route101Ext01_Movement_RattataFacesPlayer:
# 107 "data/maps/Route101Ext01/scripts.pory"
	face_player
# 108 "data/maps/Route101Ext01/scripts.pory"
	step_end

Route101Ext01_EventScript_OverworldMon0::
# 112 "data/maps/Route101Ext01/scripts.pory"
	lock
# 113 "data/maps/Route101Ext01/scripts.pory"
	applymovement 6, Route101Ext01_Movement_Ow_MonFacesPlayer
# 114 "data/maps/Route101Ext01/scripts.pory"
	callnative GetOverworldMonSpecies
# 115 "data/maps/Route101Ext01/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 116 "data/maps/Route101Ext01/scripts.pory"
	startoverworldencounter 5
# 117 "data/maps/Route101Ext01/scripts.pory"
	fadescreen FADE_TO_BLACK
# 118 "data/maps/Route101Ext01/scripts.pory"
	removeobject 6
# 119 "data/maps/Route101Ext01/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 120 "data/maps/Route101Ext01/scripts.pory"
	releaseall
	end


# 124 "data/maps/Route101Ext01/scripts.pory"
Route101Ext01_Movement_Ow_MonFacesPlayer:
# 125 "data/maps/Route101Ext01/scripts.pory"
	face_player
# 126 "data/maps/Route101Ext01/scripts.pory"
	step_end
