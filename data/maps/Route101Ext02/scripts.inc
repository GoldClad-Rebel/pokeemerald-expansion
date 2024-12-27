Route101Ext02_MapScripts::
# 5 "data/maps/Route101Ext02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101Ext02_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route101Ext02_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Route101Ext02/scripts.pory"
	setobjectaswildencounter 5, 1
# 8 "data/maps/Route101Ext02/scripts.pory"
	setobjectaswildencounter 6, 1
# 9 "data/maps/Route101Ext02/scripts.pory"
	setobjectaswildencounter 7, 1
	return


Route101Ext02_EventScript_SeviperBatllesZangoose::
# 14 "data/maps/Route101Ext02/scripts.pory"
	lockall
# 15 "data/maps/Route101Ext02/scripts.pory"
	setflag FLAG_SeviperBattle_0x027
# 16 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	return


Route101Ext02_EventScript_leaf::
# 24 "data/maps/Route101Ext02/scripts.pory"
	lockall
# 25 "data/maps/Route101Ext02/scripts.pory"
	clearflag FLAG_LEAFRoute101Ext02_0x02C
# 26 "data/maps/Route101Ext02/scripts.pory"
	addobject 4
# 27 "data/maps/Route101Ext02/scripts.pory"
	setobjectxy 4, 7, 2
# 28 "data/maps/Route101Ext02/scripts.pory"
	applymovement 4, Route101Ext02_Movement_LEAFAproaches
# 29 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route101Ext02/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 31 "data/maps/Route101Ext02/scripts.pory"
	msgbox Route101Ext02_EventScript_leaf_Text_0
# 32 "data/maps/Route101Ext02/scripts.pory"
	closemessage
# 33 "data/maps/Route101Ext02/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 34 "data/maps/Route101Ext02/scripts.pory"
	msgbox Route101Ext02_EventScript_leaf_Text_1
# 35 "data/maps/Route101Ext02/scripts.pory"
	closemessage
# 36 "data/maps/Route101Ext02/scripts.pory"
	applymovement 4, Route101Ext02_Movement_LEAFRunsAway
# 37 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route101Ext02/scripts.pory"
	removeobject 4
# 39 "data/maps/Route101Ext02/scripts.pory"
	setflag FLAG_LEAFRoute101Ext02_0x02C
# 40 "data/maps/Route101Ext02/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 41 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	return


# 44 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_LEAFAproaches:
# 45 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 45 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 45 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 45 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 45 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 45 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 45 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 45 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 46 "data/maps/Route101Ext02/scripts.pory"
	face_down
# 47 "data/maps/Route101Ext02/scripts.pory"
	walk_down
# 48 "data/maps/Route101Ext02/scripts.pory"
	step_end

# 51 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_LEAFRunsAway:
# 52 "data/maps/Route101Ext02/scripts.pory"
	face_left
# 53 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 53 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 53 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 53 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 53 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 54 "data/maps/Route101Ext02/scripts.pory"
	face_up
# 55 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 55 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 55 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 55 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 55 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 56 "data/maps/Route101Ext02/scripts.pory"
	step_end

Route101Ext02_EventScript_WildBattleTriggerUp::
# 60 "data/maps/Route101Ext02/scripts.pory"
	lockall
# 61 "data/maps/Route101Ext02/scripts.pory"
	applymovement 2, Route101Ext02_Movement_SeviperAttacksZangoose
# 62 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route101Ext02/scripts.pory"
	applymovement 1, Route101Ext02_Movement_ZangooseAttacksSeviper
# 64 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route101Ext02/scripts.pory"
	msgbox Route101Ext02_EventScript_WildBattleTriggerUp_Text_0
# 66 "data/maps/Route101Ext02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101Ext02_Movement_ForcePLayerUP
# 67 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	return


Route101Ext02_EventScript_WildBattleTriggerLeft::
# 72 "data/maps/Route101Ext02/scripts.pory"
	lockall
# 73 "data/maps/Route101Ext02/scripts.pory"
	applymovement 2, Route101Ext02_Movement_SeviperAttacksZangoose
# 74 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route101Ext02/scripts.pory"
	applymovement 1, Route101Ext02_Movement_ZangooseAttacksSeviper
# 76 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route101Ext02/scripts.pory"
	msgbox Route101Ext02_EventScript_WildBattleTriggerUp_Text_0
# 78 "data/maps/Route101Ext02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101Ext02_Movement_ForcePLayerLeft
# 79 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	return


Route101Ext02_EventScript_WildBattleTriggerRight::
# 84 "data/maps/Route101Ext02/scripts.pory"
	lockall
# 85 "data/maps/Route101Ext02/scripts.pory"
	applymovement 2, Route101Ext02_Movement_SeviperAttacksZangoose
# 86 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route101Ext02/scripts.pory"
	applymovement 1, Route101Ext02_Movement_ZangooseAttacksSeviper
# 88 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route101Ext02/scripts.pory"
	msgbox Route101Ext02_EventScript_WildBattleTriggerUp_Text_0
# 90 "data/maps/Route101Ext02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101Ext02_Movement_ForcePLayerRight
# 91 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	return


# 95 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_SeviperAttacksZangoose:
# 96 "data/maps/Route101Ext02/scripts.pory"
	jump_right
# 97 "data/maps/Route101Ext02/scripts.pory"
	jump_left
# 98 "data/maps/Route101Ext02/scripts.pory"
	face_right
# 99 "data/maps/Route101Ext02/scripts.pory"
	step_end

# 102 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_ZangooseAttacksSeviper:
# 103 "data/maps/Route101Ext02/scripts.pory"
	jump_left
# 104 "data/maps/Route101Ext02/scripts.pory"
	jump_right
# 105 "data/maps/Route101Ext02/scripts.pory"
	face_left
# 106 "data/maps/Route101Ext02/scripts.pory"
	step_end

# 109 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_ForcePLayerUP:
# 110 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 111 "data/maps/Route101Ext02/scripts.pory"
	step_end

# 114 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_ForcePLayerLeft:
# 115 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 116 "data/maps/Route101Ext02/scripts.pory"
	step_end

# 119 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_ForcePLayerRight:
# 120 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 121 "data/maps/Route101Ext02/scripts.pory"
	step_end

Route101Ext02_EventScript_SeviperAndZangooseDisapear::
# 125 "data/maps/Route101Ext02/scripts.pory"
	lockall
# 126 "data/maps/Route101Ext02/scripts.pory"
	setvar VAR_ROUTE101_STATE, 8
# 127 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	return


Route101Ext02_EventScript_OverworldMon0::
# 131 "data/maps/Route101Ext02/scripts.pory"
	lock
# 132 "data/maps/Route101Ext02/scripts.pory"
	applymovement 5, Route101Ext02_Movement_Ow_MonFacesPlayer
# 133 "data/maps/Route101Ext02/scripts.pory"
	callnative GetOverworldMonSpecies
# 134 "data/maps/Route101Ext02/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 135 "data/maps/Route101Ext02/scripts.pory"
	startoverworldencounter 8
# 136 "data/maps/Route101Ext02/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 137 "data/maps/Route101Ext02/scripts.pory"
	removeobject 5
# 138 "data/maps/Route101Ext02/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 139 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	end


Route101Ext02_EventScript_OverworldMon1::
# 144 "data/maps/Route101Ext02/scripts.pory"
	lock
# 145 "data/maps/Route101Ext02/scripts.pory"
	applymovement 6, Route101Ext02_Movement_Ow_MonFacesPlayer
# 146 "data/maps/Route101Ext02/scripts.pory"
	callnative GetOverworldMonSpecies
# 147 "data/maps/Route101Ext02/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 148 "data/maps/Route101Ext02/scripts.pory"
	startoverworldencounter 8
# 149 "data/maps/Route101Ext02/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 150 "data/maps/Route101Ext02/scripts.pory"
	removeobject 6
# 151 "data/maps/Route101Ext02/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 152 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	end


Route101Ext02_EventScript_OverworldMon2::
# 157 "data/maps/Route101Ext02/scripts.pory"
	lock
# 158 "data/maps/Route101Ext02/scripts.pory"
	applymovement 7, Route101Ext02_Movement_Ow_MonFacesPlayer
# 159 "data/maps/Route101Ext02/scripts.pory"
	callnative GetOverworldMonSpecies
# 160 "data/maps/Route101Ext02/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 161 "data/maps/Route101Ext02/scripts.pory"
	startoverworldencounter 8
# 162 "data/maps/Route101Ext02/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 163 "data/maps/Route101Ext02/scripts.pory"
	removeobject 7
# 164 "data/maps/Route101Ext02/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 165 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	end


# 169 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_Ow_MonFacesPlayer:
# 170 "data/maps/Route101Ext02/scripts.pory"
	face_player
# 171 "data/maps/Route101Ext02/scripts.pory"
	step_end

Route101Ext02_EventScript_leaf_Text_0:
# 31 "data/maps/Route101Ext02/scripts.pory"
	.string "Hey, {PLAYER}! I was just grabbing\n"
	.string "some supplies and seen you run by\l"
	.string "earlier. so i waited up, to give you\l"
	.string "these, Heres some pokeballs!$"

Route101Ext02_EventScript_leaf_Text_1:
# 34 "data/maps/Route101Ext02/scripts.pory"
	.string "im going to head home now, you should\n"
	.string "stop by sometime!$"

Route101Ext02_EventScript_WildBattleTriggerUp_Text_0:
# 65 "data/maps/Route101Ext02/scripts.pory"
	.string "These pokemon are in a heated battle,\n"
	.string "Its probably best to avoid them right\l"
	.string "now!$"
