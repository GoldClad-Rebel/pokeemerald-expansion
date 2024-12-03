Route102Ext_MapScripts::
	.byte 0


Route102Ext_EventScript_Snorlaxs_Leftovers::
# 5 "data/maps/Route102Ext/scripts.pory"
	lockall
# 6 "data/maps/Route102Ext/scripts.pory"
	msgbox Route102Ext_EventScript_Snorlaxs_Leftovers_Text_0, type = MSGBOX_DEFAULT
# 7 "data/maps/Route102Ext/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 8 "data/maps/Route102Ext/scripts.pory"
	delay 40
# 9 "data/maps/Route102Ext/scripts.pory"
	waitmoncry
# 10 "data/maps/Route102Ext/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 25, ITEM_LEFTOVERS
# 11 "data/maps/Route102Ext/scripts.pory"
	dowildbattle
# 12 "data/maps/Route102Ext/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/Route102Ext/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102Ext_EventScript_Snorlaxs_Leftovers_2
# 19 "data/maps/Route102Ext/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102Ext_EventScript_Snorlaxs_Leftovers_3
Route102Ext_EventScript_Snorlaxs_Leftovers_1:
# 25 "data/maps/Route102Ext/scripts.pory"
	waitmessage
# 26 "data/maps/Route102Ext/scripts.pory"
	releaseall
	return

Route102Ext_EventScript_Snorlaxs_Leftovers_2:
# 14 "data/maps/Route102Ext/scripts.pory"
	call Won_or_Caught
# 15 "data/maps/Route102Ext/scripts.pory"
	setflag FLAG_SNORLAX_0x02A
# 16 "data/maps/Route102Ext/scripts.pory"
	removeobject 2
# 17 "data/maps/Route102Ext/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
	goto Route102Ext_EventScript_Snorlaxs_Leftovers_1

Route102Ext_EventScript_Snorlaxs_Leftovers_3:
# 20 "data/maps/Route102Ext/scripts.pory"
	call Won_or_Caught
# 21 "data/maps/Route102Ext/scripts.pory"
	setflag FLAG_SNORLAX_0x02A
# 22 "data/maps/Route102Ext/scripts.pory"
	removeobject 2
# 23 "data/maps/Route102Ext/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
	goto Route102Ext_EventScript_Snorlaxs_Leftovers_1


Route102Ext_EventScript_Munchlax::
# 30 "data/maps/Route102Ext/scripts.pory"
	lockall
# 31 "data/maps/Route102Ext/scripts.pory"
	msgbox Munchlax_Battle, MSGBOX_DEFAULT
# 32 "data/maps/Route102Ext/scripts.pory"
	playmoncry SPECIES_MUNCHLAX, CRY_MODE_ENCOUNTER
# 33 "data/maps/Route102Ext/scripts.pory"
	delay 40
# 34 "data/maps/Route102Ext/scripts.pory"
	waitmoncry
# 35 "data/maps/Route102Ext/scripts.pory"
	setwildbattle SPECIES_MUNCHLAX, 18, ITEM_LEFTOVERS
# 36 "data/maps/Route102Ext/scripts.pory"
	dowildbattle
# 37 "data/maps/Route102Ext/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/Route102Ext/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102Ext_EventScript_Munchlax_2
# 42 "data/maps/Route102Ext/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102Ext_EventScript_Munchlax_3
Route102Ext_EventScript_Munchlax_1:
# 46 "data/maps/Route102Ext/scripts.pory"
	waitmessage
# 47 "data/maps/Route102Ext/scripts.pory"
	releaseall
	return

Route102Ext_EventScript_Munchlax_2:
# 39 "data/maps/Route102Ext/scripts.pory"
	call Won_or_Caught
# 40 "data/maps/Route102Ext/scripts.pory"
	setflag FLAG_MUNCHLAX_0x029
	goto Route102Ext_EventScript_Munchlax_1

Route102Ext_EventScript_Munchlax_3:
# 43 "data/maps/Route102Ext/scripts.pory"
	call Won_or_Caught
# 44 "data/maps/Route102Ext/scripts.pory"
	setflag FLAG_MUNCHLAX_0x029
	goto Route102Ext_EventScript_Munchlax_1


Route102Ext_Snorlax::
# 51 "data/maps/Route102Ext/scripts.pory"
	lockall
# 52 "data/maps/Route102Ext/scripts.pory"
	msgbox Snorlax_Sleeping, MSGBOX_DEFAULT
# 53 "data/maps/Route102Ext/scripts.pory"
	waitmessage
# 54 "data/maps/Route102Ext/scripts.pory"
	releaseall
	return


Route102Ext_EventScript_Snorlaxs_Leftovers_Text_0:
# 6 "data/maps/Route102Ext/scripts.pory"
	.string "Snorlax has woken up!$"

Snorlax_Sleeping::
# 57 "data/maps/Route102Ext/scripts.pory"
	.string "zzz zzZ ZZZ$"

Munchlax_Battle::
# 61 "data/maps/Route102Ext/scripts.pory"
	.string "Lax, Lax, Munchlax!$"
