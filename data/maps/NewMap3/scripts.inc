NewMap3_MapScripts::
# 3 "data/maps/NewMap3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMap3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NewMap3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/NewMap3/scripts.pory"
	setobjectaswildencounter 14, 1
	return


NewMap3_EventScript_OverworldMon0::
# 16 "data/maps/NewMap3/scripts.pory"
	lock
# 17 "data/maps/NewMap3/scripts.pory"
	faceplayer
# 18 "data/maps/NewMap3/scripts.pory"
	callnative GetOverworldMonSpecies
# 19 "data/maps/NewMap3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 20 "data/maps/NewMap3/scripts.pory"
	startoverworldencounter 20
# 21 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 22 "data/maps/NewMap3/scripts.pory"
	removeobject 5
# 23 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 24 "data/maps/NewMap3/scripts.pory"
	releaseall
	end


NewMap3_EventScript_BoyNeedsHelp::
# 29 "data/maps/NewMap3/scripts.pory"
	lock
# 30 "data/maps/NewMap3/scripts.pory"
	checkfollower
# 31 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp_2
NewMap3_EventScript_BoyNeedsHelp_1:
# 43 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp_4
	return

NewMap3_EventScript_BoyNeedsHelp_2:
# 32 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerAway
# 33 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 34 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_0
# 35 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 36 "data/maps/NewMap3/scripts.pory"
	closemessage
# 37 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, PartnersHouse_movement_LEAFheadshome
# 38 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 39 "data/maps/NewMap3/scripts.pory"
	destroyfollower
# 40 "data/maps/NewMap3/scripts.pory"
	clearflag FLAG_leafsittinginhouse_0x02E
# 41 "data/maps/NewMap3/scripts.pory"
	releaseall
	goto NewMap3_EventScript_BoyNeedsHelp_1

NewMap3_EventScript_BoyNeedsHelp_4:
# 44 "data/maps/NewMap3/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 45 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_1
# 46 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_2
# 47 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 48 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_3
# 49 "data/maps/NewMap3/scripts.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, NewMap3_EventScript_BoyNeedsHelp_Text_4, NewMap3_EventScript_BoyNeedsHelp_Text_5
# 51 "data/maps/NewMap3/scripts.pory"
	closemessage
# 52 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp_6
# 58 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_6
# 59 "data/maps/NewMap3/scripts.pory"
	closemessage
# 60 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerAway2
# 61 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 62 "data/maps/NewMap3/scripts.pory"
	releaseall
	return

NewMap3_EventScript_BoyNeedsHelp_6:
# 53 "data/maps/NewMap3/scripts.pory"
	setfollower 3, FOLLOWER_NO_RUN, BoyonYourteamChat_Eventscript_CustomFollowerScript
# 54 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 1
# 55 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_BoyNeedsHelp2::
# 68 "data/maps/NewMap3/scripts.pory"
	lock
# 69 "data/maps/NewMap3/scripts.pory"
	checkfollower
# 70 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp2_2
NewMap3_EventScript_BoyNeedsHelp2_1:
# 80 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp2_4
	return

NewMap3_EventScript_BoyNeedsHelp2_2:
# 71 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerAway
# 72 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 73 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_0
# 74 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 75 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, PartnersHouse_movement_LEAFheadshome
# 76 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 77 "data/maps/NewMap3/scripts.pory"
	destroyfollower
# 78 "data/maps/NewMap3/scripts.pory"
	clearflag FLAG_leafsittinginhouse_0x02E
	goto NewMap3_EventScript_BoyNeedsHelp2_1

NewMap3_EventScript_BoyNeedsHelp2_4:
# 81 "data/maps/NewMap3/scripts.pory"
	faceplayer
# 82 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_1
# 83 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_2
# 84 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 85 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_3
# 86 "data/maps/NewMap3/scripts.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, NewMap3_EventScript_BoyNeedsHelp_Text_4, NewMap3_EventScript_BoyNeedsHelp_Text_5
# 88 "data/maps/NewMap3/scripts.pory"
	closemessage
# 89 "data/maps/NewMap3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewMap3_EventScript_BoyNeedsHelp2_6
# 95 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_6
# 96 "data/maps/NewMap3/scripts.pory"
	closemessage
# 97 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerAway2
# 98 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 99 "data/maps/NewMap3/scripts.pory"
	releaseall
	return

NewMap3_EventScript_BoyNeedsHelp2_6:
# 90 "data/maps/NewMap3/scripts.pory"
	setfollower 3, FOLLOWER_NO_RUN, BoyonYourteamChat_Eventscript_CustomFollowerScript
# 91 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 1
# 92 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


# 104 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerAway:
# 105 "data/maps/NewMap3/scripts.pory"
	face_down
# 106 "data/maps/NewMap3/scripts.pory"
	walk_down
# 107 "data/maps/NewMap3/scripts.pory"
	step_end

# 110 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerAway2:
# 111 "data/maps/NewMap3/scripts.pory"
	face_down
# 112 "data/maps/NewMap3/scripts.pory"
	walk_down
# 113 "data/maps/NewMap3/scripts.pory"
	step_end

BoyonYourteamChat_Eventscript_CustomFollowerScript::
# 117 "data/maps/NewMap3/scripts.pory"
	facefollower
# 118 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_BoyNeedsHelp_Text_3
# 119 "data/maps/NewMap3/scripts.pory"
	dynmultichoice 1, 1, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_0, BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_1
# 121 "data/maps/NewMap3/scripts.pory"
	closemessage
# 122 "data/maps/NewMap3/scripts.pory"
	switch VAR_RESULT
# 123 "data/maps/NewMap3/scripts.pory"
	case 0, BoyonYourteamChat_Eventscript_CustomFollowerScript_2
# 126 "data/maps/NewMap3/scripts.pory"
	case 1, BoyonYourteamChat_Eventscript_CustomFollowerScript_3
	return

BoyonYourteamChat_Eventscript_CustomFollowerScript_2:
# 124 "data/maps/NewMap3/scripts.pory"
	msgbox BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_2
# 125 "data/maps/NewMap3/scripts.pory"
	closemessage
	return

BoyonYourteamChat_Eventscript_CustomFollowerScript_3:
# 127 "data/maps/NewMap3/scripts.pory"
	msgbox BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_3
# 128 "data/maps/NewMap3/scripts.pory"
	closemessage
	return


NewMap3_EventScript_WeatherTrigger01::
# 133 "data/maps/NewMap3/scripts.pory"
	lock
# 134 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_SHADE
# 135 "data/maps/NewMap3/scripts.pory"
	doweather
# 136 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 2
# 137 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_WeatherTrigger02::
# 141 "data/maps/NewMap3/scripts.pory"
	lock
# 142 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_RAIN
# 143 "data/maps/NewMap3/scripts.pory"
	doweather
# 144 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_WeatherTrigger02_Text_0
# 145 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 146 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 3
# 147 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_WeatherTrigger03::
# 151 "data/maps/NewMap3/scripts.pory"
	lock
# 152 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 153 "data/maps/NewMap3/scripts.pory"
	doweather
# 154 "data/maps/NewMap3/scripts.pory"
	playse SE_DOWNPOUR
# 155 "data/maps/NewMap3/scripts.pory"
	waitse
# 156 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_WeatherTrigger03_Text_0
# 157 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 158 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 4
# 159 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger08::
# 163 "data/maps/NewMap3/scripts.pory"
	lock
# 164 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesPlayer
# 165 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 166 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger08_Text_0
# 167 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 168 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerUp
# 169 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 170 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesup
# 171 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 172 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger05::
# 176 "data/maps/NewMap3/scripts.pory"
	lock
# 177 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesPlayerRight
# 178 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 179 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger08_Text_0
# 180 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 181 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerUp
# 182 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 183 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesup
# 184 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 185 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger06::
# 189 "data/maps/NewMap3/scripts.pory"
	lock
# 190 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesPlayerRight
# 191 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 192 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger08_Text_0
# 193 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 194 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerLeft
# 195 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 196 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyFacesup
# 197 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 198 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger07::
# 202 "data/maps/NewMap3/scripts.pory"
	lock
# 203 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger08_Text_0
# 204 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 205 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerDown
# 206 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 207 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_TriggerNoExit::
# 211 "data/maps/NewMap3/scripts.pory"
	lock
# 212 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_TriggerNoExit_Text_0
# 213 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 214 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerRight
# 215 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 216 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_TriggerNoExit2::
# 220 "data/maps/NewMap3/scripts.pory"
	lock
# 221 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_TriggerNoExit2_Text_0
# 222 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 223 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_ForcePlayerRight
# 224 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 225 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_Trigger04::
# 229 "data/maps/NewMap3/scripts.pory"
	lock
# 230 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_0
# 231 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 232 "data/maps/NewMap3/scripts.pory"
	applymovement 3, NewMap3_Movement_BoyWalkUpTowardsBattle
# 233 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 234 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_WalkUpTowardsNoise
# 235 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 236 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_1
# 237 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 238 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 239 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 240 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
# 241 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 242 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 243 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 244 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 245 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA, CRY_MODE_ENCOUNTER
# 246 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 247 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 248 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 249 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 250 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
# 251 "data/maps/NewMap3/scripts.pory"
	applymovement 2, NewMap3_Movement_URSARINGAttacksURSALUNA
# 252 "data/maps/NewMap3/scripts.pory"
	waitmovement 2
# 253 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 254 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 255 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 256 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 257 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA, CRY_MODE_ENCOUNTER
# 258 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAAttacksURSARING
# 259 "data/maps/NewMap3/scripts.pory"
	waitmovement 4
# 260 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_URSARING_0x037
# 261 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 262 "data/maps/NewMap3/scripts.pory"
	removeobject 2
# 263 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 264 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_2
# 265 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 266 "data/maps/NewMap3/scripts.pory"
	playse SE_THUNDERSTORM
# 267 "data/maps/NewMap3/scripts.pory"
	waitse
# 268 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_NewMap3Boy_0x036
# 269 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 270 "data/maps/NewMap3/scripts.pory"
	destroyfollower
# 271 "data/maps/NewMap3/scripts.pory"
	setobjectxy 15, 29, 13
# 272 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 273 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_3
# 274 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 275 "data/maps/NewMap3/scripts.pory"
	applymovement 1, NewMap3_Movement_GirlRunsAway
# 276 "data/maps/NewMap3/scripts.pory"
	waitmovement 1
# 277 "data/maps/NewMap3/scripts.pory"
	applymovement 4, NewMap3_Movement_URSALUNAchasesGirl
# 278 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 279 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA_BLOODMOON, CRY_MODE_ENCOUNTER
# 280 "data/maps/NewMap3/scripts.pory"
	waitmoncry
# 281 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_4
# 282 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 283 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoySeessister
# 284 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 285 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_WalkUpTowardsBattle
# 286 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 287 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_Trigger04_Text_5
# 288 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 289 "data/maps/NewMap3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewMap3_Movement_FaceUrsalunaBattle
# 290 "data/maps/NewMap3/scripts.pory"
	waitmovement 0
# 291 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 4
# 292 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


NewMap3_EventScript_UrsalunaBattle::
# 296 "data/maps/NewMap3/scripts.pory"
	lock
# 297 "data/maps/NewMap3/scripts.pory"
	faceplayer
# 298 "data/maps/NewMap3/scripts.pory"
	playmoncry SPECIES_URSALUNA_BLOODMOON, CRY_MODE_ENCOUNTER
# 299 "data/maps/NewMap3/scripts.pory"
	delay 40
# 300 "data/maps/NewMap3/scripts.pory"
	waitmoncry
# 301 "data/maps/NewMap3/scripts.pory"
	setwildbattle SPECIES_URSALUNA_BLOODMOON, 30
# 302 "data/maps/NewMap3/scripts.pory"
	dowildbattle
# 303 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_NewMap3Girl_0x03A
# 304 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_URSALUNA_0x038
# 305 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 306 "data/maps/NewMap3/scripts.pory"
	removeobject 4
# 307 "data/maps/NewMap3/scripts.pory"
	setobjectxy 1, 32, 9
# 308 "data/maps/NewMap3/scripts.pory"
	turnobject 1, DIR_WEST
# 309 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 310 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_UrsalunaBattle_Text_0
# 311 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 312 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyApproachesAfterBattle
# 313 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 314 "data/maps/NewMap3/scripts.pory"
	msgbox NewMap3_EventScript_UrsalunaBattle_Text_1
# 315 "data/maps/NewMap3/scripts.pory"
	waitmessage
# 316 "data/maps/NewMap3/scripts.pory"
	applymovement 15, NewMap3_Movement_BoyLeaves
# 317 "data/maps/NewMap3/scripts.pory"
	waitmovement 3
# 318 "data/maps/NewMap3/scripts.pory"
	applymovement 1, NewMap3_Movement_GirlLeaves
# 319 "data/maps/NewMap3/scripts.pory"
	waitmovement 1
# 320 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_boy2newmap3_0x039
# 321 "data/maps/NewMap3/scripts.pory"
	setflag FLAG_NewMap3Girl_0x03A
# 322 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 323 "data/maps/NewMap3/scripts.pory"
	removeobject 15
# 324 "data/maps/NewMap3/scripts.pory"
	removeobject 1
# 325 "data/maps/NewMap3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 326 "data/maps/NewMap3/scripts.pory"
	setweather WEATHER_NONE
# 327 "data/maps/NewMap3/scripts.pory"
	doweather
# 328 "data/maps/NewMap3/scripts.pory"
	setvar VAR_NewMap3_STATE, 5
# 329 "data/maps/NewMap3/scripts.pory"
	releaseall
	return


# 332 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_WalkUpTowardsNoise:
# 333 "data/maps/NewMap3/scripts.pory"
	face_up
# 334 "data/maps/NewMap3/scripts.pory"
	walk_up
# 334 "data/maps/NewMap3/scripts.pory"
	walk_up
# 334 "data/maps/NewMap3/scripts.pory"
	walk_up
# 334 "data/maps/NewMap3/scripts.pory"
	walk_up
# 335 "data/maps/NewMap3/scripts.pory"
	step_end

# 337 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_URSARINGAttacksURSALUNA:
# 338 "data/maps/NewMap3/scripts.pory"
	jump_right
# 339 "data/maps/NewMap3/scripts.pory"
	jump_left
# 340 "data/maps/NewMap3/scripts.pory"
	face_right
# 341 "data/maps/NewMap3/scripts.pory"
	step_end

# 344 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_URSALUNAAttacksURSARING:
# 345 "data/maps/NewMap3/scripts.pory"
	jump_left
# 346 "data/maps/NewMap3/scripts.pory"
	jump_right
# 347 "data/maps/NewMap3/scripts.pory"
	face_left
# 348 "data/maps/NewMap3/scripts.pory"
	step_end

# 351 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_WalkUpTowardsBattle:
# 352 "data/maps/NewMap3/scripts.pory"
	face_up
# 353 "data/maps/NewMap3/scripts.pory"
	walk_up
# 353 "data/maps/NewMap3/scripts.pory"
	walk_up
# 354 "data/maps/NewMap3/scripts.pory"
	step_end

# 357 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoySeessister:
# 358 "data/maps/NewMap3/scripts.pory"
	walk_fast_up
# 359 "data/maps/NewMap3/scripts.pory"
	walk_fast_up
# 360 "data/maps/NewMap3/scripts.pory"
	step_end

# 363 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_GirlRunsAway:
# 364 "data/maps/NewMap3/scripts.pory"
	face_right
# 365 "data/maps/NewMap3/scripts.pory"
	walk_fast_right
# 366 "data/maps/NewMap3/scripts.pory"
	face_up
# 367 "data/maps/NewMap3/scripts.pory"
	walk_fast_up
# 367 "data/maps/NewMap3/scripts.pory"
	walk_fast_up
# 368 "data/maps/NewMap3/scripts.pory"
	face_right
# 369 "data/maps/NewMap3/scripts.pory"
	walk_fast_right
# 369 "data/maps/NewMap3/scripts.pory"
	walk_fast_right
# 369 "data/maps/NewMap3/scripts.pory"
	walk_fast_right
# 370 "data/maps/NewMap3/scripts.pory"
	face_up
# 371 "data/maps/NewMap3/scripts.pory"
	walk_up
# 372 "data/maps/NewMap3/scripts.pory"
	jump_in_place_up
# 373 "data/maps/NewMap3/scripts.pory"
	face_down
# 374 "data/maps/NewMap3/scripts.pory"
	step_end

# 377 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_URSALUNAchasesGirl:
# 378 "data/maps/NewMap3/scripts.pory"
	face_up
# 379 "data/maps/NewMap3/scripts.pory"
	walk_up
# 379 "data/maps/NewMap3/scripts.pory"
	walk_up
# 380 "data/maps/NewMap3/scripts.pory"
	step_end

# 383 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyWalkUpTowardsBattle:
# 384 "data/maps/NewMap3/scripts.pory"
	face_up
# 385 "data/maps/NewMap3/scripts.pory"
	walk_up
# 386 "data/maps/NewMap3/scripts.pory"
	face_right
# 387 "data/maps/NewMap3/scripts.pory"
	walk_right
# 388 "data/maps/NewMap3/scripts.pory"
	face_up
# 389 "data/maps/NewMap3/scripts.pory"
	walk_up
# 389 "data/maps/NewMap3/scripts.pory"
	walk_up
# 389 "data/maps/NewMap3/scripts.pory"
	walk_up
# 390 "data/maps/NewMap3/scripts.pory"
	step_end

# 393 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyFacesPlayer:
# 394 "data/maps/NewMap3/scripts.pory"
	face_left
# 395 "data/maps/NewMap3/scripts.pory"
	step_end

# 398 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyFacesup:
# 399 "data/maps/NewMap3/scripts.pory"
	face_up
# 400 "data/maps/NewMap3/scripts.pory"
	step_end

# 403 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerUp:
# 404 "data/maps/NewMap3/scripts.pory"
	face_up
# 405 "data/maps/NewMap3/scripts.pory"
	walk_up
# 406 "data/maps/NewMap3/scripts.pory"
	step_end

# 409 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyFacesPlayerRight:
# 410 "data/maps/NewMap3/scripts.pory"
	face_right
# 411 "data/maps/NewMap3/scripts.pory"
	step_end

# 414 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerLeft:
# 415 "data/maps/NewMap3/scripts.pory"
	face_left
# 416 "data/maps/NewMap3/scripts.pory"
	walk_left
# 417 "data/maps/NewMap3/scripts.pory"
	step_end

# 419 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerDown:
# 420 "data/maps/NewMap3/scripts.pory"
	face_down
# 421 "data/maps/NewMap3/scripts.pory"
	walk_down
# 422 "data/maps/NewMap3/scripts.pory"
	step_end

# 425 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_FaceUrsalunaBattle:
# 426 "data/maps/NewMap3/scripts.pory"
	face_up
# 427 "data/maps/NewMap3/scripts.pory"
	walk_up
# 428 "data/maps/NewMap3/scripts.pory"
	step_end

# 430 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyApproachesAfterBattle:
# 431 "data/maps/NewMap3/scripts.pory"
	face_right
# 432 "data/maps/NewMap3/scripts.pory"
	walk_right
# 432 "data/maps/NewMap3/scripts.pory"
	walk_right
# 433 "data/maps/NewMap3/scripts.pory"
	face_up
# 434 "data/maps/NewMap3/scripts.pory"
	walk_up
# 435 "data/maps/NewMap3/scripts.pory"
	face_player
# 436 "data/maps/NewMap3/scripts.pory"
	step_end

# 439 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_BoyLeaves:
# 440 "data/maps/NewMap3/scripts.pory"
	face_left
# 441 "data/maps/NewMap3/scripts.pory"
	walk_left
# 441 "data/maps/NewMap3/scripts.pory"
	walk_left
# 442 "data/maps/NewMap3/scripts.pory"
	face_down
# 443 "data/maps/NewMap3/scripts.pory"
	walk_down
# 443 "data/maps/NewMap3/scripts.pory"
	walk_down
# 443 "data/maps/NewMap3/scripts.pory"
	walk_down
# 444 "data/maps/NewMap3/scripts.pory"
	walk_down
# 444 "data/maps/NewMap3/scripts.pory"
	walk_down
# 444 "data/maps/NewMap3/scripts.pory"
	walk_down
# 445 "data/maps/NewMap3/scripts.pory"
	step_end

# 448 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_GirlLeaves:
# 449 "data/maps/NewMap3/scripts.pory"
	face_down
# 450 "data/maps/NewMap3/scripts.pory"
	walk_down
# 451 "data/maps/NewMap3/scripts.pory"
	face_left
# 452 "data/maps/NewMap3/scripts.pory"
	walk_left
# 452 "data/maps/NewMap3/scripts.pory"
	walk_left
# 452 "data/maps/NewMap3/scripts.pory"
	walk_left
# 453 "data/maps/NewMap3/scripts.pory"
	walk_down
# 453 "data/maps/NewMap3/scripts.pory"
	walk_down
# 453 "data/maps/NewMap3/scripts.pory"
	walk_down
# 454 "data/maps/NewMap3/scripts.pory"
	walk_down
# 454 "data/maps/NewMap3/scripts.pory"
	walk_down
# 454 "data/maps/NewMap3/scripts.pory"
	walk_down
# 455 "data/maps/NewMap3/scripts.pory"
	step_end

# 457 "data/maps/NewMap3/scripts.pory"
NewMap3_Movement_ForcePlayerRight:
# 458 "data/maps/NewMap3/scripts.pory"
	face_right
# 459 "data/maps/NewMap3/scripts.pory"
	walk_right
# 460 "data/maps/NewMap3/scripts.pory"
	step_end

NewMap3_EventScript_BoyNeedsHelp_Text_0:
# 34 "data/maps/NewMap3/scripts.pory"
	.string "Leaf: Hey {PLAYER}, I need to head\n"
	.string "home. Ill catch ya later!$"

NewMap3_EventScript_BoyNeedsHelp_Text_1:
# 45 "data/maps/NewMap3/scripts.pory"
	.string "Hey You, Could you help me find my\n"
	.string "sister?$"

NewMap3_EventScript_BoyNeedsHelp_Text_2:
# 46 "data/maps/NewMap3/scripts.pory"
	.string "I cannot find her and im getting\n"
	.string "worried...$"

NewMap3_EventScript_BoyNeedsHelp_Text_3:
# 48 "data/maps/NewMap3/scripts.pory"
	.string "What would you like to do?$"

NewMap3_EventScript_BoyNeedsHelp_Text_4:
# 50 "data/maps/NewMap3/scripts.pory"
	.string "Help the boy find his sister$"

NewMap3_EventScript_BoyNeedsHelp_Text_5:
# 50 "data/maps/NewMap3/scripts.pory"
	.string "Im busy right now$"

NewMap3_EventScript_BoyNeedsHelp_Text_6:
# 58 "data/maps/NewMap3/scripts.pory"
	.string "I hope she's okay...$"

BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_0:
# 120 "data/maps/NewMap3/scripts.pory"
	.string "Ask about Her Whereabouts$"

BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_1:
# 120 "data/maps/NewMap3/scripts.pory"
	.string "Ask where to look$"

BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_2:
# 124 "data/maps/NewMap3/scripts.pory"
	.string "Shes usually playing near the pond.$"

BoyonYourteamChat_Eventscript_CustomFollowerScript_Text_3:
# 127 "data/maps/NewMap3/scripts.pory"
	.string "I think she may have wondered off, down\n"
	.string "this trail$"

NewMap3_EventScript_WeatherTrigger02_Text_0:
# 144 "data/maps/NewMap3/scripts.pory"
	.string "We should hurry before the weather\n"
	.string "gets worse...$"

NewMap3_EventScript_WeatherTrigger03_Text_0:
# 156 "data/maps/NewMap3/scripts.pory"
	.string "I hope we find her soon, The storm is\n"
	.string "getting worse.$"

NewMap3_EventScript_Trigger08_Text_0:
# 166 "data/maps/NewMap3/scripts.pory"
	.string "You have to do something! PLEASE!$"

NewMap3_EventScript_TriggerNoExit_Text_0:
# 212 "data/maps/NewMap3/scripts.pory"
	.string "Ive already looked this way$"

NewMap3_EventScript_TriggerNoExit2_Text_0:
# 221 "data/maps/NewMap3/scripts.pory"
	.string "We have already looked this way$"

NewMap3_EventScript_Trigger04_Text_0:
# 230 "data/maps/NewMap3/scripts.pory"
	.string "Wait! I think i hear something ahead!$"

NewMap3_EventScript_Trigger04_Text_1:
# 236 "data/maps/NewMap3/scripts.pory"
	.string "Be caraeful, theres a Ursaring up there!$"

NewMap3_EventScript_Trigger04_Text_2:
# 264 "data/maps/NewMap3/scripts.pory"
	.string "Woah! Ursaring just got knocked out by\n"
	.string "something...$"

NewMap3_EventScript_Trigger04_Text_3:
# 273 "data/maps/NewMap3/scripts.pory"
	.string "Girl: AHHHHH!$"

NewMap3_EventScript_Trigger04_Text_4:
# 281 "data/maps/NewMap3/scripts.pory"
	.string "MY SISTER!$"

NewMap3_EventScript_Trigger04_Text_5:
# 287 "data/maps/NewMap3/scripts.pory"
	.string "Please! You have to do something!$"

NewMap3_EventScript_UrsalunaBattle_Text_0:
# 310 "data/maps/NewMap3/scripts.pory"
	.string "Thank you for saving me$"

NewMap3_EventScript_UrsalunaBattle_Text_1:
# 314 "data/maps/NewMap3/scripts.pory"
	.string "We are going home now, Thank you!$"
