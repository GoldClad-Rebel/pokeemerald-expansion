Route102Ext_MapScripts::
	.byte 0


Route102Ext_EventScript_Snorlaxs_Leftovers::
# 7 "data/maps/Route102Ext/scripts.pory"
	lockall
# 8 "data/maps/Route102Ext/scripts.pory"
	msgbox Route102Ext_EventScript_Snorlaxs_Leftovers_Text_0
# 9 "data/maps/Route102Ext/scripts.pory"
	closemessage
# 10 "data/maps/Route102Ext/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 11 "data/maps/Route102Ext/scripts.pory"
	delay 20
# 12 "data/maps/Route102Ext/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_ENCOUNTER
# 13 "data/maps/Route102Ext/scripts.pory"
	delay 40
# 14 "data/maps/Route102Ext/scripts.pory"
	waitmoncry
# 15 "data/maps/Route102Ext/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 35, ITEM_LEFTOVERS, SPECIES_MUNCHLAX, 25, ITEM_LEFTOVERS
# 16 "data/maps/Route102Ext/scripts.pory"
	dowildbattle
# 17 "data/maps/Route102Ext/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/Route102Ext/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102Ext_EventScript_Snorlaxs_Leftovers_2
# 21 "data/maps/Route102Ext/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102Ext_EventScript_Snorlaxs_Leftovers_3
Route102Ext_EventScript_Snorlaxs_Leftovers_1:
# 24 "data/maps/Route102Ext/scripts.pory"
	releaseall
	return

Route102Ext_EventScript_Snorlaxs_Leftovers_2:
# 19 "data/maps/Route102Ext/scripts.pory"
	call Won_or_Caught_3
	goto Route102Ext_EventScript_Snorlaxs_Leftovers_1

Route102Ext_EventScript_Snorlaxs_Leftovers_3:
# 22 "data/maps/Route102Ext/scripts.pory"
	call Won_or_Caught_3
	goto Route102Ext_EventScript_Snorlaxs_Leftovers_1


Route102Ext_EventScript_Munchlax::
# 28 "data/maps/Route102Ext/scripts.pory"
	lock
# 29 "data/maps/Route102Ext/scripts.pory"
	applymovement 4, Route102_Movement_MunchlaxFacesPlayer
# 30 "data/maps/Route102Ext/scripts.pory"
	msgbox Route102Ext_EventScript_Munchlax_Text_0
# 31 "data/maps/Route102Ext/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_ENCOUNTER
# 32 "data/maps/Route102Ext/scripts.pory"
	delay 40
# 33 "data/maps/Route102Ext/scripts.pory"
	waitmoncry
# 34 "data/maps/Route102Ext/scripts.pory"
	setwildbattle SPECIES_MUNCHLAX, 18, ITEM_LEFTOVERS
# 35 "data/maps/Route102Ext/scripts.pory"
	dowildbattle
# 36 "data/maps/Route102Ext/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/Route102Ext/scripts.pory"
	setflag FLAG_MUNCHLAX_0x029
# 38 "data/maps/Route102Ext/scripts.pory"
	removeobject 2
# 39 "data/maps/Route102Ext/scripts.pory"
	setvar VAR_Route102Ext_STATE, 1
# 40 "data/maps/Route102Ext/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 41 "data/maps/Route102Ext/scripts.pory"
	return
# 42 "data/maps/Route102Ext/scripts.pory"
	releaseall
	return


Route102Ext_Snorlax::
# 46 "data/maps/Route102Ext/scripts.pory"
	lockall
# 47 "data/maps/Route102Ext/scripts.pory"
	msgbox Route102Ext_Snorlax_Text_0
# 48 "data/maps/Route102Ext/scripts.pory"
	waitmessage
# 49 "data/maps/Route102Ext/scripts.pory"
	releaseall
	return


Won_or_Caught_3::
# 53 "data/maps/Route102Ext/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/Route102Ext/scripts.pory"
	setflag FLAG_MUNCHLAX_0x029
# 55 "data/maps/Route102Ext/scripts.pory"
	setflag FLAG_SNORLAX_0x02A
# 56 "data/maps/Route102Ext/scripts.pory"
	setflag FLAG_LEFTOVERS_0x02B
# 57 "data/maps/Route102Ext/scripts.pory"
	removeobject 5
# 58 "data/maps/Route102Ext/scripts.pory"
	removeobject 4
# 59 "data/maps/Route102Ext/scripts.pory"
	removeobject 2
# 60 "data/maps/Route102Ext/scripts.pory"
	setvar VAR_Route102Ext_STATE, 2
# 61 "data/maps/Route102Ext/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/Route102Ext/scripts.pory"
	return
# 63 "data/maps/Route102Ext/scripts.pory"
	releaseall
	return


# 66 "data/maps/Route102Ext/scripts.pory"
Route102_Movement_MunchlaxFacesPlayer:
# 67 "data/maps/Route102Ext/scripts.pory"
	face_player
# 68 "data/maps/Route102Ext/scripts.pory"
	step_end

Route102Ext_EventScript_MunchlaxTriggers::
# 72 "data/maps/Route102Ext/scripts.pory"
	lock
# 73 "data/maps/Route102Ext/scripts.pory"
	clearflag FLAG_MUNCHLAX_0x029
# 74 "data/maps/Route102Ext/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP
# 75 "data/maps/Route102Ext/scripts.pory"
	addobject 4
# 76 "data/maps/Route102Ext/scripts.pory"
	setvar VAR_Route102Ext_STATE, 0
# 77 "data/maps/Route102Ext/scripts.pory"
	releaseall
	return


Route102Ext_EventScript_Snorlaxs_Leftovers_Text_0:
# 8 "data/maps/Route102Ext/scripts.pory"
	.string "Snorlax has woken up! It wants to\n"
	.string "battle!$"

Route102Ext_EventScript_Munchlax_Text_0:
# 30 "data/maps/Route102Ext/scripts.pory"
	.string "Lax, Lax, Munchlax!$"

Route102Ext_Snorlax_Text_0:
# 47 "data/maps/Route102Ext/scripts.pory"
	.string "zzz zzZ ZZZ$"
