NewMap2_MapScripts::
	.byte 0


NewMap2_EventScript_Celebi::
# 5 "data/maps/NewMap2/scripts.pory"
	lockall
# 6 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_CELEBI_0x021
# 7 "data/maps/NewMap2/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 8 "data/maps/NewMap2/scripts.pory"
	delay 40
# 9 "data/maps/NewMap2/scripts.pory"
	waitmoncry
# 10 "data/maps/NewMap2/scripts.pory"
	setwildbattle SPECIES_CELEBI, 75, ITEM_SUPER_POTION
# 11 "data/maps/NewMap2/scripts.pory"
	dowildbattle
# 12 "data/maps/NewMap2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/NewMap2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NewMap2_EventScript_Celebi_2
# 16 "data/maps/NewMap2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMap2_EventScript_Celebi_3
# 19 "data/maps/NewMap2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMap2_EventScript_Celebi_4
# 22 "data/maps/NewMap2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMap2_EventScript_Celebi_5
NewMap2_EventScript_Celebi_1:
# 25 "data/maps/NewMap2/scripts.pory"
	waitmessage
# 26 "data/maps/NewMap2/scripts.pory"
	releaseall
	return

NewMap2_EventScript_Celebi_2:
# 14 "data/maps/NewMap2/scripts.pory"
	call Won_or_Caught
	goto NewMap2_EventScript_Celebi_1

NewMap2_EventScript_Celebi_3:
# 17 "data/maps/NewMap2/scripts.pory"
	call Won_or_Caught
	goto NewMap2_EventScript_Celebi_1

NewMap2_EventScript_Celebi_4:
# 20 "data/maps/NewMap2/scripts.pory"
	call RanAway
	goto NewMap2_EventScript_Celebi_1

NewMap2_EventScript_Celebi_5:
# 23 "data/maps/NewMap2/scripts.pory"
	call RanAway
	goto NewMap2_EventScript_Celebi_1


Won_or_Caught::
# 30 "data/maps/NewMap2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/maps/NewMap2/scripts.pory"
	removeobject 1
# 32 "data/maps/NewMap2/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


RanAway::
# 37 "data/maps/NewMap2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 38 "data/maps/NewMap2/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

