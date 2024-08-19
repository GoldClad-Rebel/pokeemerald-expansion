Route101Ext01_MapScripts::
	.byte 0


Route101Ext01_EventScript_PlayerApproachesRoute101Ext01::
# 7 "data/maps/Route101Ext01/scripts.pory"
	lockall
# 8 "data/maps/Route101Ext01/scripts.pory"
	addobject 1
# 9 "data/maps/Route101Ext01/scripts.pory"
	delay 8
# 10 "data/maps/Route101Ext01/scripts.pory"
	applymovement 1, Route101Ext01_Movement_ZapdosFlysBy
# 11 "data/maps/Route101Ext01/scripts.pory"
	waitmovement 1
# 12 "data/maps/Route101Ext01/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 13 "data/maps/Route101Ext01/scripts.pory"
	applymovement 1, Route101Ext01_Movement_ZapdosFlysBy2
# 14 "data/maps/Route101Ext01/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route101Ext01/scripts.pory"
	removeobject 1
# 16 "data/maps/Route101Ext01/scripts.pory"
	setflag FLAG_ZAPDOS_0x023
# 17 "data/maps/Route101Ext01/scripts.pory"
	setvar VAR_ROUTE101_STATE, 6
# 18 "data/maps/Route101Ext01/scripts.pory"
	releaseall
	return


# 21 "data/maps/Route101Ext01/scripts.pory"
Route101Ext01_Movement_ZapdosFlysBy:
# 22 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 22 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 23 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 24 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 24 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 24 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 24 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 25 "data/maps/Route101Ext01/scripts.pory"
	step_end

# 28 "data/maps/Route101Ext01/scripts.pory"
Route101Ext01_Movement_ZapdosFlysBy2:
# 29 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 29 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 29 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 30 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_up
# 31 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 31 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 31 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 31 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 32 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_down
# 33 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 33 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_left
# 34 "data/maps/Route101Ext01/scripts.pory"
	step_end

Route101Ext01_EventScript_RivalRunsToOlddale::
# 40 "data/maps/Route101Ext01/scripts.pory"
	lockall
# 41 "data/maps/Route101Ext01/scripts.pory"
	setobjectxy 2, 16, 4
# 42 "data/maps/Route101Ext01/scripts.pory"
	msgbox Route101Ext01_EventScript_RivalRunsToOlddale_Text_0
# 43 "data/maps/Route101Ext01/scripts.pory"
	closemessage
# 44 "data/maps/Route101Ext01/scripts.pory"
	applymovement 2, Route101Ext01_Movement_RivalRUNSAway
# 45 "data/maps/Route101Ext01/scripts.pory"
	waitmovement 2
# 46 "data/maps/Route101Ext01/scripts.pory"
	removeobject 2
# 47 "data/maps/Route101Ext01/scripts.pory"
	setflag FLAG_RivalRoute101Ext01_0x025
# 48 "data/maps/Route101Ext01/scripts.pory"
	setvar VAR_ROUTE101_STATE, 7
# 49 "data/maps/Route101Ext01/scripts.pory"
	releaseall
	return


# 52 "data/maps/Route101Ext01/scripts.pory"
Route101Ext01_Movement_RivalRUNSAway:
# 53 "data/maps/Route101Ext01/scripts.pory"
	disable_jump_landing_ground_effect
# 54 "data/maps/Route101Ext01/scripts.pory"
	jump_in_place_left
# 55 "data/maps/Route101Ext01/scripts.pory"
	face_up
# 56 "data/maps/Route101Ext01/scripts.pory"
	delay_8
# 57 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_up
# 57 "data/maps/Route101Ext01/scripts.pory"
	walk_fast_up
# 58 "data/maps/Route101Ext01/scripts.pory"
	step_end

Route101Ext01_EventScript_AipomShowsUp::
# 62 "data/maps/Route101Ext01/scripts.pory"
	lockall
# 63 "data/maps/Route101Ext01/scripts.pory"
	clearflag FLAG_Aipom_0x026
# 64 "data/maps/Route101Ext01/scripts.pory"
	releaseall
	return


Route101Ext01_EventScript_RivalRunsToOlddale_Text_0:
# 42 "data/maps/Route101Ext01/scripts.pory"
	.string "C'mon Slowpoke!$"
