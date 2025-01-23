NewMap3_MapScripts::
# 3 "data/maps/NewMap3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMap3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NewMap3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/NewMap3/scripts.pory"
	setobjectaswildencounter 14, 1
	return


NewMap3_EventScript_OverworldMon0::
# 17 "data/maps/NewMap3/scripts.pory"
	lock
# 18 "data/maps/NewMap3/scripts.pory"
	faceplayer
# 19 "data/maps/NewMap3/scripts.pory"
	callnative GetOverworldMonSpecies
# 20 "data/maps/NewMap3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 21 "data/maps/NewMap3/scripts.pory"
	startoverworldencounter 23
# 22 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 23 "data/maps/NewMap3/scripts.pory"
	removeobject 14
# 24 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 25 "data/maps/NewMap3/scripts.pory"
	releaseall
	end


NewMap3_EventScript_BoyNeedsHelp::
# 30 "data/maps/NewMap3/scripts.pory"
	lock
# 31 "data/maps/NewMap3/scripts.pory"
	checkfollower
# 32 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp_2
NewMap3_EventScript_BoyNeedsHelp_1:
# 48 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp_4
	return

NewMap3_EventScript_BoyNeedsHelp_2:
# 33 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerAway
# 34 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 35 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, NewMap3_Movement_LeafstepsLeft
# 36 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 37 "data/maps/NewMap3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 38 "data/maps/NewMap3/scripts.pory"
	delay 8
# 39 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_0
# 40 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 41 "data/maps/NewMap3/scripts.pory"
	closemessage
# 42 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, NewMap3_Movement_LeafHeadsHome
# 43 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 44 "data/maps/NewMap3/scripts.pory"
	destroyfollower
# 45 "data/maps/NewMap3/scripts.pory"
	clearflag FLAG_leafsittinginhouse_0x02E
# 46 "data/maps/NewMap3/scripts.pory"
	releaseall
	goto NewMap3_EventScript_BoyNeedsHelp_1

NewMap3_EventScript_BoyNeedsHelp_4:
# 49 "data/maps/NewMap3/scripts.pory"
	applymovement 3, NewMap3_Movement_BoyWalksUpToPlayer
# 50 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 51 "data/maps/NewMap3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 52 "data/maps/NewMap3/scripts.pory"
	delay 8
# 53 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_1
# 54 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_2
# 55 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 56 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_3
# 57 "data/maps/NewMap3/scripts.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, NewMap3_EventScript_BoyNeedsHelp_Text_4, NewMap3_EventScript_BoyNeedsHelp_Text_5
# 59 "data/maps/NewMap3/scripts.pory"
	closemessage
# 60 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp_6
# 66 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_6
# 67 "data/maps/NewMap3/scripts.pory"
	closemessage
# 68 "data/maps/NewMap3/scripts.pory"
	applymovement 3, NewMap3_Movement_BoyWalksaway1
# 69 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 70 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerAway2
# 71 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 72 "data/maps/NewMap3/scripts.pory"
	releaseall
	return

NewMap3_EventScript_BoyNeedsHelp_6:
# 61 "data/maps/NewMap3/scripts.pory"
	setfollower 3, FOLLOWER_NO_RUN, BoyonYourteamChat_Eventscript_CustomFollowerScript
# 62 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 1
# 63 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_BoyNeedsHelp2::
# 78 "data/maps/NewMap3/scripts.pory"
	lock
# 79 "data/maps/NewMap3/scripts.pory"
	checkfollower
# 80 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp2_2
NewMap3_EventScript_BoyNeedsHelp2_1:
# 96 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp2_4
	return

NewMap3_EventScript_BoyNeedsHelp2_2:
# 81 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerAway
# 82 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 83 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, NewMap3_Movement_LeafstepsLeft
# 84 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 85 "data/maps/NewMap3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 86 "data/maps/NewMap3/scripts.pory"
	delay 8
# 87 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_0
# 88 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 89 "data/maps/NewMap3/scripts.pory"
	closemessage
# 90 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, NewMap3_Movement_LeafHeadsHome
# 91 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 92 "data/maps/NewMap3/scripts.pory"
	destroyfollower
# 93 "data/maps/NewMap3/scripts.pory"
	clearflag FLAG_leafsittinginhouse_0x02E
# 94 "data/maps/NewMap3/scripts.pory"
	releaseall
	goto NewMap3_EventScript_BoyNeedsHelp2_1

NewMap3_EventScript_BoyNeedsHelp2_4:
# 97 "data/maps/NewMap3/scripts.pory"
	applymovement 3, NewMap3_Movement_BoyWalksUpToPlayer2
# 98 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 99 "data/maps/NewMap3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 100 "data/maps/NewMap3/scripts.pory"
	delay 8
# 101 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_1
# 102 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_2
# 103 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 104 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_3
# 105 "data/maps/NewMap3/scripts.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, NewMap3_EventScript_BoyNeedsHelp_Text_4, NewMap3_EventScript_BoyNeedsHelp_Text_5
# 107 "data/maps/NewMap3/scripts.pory"
	closemessage
# 108 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp2_6
# 114 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_6
# 115 "data/maps/NewMap3/scripts.pory"
	closemessage
# 116 "data/maps/NewMap3/scripts.pory"
	applymovement 3, NewMap3_Movement_BoyWalksaway2
# 117 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 118 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerAway2
# 119 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 120 "data/maps/NewMap3/scripts.pory"
	releaseall
	return

NewMap3_EventScript_BoyNeedsHelp2_6:
# 109 "data/maps/NewMap3/scripts.pory"
	setfollower 3, FOLLOWER_NO_RUN, BoyonYourteamChat_Eventscript_CustomFollowerScript
# 110 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 1
# 111 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


# 125 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_LeafHeadsHome:
# 126 "data/maps/NewMap3/scripts.pory"
	walk_left
# 126 "data/maps/NewMap3/scripts.pory"
	walk_left
# 126 "data/maps/NewMap3/scripts.pory"
	walk_left
# 126 "data/maps/NewMap3/scripts.pory"
	walk_left
# 127 "data/maps/NewMap3/scripts.pory"
	walk_left
# 127 "data/maps/NewMap3/scripts.pory"
	walk_left
# 127 "data/maps/NewMap3/scripts.pory"
	walk_left
# 127 "data/maps/NewMap3/scripts.pory"
	walk_left
# 128 "data/maps/NewMap3/scripts.pory"
	step_end

# 131 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_LeafstepsLeft:
# 132 "data/maps/NewMap3/scripts.pory"
	walk_left
# 133 "data/maps/NewMap3/scripts.pory"
	face_player
# 134 "data/maps/NewMap3/scripts.pory"
	step_end

# 138 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyWalksUpToPlayer:
# 139 "data/maps/NewMap3/scripts.pory"
	walk_left
# 139 "data/maps/NewMap3/scripts.pory"
	walk_left
# 139 "data/maps/NewMap3/scripts.pory"
	walk_left
# 139 "data/maps/NewMap3/scripts.pory"
	walk_left
# 140 "data/maps/NewMap3/scripts.pory"
	walk_left
# 140 "data/maps/NewMap3/scripts.pory"
	walk_left
# 140 "data/maps/NewMap3/scripts.pory"
	walk_left
# 140 "data/maps/NewMap3/scripts.pory"
	walk_left
# 141 "data/maps/NewMap3/scripts.pory"
	step_end

# 144 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyWalksUpToPlayer2:
# 145 "data/maps/NewMap3/scripts.pory"
	walk_left
# 145 "data/maps/NewMap3/scripts.pory"
	walk_left
# 145 "data/maps/NewMap3/scripts.pory"
	walk_left
# 145 "data/maps/NewMap3/scripts.pory"
	walk_left
# 146 "data/maps/NewMap3/scripts.pory"
	walk_left
# 146 "data/maps/NewMap3/scripts.pory"
	walk_left
# 146 "data/maps/NewMap3/scripts.pory"
	walk_left
# 147 "data/maps/NewMap3/scripts.pory"
	step_end

# 150 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyWalksaway1:
# 151 "data/maps/NewMap3/scripts.pory"
	walk_right
# 151 "data/maps/NewMap3/scripts.pory"
	walk_right
# 151 "data/maps/NewMap3/scripts.pory"
	walk_right
# 151 "data/maps/NewMap3/scripts.pory"
	walk_right
# 152 "data/maps/NewMap3/scripts.pory"
	walk_right
# 152 "data/maps/NewMap3/scripts.pory"
	walk_right
# 152 "data/maps/NewMap3/scripts.pory"
	walk_right
# 152 "data/maps/NewMap3/scripts.pory"
	walk_right
# 153 "data/maps/NewMap3/scripts.pory"
	step_end

# 156 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyWalksaway2:
# 157 "data/maps/NewMap3/scripts.pory"
	walk_right
# 157 "data/maps/NewMap3/scripts.pory"
	walk_right
# 157 "data/maps/NewMap3/scripts.pory"
	walk_right
# 157 "data/maps/NewMap3/scripts.pory"
	walk_right
# 158 "data/maps/NewMap3/scripts.pory"
	walk_right
# 158 "data/maps/NewMap3/scripts.pory"
	walk_right
# 158 "data/maps/NewMap3/scripts.pory"
	walk_right
# 159 "data/maps/NewMap3/scripts.pory"
	step_end

# 162 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerAway:
# 163 "data/maps/NewMap3/scripts.pory"
	face_down
# 164 "data/maps/NewMap3/scripts.pory"
	walk_down
# 165 "data/maps/NewMap3/scripts.pory"
	step_end

# 168 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerAway2:
# 169 "data/maps/NewMap3/scripts.pory"
	face_down
# 170 "data/maps/NewMap3/scripts.pory"
	walk_down
# 171 "data/maps/NewMap3/scripts.pory"
	step_end

BoyonYourteamChat_Eventscript_CustomFollowerScript::
# 175 "data/maps/NewMap3/scripts.pory"
	facefollower
# 176 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_3
# 177 "data/maps/NewMap3/scripts.pory"
	dynmultichoice 1, 1, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_0, BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_1
# 179 "data/maps/NewMap3/scripts.pory"
	closemessage
# 180 "data/maps/NewMap3/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/NewMap3/scripts.pory"
	case 0, BoyonYourteamChat_Eventscript_CustomFollowerScript_2
# 184 "data/maps/NewMap3/scripts.pory"
	case 1, BoyonYourteamChat_Eventscript_CustomFollowerScript_3
	return

BoyonYourteamChat_Eventscript_CustomFollowerScript_2:
# 182 "data/maps/NewMap3/scripts.pory"
	msgbox BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_2
# 183 "data/maps/NewMap3/scripts.pory"
	closemessage
	return

BoyonYourteamChat_Eventscript_CustomFollowerScript_3:
# 185 "data/maps/NewMap3/scripts.pory"
	msgbox BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_3
# 186 "data/maps/NewMap3/scripts.pory"
	closemessage
	return


NewMap3_EventScript_WeatherTrigger01::
# 191 "data/maps/NewMap3/scripts.pory"
	lock
# 192 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_SHADE
# 193 "data/maps/NewMap3/scripts.pory"
	doweather
# 194 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 2
# 195 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_WeatherTrigger02::
# 199 "data/maps/NewMap3/scripts.pory"
	lock
# 200 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_RAIN
# 201 "data/maps/NewMap3/scripts.pory"
	doweather
# 202 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_WeatherTrigger02_Text_0
# 203 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 204 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 3
# 205 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_WeatherTrigger03::
# 209 "data/maps/NewMap3/scripts.pory"
	lock
# 210 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 211 "data/maps/NewMap3/scripts.pory"
	doweather
# 212 "data/maps/NewMap3/scripts.pory"
	playse SE_DOWNPOUR
# 213 "data/maps/NewMap3/scripts.pory"
	waitse
# 214 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_WeatherTrigger03_Text_0
# 215 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 216 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 4
# 217 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger08::
# 221 "data/maps/NewMap3/scripts.pory"
	lock
# 222 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesPlayer
# 223 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 224 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger08_Text_0
# 225 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 226 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerUp
# 227 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 228 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesup
# 229 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 230 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger06::
# 234 "data/maps/NewMap3/scripts.pory"
	lock
# 235 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesPlayerRight
# 236 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 237 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger08_Text_0
# 238 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 239 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerLeft
# 240 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 241 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesup
# 242 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 243 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger07::
# 247 "data/maps/NewMap3/scripts.pory"
	lock
# 248 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger08_Text_0
# 249 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 250 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerDown
# 251 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 252 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_TriggerNoExit::
# 256 "data/maps/NewMap3/scripts.pory"
	lock
# 257 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_TriggerNoExit_Text_0
# 258 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 259 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerRight
# 260 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 261 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_TriggerNoExit2::
# 265 "data/maps/NewMap3/scripts.pory"
	lock
# 266 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_TriggerNoExit2_Text_0
# 267 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 268 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerRight
# 269 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 270 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger04::
# 274 "data/maps/NewMap3/scripts.pory"
	lock
# 275 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_0
# 276 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 277 "data/maps/NewMap3/scripts.pory"
	applymovement 3, NewMap3_Movement_BoyWalkUpTowardsBattle
# 278 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 279 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_WalkUpTowardsNoise
# 280 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 281 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_1
# 282 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 283 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 284 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 285 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
# 286 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 287 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 288 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 289 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 290 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA, CRY_MODE_ENCOUNTER
# 291 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 292 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 293 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 294 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 295 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
# 296 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 297 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 298 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 299 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 300 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 301 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 302 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA, CRY_MODE_ENCOUNTER
# 303 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 304 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 305 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_URSARING_0x037
# 306 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 307 "data/maps/NewMap3/scripts.pory"
	removeobject 2
# 308 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 309 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_2
# 310 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 311 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_NewMap3Boy_0x036
# 312 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_URSALUNA_0x038
# 313 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 314 "data/maps/NewMap3/scripts.pory"
	removeobject 4
# 315 "data/maps/NewMap3/scripts.pory"
	destroyfollower
# 316 "data/maps/NewMap3/scripts.pory"
	setobjectxy 15, 29, 13
# 317 "data/maps/NewMap3/scripts.pory"
	setobjectxy 16, 32, 11
# 318 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 319 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 320 "data/maps/NewMap3/scripts.pory"
	doweather
# 321 "data/maps/NewMap3/scripts.pory"
	playse SE_THUNDER
# 322 "data/maps/NewMap3/scripts.pory"
	waitse
# 323 "data/maps/NewMap3/scripts.pory"
	playse SE_THUNDER
# 324 "data/maps/NewMap3/scripts.pory"
	waitse
# 325 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_3
# 326 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 327 "data/maps/NewMap3/scripts.pory"
	applymovement 1, NewMap3_Movement_GirlRunsAway
# 328 "data/maps/NewMap3/scripts.pory"
	waitmovement 1
# 329 "data/maps/NewMap3/scripts.pory"
	applymovement 16, NewMap3_Movement_URSALUNAchasesGirl
# 330 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 331 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA_BLOODMOON, CRY_MODE_ENCOUNTER
# 332 "data/maps/NewMap3/scripts.pory"
	waitmoncry
# 333 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_4
# 334 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 335 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoySeessister
# 336 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 337 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_WalkUpTowardsBattle
# 338 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 339 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_5
# 340 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 341 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_FaceUrsalunaBattle
# 342 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 343 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 4
# 344 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger042::
# 348 "data/maps/NewMap3/scripts.pory"
	lock
# 349 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_0
# 350 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 351 "data/maps/NewMap3/scripts.pory"
	applymovement 3, NewMap3_Movement_BoyWalkUpTowardsBattle2
# 352 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 353 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_WalkUpTowardsNoise2
# 354 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 355 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger042_Text_0
# 356 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 357 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 358 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 359 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
# 360 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 361 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 362 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 363 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 364 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA, CRY_MODE_ENCOUNTER
# 365 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 366 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 367 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 368 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 369 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
# 370 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 371 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 372 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 373 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 374 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 375 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 376 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA, CRY_MODE_ENCOUNTER
# 377 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 378 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 379 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_URSARING_0x037
# 380 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 381 "data/maps/NewMap3/scripts.pory"
	removeobject 2
# 382 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 383 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_2
# 384 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 385 "data/maps/NewMap3/scripts.pory"
	closemessage
# 386 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_NewMap3Boy_0x036
# 387 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_URSALUNA_0x038
# 388 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 389 "data/maps/NewMap3/scripts.pory"
	removeobject 4
# 390 "data/maps/NewMap3/scripts.pory"
	destroyfollower
# 391 "data/maps/NewMap3/scripts.pory"
	setobjectxy 15, 29, 13
# 392 "data/maps/NewMap3/scripts.pory"
	setobjectxy 16, 32, 11
# 393 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 394 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 395 "data/maps/NewMap3/scripts.pory"
	doweather
# 396 "data/maps/NewMap3/scripts.pory"
	playse SE_THUNDER
# 397 "data/maps/NewMap3/scripts.pory"
	waitse
# 398 "data/maps/NewMap3/scripts.pory"
	playse SE_THUNDER
# 399 "data/maps/NewMap3/scripts.pory"
	waitse
# 400 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_3
# 401 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 402 "data/maps/NewMap3/scripts.pory"
	applymovement 1, NewMap3_Movement_GirlRunsAway
# 403 "data/maps/NewMap3/scripts.pory"
	waitmovement 1
# 404 "data/maps/NewMap3/scripts.pory"
	applymovement 16, NewMap3_Movement_URSALUNAchasesGirl
# 405 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 406 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA_BLOODMOON, CRY_MODE_ENCOUNTER
# 407 "data/maps/NewMap3/scripts.pory"
	waitmoncry
# 408 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_4
# 409 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 410 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoySeessister
# 411 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 412 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_WalkUpTowardsBattle
# 413 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 414 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_5
# 415 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 416 "data/maps/NewMap3/scripts.pory"
	closemessage
# 417 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_FaceUrsalunaBattle
# 418 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 419 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 4
# 420 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_UrsalunaBattle::
# 424 "data/maps/NewMap3/scripts.pory"
	lock
# 425 "data/maps/NewMap3/scripts.pory"
	faceplayer
# 426 "data/maps/NewMap3/scripts.pory"
	playse SE_THUNDER
# 427 "data/maps/NewMap3/scripts.pory"
	waitse
# 428 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA_BLOODMOON, CRY_MODE_ENCOUNTER
# 429 "data/maps/NewMap3/scripts.pory"
	delay 40
# 430 "data/maps/NewMap3/scripts.pory"
	waitmoncry
# 431 "data/maps/NewMap3/scripts.pory"
	setwildbattle SPECIES_URSALUNA_BLOODMOON, 30
# 432 "data/maps/NewMap3/scripts.pory"
	dowildbattle
# 433 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_NewMap3Girl_0x03A
# 434 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_Bloodmoonursula_0x03D
# 435 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 436 "data/maps/NewMap3/scripts.pory"
	removeobject 16
# 437 "data/maps/NewMap3/scripts.pory"
	setobjectxy 1, 32, 9
# 438 "data/maps/NewMap3/scripts.pory"
	turnobject 1, DIR_WEST
# 439 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 440 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_UrsalunaBattle_Text_0
# 441 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 442 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyApproachesAfterBattle
# 443 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 444 "data/maps/NewMap3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 445 "data/maps/NewMap3/scripts.pory"
	delay 8
# 446 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_UrsalunaBattle_Text_1
# 447 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 448 "data/maps/NewMap3/scripts.pory"
	closemessage
# 449 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyLeaves
# 450 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 451 "data/maps/NewMap3/scripts.pory"
	applymovement 1, NewMap3_Movement_GirlLeaves
# 452 "data/maps/NewMap3/scripts.pory"
	waitmovement 1
# 453 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_boy2newmap3_0x039
# 454 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_NewMap3Girl_0x03A
# 455 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 456 "data/maps/NewMap3/scripts.pory"
	removeobject 15
# 457 "data/maps/NewMap3/scripts.pory"
	removeobject 1
# 458 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 459 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 5
# 460 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


# 463 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_WalkUpTowardsNoise:
# 464 "data/maps/NewMap3/scripts.pory"
	face_up
# 465 "data/maps/NewMap3/scripts.pory"
	walk_up
# 465 "data/maps/NewMap3/scripts.pory"
	walk_up
# 465 "data/maps/NewMap3/scripts.pory"
	walk_up
# 465 "data/maps/NewMap3/scripts.pory"
	walk_up
# 466 "data/maps/NewMap3/scripts.pory"
	step_end

# 469 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_WalkUpTowardsNoise2:
# 470 "data/maps/NewMap3/scripts.pory"
	face_right
# 471 "data/maps/NewMap3/scripts.pory"
	walk_right
# 472 "data/maps/NewMap3/scripts.pory"
	walk_up
# 472 "data/maps/NewMap3/scripts.pory"
	walk_up
# 472 "data/maps/NewMap3/scripts.pory"
	walk_up
# 472 "data/maps/NewMap3/scripts.pory"
	walk_up
# 473 "data/maps/NewMap3/scripts.pory"
	step_end

# 476 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_URSARINGAttacksURSALUNA:
# 477 "data/maps/NewMap3/scripts.pory"
	jump_right
# 478 "data/maps/NewMap3/scripts.pory"
	jump_left
# 479 "data/maps/NewMap3/scripts.pory"
	face_right
# 480 "data/maps/NewMap3/scripts.pory"
	step_end

# 483 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_URSALUNAAttacksURSARING:
# 484 "data/maps/NewMap3/scripts.pory"
	jump_left
# 485 "data/maps/NewMap3/scripts.pory"
	jump_right
# 486 "data/maps/NewMap3/scripts.pory"
	face_left
# 487 "data/maps/NewMap3/scripts.pory"
	step_end

# 490 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_WalkUpTowardsBattle:
# 491 "data/maps/NewMap3/scripts.pory"
	face_up
# 492 "data/maps/NewMap3/scripts.pory"
	walk_up
# 492 "data/maps/NewMap3/scripts.pory"
	walk_up
# 493 "data/maps/NewMap3/scripts.pory"
	step_end

# 496 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoySeessister:
# 497 "data/maps/NewMap3/scripts.pory"
	walk_fast_up
# 498 "data/maps/NewMap3/scripts.pory"
	walk_fast_up
# 499 "data/maps/NewMap3/scripts.pory"
	step_end

# 502 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_GirlRunsAway:
# 503 "data/maps/NewMap3/scripts.pory"
	face_right
# 504 "data/maps/NewMap3/scripts.pory"
	walk_fast_right
# 505 "data/maps/NewMap3/scripts.pory"
	face_up
# 506 "data/maps/NewMap3/scripts.pory"
	walk_fast_up
# 506 "data/maps/NewMap3/scripts.pory"
	walk_fast_up
# 507 "data/maps/NewMap3/scripts.pory"
	face_right
# 508 "data/maps/NewMap3/scripts.pory"
	walk_fast_right
# 508 "data/maps/NewMap3/scripts.pory"
	walk_fast_right
# 508 "data/maps/NewMap3/scripts.pory"
	walk_fast_right
# 509 "data/maps/NewMap3/scripts.pory"
	face_up
# 510 "data/maps/NewMap3/scripts.pory"
	walk_up
# 511 "data/maps/NewMap3/scripts.pory"
	jump_in_place_up
# 512 "data/maps/NewMap3/scripts.pory"
	face_down
# 513 "data/maps/NewMap3/scripts.pory"
	step_end

# 516 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_URSALUNAchasesGirl:
# 517 "data/maps/NewMap3/scripts.pory"
	face_up
# 518 "data/maps/NewMap3/scripts.pory"
	walk_up
# 518 "data/maps/NewMap3/scripts.pory"
	walk_up
# 519 "data/maps/NewMap3/scripts.pory"
	step_end

# 522 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyWalkUpTowardsBattle:
# 523 "data/maps/NewMap3/scripts.pory"
	face_left
# 524 "data/maps/NewMap3/scripts.pory"
	walk_left
# 525 "data/maps/NewMap3/scripts.pory"
	face_up
# 526 "data/maps/NewMap3/scripts.pory"
	walk_up
# 526 "data/maps/NewMap3/scripts.pory"
	walk_up
# 527 "data/maps/NewMap3/scripts.pory"
	face_right
# 528 "data/maps/NewMap3/scripts.pory"
	walk_right
# 528 "data/maps/NewMap3/scripts.pory"
	walk_right
# 529 "data/maps/NewMap3/scripts.pory"
	face_up
# 530 "data/maps/NewMap3/scripts.pory"
	walk_up
# 530 "data/maps/NewMap3/scripts.pory"
	walk_up
# 531 "data/maps/NewMap3/scripts.pory"
	step_end

# 534 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyWalkUpTowardsBattle2:
# 535 "data/maps/NewMap3/scripts.pory"
	face_right
# 536 "data/maps/NewMap3/scripts.pory"
	walk_right
# 537 "data/maps/NewMap3/scripts.pory"
	face_up
# 538 "data/maps/NewMap3/scripts.pory"
	walk_up
# 539 "data/maps/NewMap3/scripts.pory"
	face_right
# 540 "data/maps/NewMap3/scripts.pory"
	walk_right
# 541 "data/maps/NewMap3/scripts.pory"
	face_up
# 542 "data/maps/NewMap3/scripts.pory"
	walk_up
# 542 "data/maps/NewMap3/scripts.pory"
	walk_up
# 542 "data/maps/NewMap3/scripts.pory"
	walk_up
# 543 "data/maps/NewMap3/scripts.pory"
	step_end

# 546 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyFacesPlayer:
# 547 "data/maps/NewMap3/scripts.pory"
	face_left
# 548 "data/maps/NewMap3/scripts.pory"
	step_end

# 551 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyFacesup:
# 552 "data/maps/NewMap3/scripts.pory"
	face_up
# 553 "data/maps/NewMap3/scripts.pory"
	step_end

# 556 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerUp:
# 557 "data/maps/NewMap3/scripts.pory"
	face_up
# 558 "data/maps/NewMap3/scripts.pory"
	walk_up
# 559 "data/maps/NewMap3/scripts.pory"
	step_end

# 562 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyFacesPlayerRight:
# 563 "data/maps/NewMap3/scripts.pory"
	face_right
# 564 "data/maps/NewMap3/scripts.pory"
	step_end

# 567 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerLeft:
# 568 "data/maps/NewMap3/scripts.pory"
	face_left
# 569 "data/maps/NewMap3/scripts.pory"
	walk_left
# 570 "data/maps/NewMap3/scripts.pory"
	step_end

# 572 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerDown:
# 573 "data/maps/NewMap3/scripts.pory"
	face_down
# 574 "data/maps/NewMap3/scripts.pory"
	walk_down
# 575 "data/maps/NewMap3/scripts.pory"
	step_end

# 578 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_FaceUrsalunaBattle:
# 579 "data/maps/NewMap3/scripts.pory"
	face_up
# 580 "data/maps/NewMap3/scripts.pory"
	walk_up
# 581 "data/maps/NewMap3/scripts.pory"
	step_end

# 583 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyApproachesAfterBattle:
# 584 "data/maps/NewMap3/scripts.pory"
	face_right
# 585 "data/maps/NewMap3/scripts.pory"
	walk_right
# 585 "data/maps/NewMap3/scripts.pory"
	walk_right
# 586 "data/maps/NewMap3/scripts.pory"
	face_up
# 587 "data/maps/NewMap3/scripts.pory"
	walk_up
# 588 "data/maps/NewMap3/scripts.pory"
	face_player
# 589 "data/maps/NewMap3/scripts.pory"
	step_end

# 592 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyLeaves:
# 593 "data/maps/NewMap3/scripts.pory"
	face_left
# 594 "data/maps/NewMap3/scripts.pory"
	walk_left
# 594 "data/maps/NewMap3/scripts.pory"
	walk_left
# 595 "data/maps/NewMap3/scripts.pory"
	face_down
# 596 "data/maps/NewMap3/scripts.pory"
	walk_down
# 596 "data/maps/NewMap3/scripts.pory"
	walk_down
# 596 "data/maps/NewMap3/scripts.pory"
	walk_down
# 597 "data/maps/NewMap3/scripts.pory"
	walk_down
# 597 "data/maps/NewMap3/scripts.pory"
	walk_down
# 597 "data/maps/NewMap3/scripts.pory"
	walk_down
# 598 "data/maps/NewMap3/scripts.pory"
	step_end

# 601 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_GirlLeaves:
# 602 "data/maps/NewMap3/scripts.pory"
	face_down
# 603 "data/maps/NewMap3/scripts.pory"
	walk_down
# 604 "data/maps/NewMap3/scripts.pory"
	face_left
# 605 "data/maps/NewMap3/scripts.pory"
	walk_left
# 605 "data/maps/NewMap3/scripts.pory"
	walk_left
# 605 "data/maps/NewMap3/scripts.pory"
	walk_left
# 606 "data/maps/NewMap3/scripts.pory"
	walk_down
# 606 "data/maps/NewMap3/scripts.pory"
	walk_down
# 606 "data/maps/NewMap3/scripts.pory"
	walk_down
# 607 "data/maps/NewMap3/scripts.pory"
	walk_down
# 607 "data/maps/NewMap3/scripts.pory"
	walk_down
# 607 "data/maps/NewMap3/scripts.pory"
	walk_down
# 608 "data/maps/NewMap3/scripts.pory"
	step_end

# 610 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerRight:
# 611 "data/maps/NewMap3/scripts.pory"
	face_right
# 612 "data/maps/NewMap3/scripts.pory"
	walk_right
# 613 "data/maps/NewMap3/scripts.pory"
	step_end

NewMap3_EventScript_WeatherReturnTrigger::
# 617 "data/maps/NewMap3/scripts.pory"
	lockall
# 618 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_NONE
# 619 "data/maps/NewMap3/scripts.pory"
	doweather
# 620 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 6
# 621 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_BoyNeedsHelp_Text_0:
# 39 "data/maps/NewMap3/scripts.pory"
	.string "Leaf: Hey {PLAYER}, I need to head\n"
	.string "home. Ill catch ya later!$"

NewMap3_EventScript_BoyNeedsHelp_Text_1:
# 53 "data/maps/NewMap3/scripts.pory"
	.string "Hey You, Could you help me find my\n"
	.string "sister?$"

NewMap3_EventScript_BoyNeedsHelp_Text_2:
# 54 "data/maps/NewMap3/scripts.pory"
	.string "I cannot find her and im getting\n"
	.string "worried...$"

NewMap3_EventScript_BoyNeedsHelp_Text_3:
# 56 "data/maps/NewMap3/scripts.pory"
	.string "What would you like to do?$"

NewMap3_EventScript_BoyNeedsHelp_Text_4:
# 58 "data/maps/NewMap3/scripts.pory"
	.string "Help the boy find his sister$"

NewMap3_EventScript_BoyNeedsHelp_Text_5:
# 58 "data/maps/NewMap3/scripts.pory"
	.string "Im busy right now$"

NewMap3_EventScript_BoyNeedsHelp_Text_6:
# 66 "data/maps/NewMap3/scripts.pory"
	.string "I hope she's okay...$"

BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_0:
# 178 "data/maps/NewMap3/scripts.pory"
	.string "Ask about Her Whereabouts$"

BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_1:
# 178 "data/maps/NewMap3/scripts.pory"
	.string "Ask where to look$"

BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_2:
# 182 "data/maps/NewMap3/scripts.pory"
	.string "Shes usually playing near the pond.$"

BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_3:
# 185 "data/maps/NewMap3/scripts.pory"
	.string "I think she may have wondered off, down\n"
	.string "this trail$"

NewMap3_EventScript_WeatherTrigger02_Text_0:
# 202 "data/maps/NewMap3/scripts.pory"
	.string "We should hurry before the weather\n"
	.string "gets worse...$"

NewMap3_EventScript_WeatherTrigger03_Text_0:
# 214 "data/maps/NewMap3/scripts.pory"
	.string "I hope we find her soon, The storm is\n"
	.string "getting worse.$"

NewMap3_EventScript_Trigger08_Text_0:
# 224 "data/maps/NewMap3/scripts.pory"
	.string "You have to do something! PLEASE!$"

NewMap3_EventScript_TriggerNoExit_Text_0:
# 257 "data/maps/NewMap3/scripts.pory"
	.string "Ive already looked this way$"

NewMap3_EventScript_TriggerNoExit2_Text_0:
# 266 "data/maps/NewMap3/scripts.pory"
	.string "We have already looked this way$"

NewMap3_EventScript_Trigger04_Text_0:
# 275 "data/maps/NewMap3/scripts.pory"
	.string "Wait! I think i hear something ahead!$"

NewMap3_EventScript_Trigger04_Text_1:
# 281 "data/maps/NewMap3/scripts.pory"
	.string "Be caraeful, theres a Ursaring up there!$"

NewMap3_EventScript_Trigger04_Text_2:
# 309 "data/maps/NewMap3/scripts.pory"
	.string "Woah! Ursaring just got knocked out by\n"
	.string "something...$"

NewMap3_EventScript_Trigger04_Text_3:
# 325 "data/maps/NewMap3/scripts.pory"
	.string "Girl: AHHHHH!$"

NewMap3_EventScript_Trigger04_Text_4:
# 333 "data/maps/NewMap3/scripts.pory"
	.string "MY SISTER!$"

NewMap3_EventScript_Trigger04_Text_5:
# 339 "data/maps/NewMap3/scripts.pory"
	.string "Please! You have to do something!$"

NewMap3_EventScript_Trigger042_Text_0:
# 355 "data/maps/NewMap3/scripts.pory"
	.string "Be careful, theres a Ursaring up there!$"

NewMap3_EventScript_UrsalunaBattle_Text_0:
# 440 "data/maps/NewMap3/scripts.pory"
	.string "Thank you for saving me$"

NewMap3_EventScript_UrsalunaBattle_Text_1:
# 446 "data/maps/NewMap3/scripts.pory"
	.string "We are going home now, Thank you!$"
