RusturfPass_MapScripts::
# 8 "data/maps/RusturfPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfPass_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RusturfPass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/RusturfPass/scripts.pory"
	setobjectaswildencounter 4, 1
# 11 "data/maps/RusturfPass/scripts.pory"
	setobjectaswildencounter 5, 1
# 12 "data/maps/RusturfPass/scripts.pory"
	setobjectaswildencounter 7, 1
# 13 "data/maps/RusturfPass/scripts.pory"
	setobjectaswildencounter 8, 1
# 14 "data/maps/RusturfPass/scripts.pory"
	setobjectaswildencounter 9, 1
	return


RusturfPass_EventScript_OverworldMon0::
# 31 "data/maps/RusturfPass/scripts.pory"
	lock
# 32 "data/maps/RusturfPass/scripts.pory"
	applymovement 4, Route101Ext02_Movement_Ow_MonFacesPlayer
# 33 "data/maps/RusturfPass/scripts.pory"
	callnative GetOverworldMonSpecies
# 34 "data/maps/RusturfPass/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 35 "data/maps/RusturfPass/scripts.pory"
	startoverworldencounter 8
# 36 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 37 "data/maps/RusturfPass/scripts.pory"
	removeobject 4
# 38 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 39 "data/maps/RusturfPass/scripts.pory"
	releaseall
	end


RusturfPass_EventScript_OverworldMon1::
# 44 "data/maps/RusturfPass/scripts.pory"
	lock
# 45 "data/maps/RusturfPass/scripts.pory"
	applymovement 5, Route101Ext02_Movement_Ow_MonFacesPlayer
# 46 "data/maps/RusturfPass/scripts.pory"
	callnative GetOverworldMonSpecies
# 47 "data/maps/RusturfPass/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 48 "data/maps/RusturfPass/scripts.pory"
	startoverworldencounter 8
# 49 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 50 "data/maps/RusturfPass/scripts.pory"
	removeobject 5
# 51 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 52 "data/maps/RusturfPass/scripts.pory"
	releaseall
	end


RusturfPass_EventScript_OverworldMon2::
# 57 "data/maps/RusturfPass/scripts.pory"
	lock
# 58 "data/maps/RusturfPass/scripts.pory"
	applymovement 7, Route101Ext02_Movement_Ow_MonFacesPlayer
# 59 "data/maps/RusturfPass/scripts.pory"
	callnative GetOverworldMonSpecies
# 60 "data/maps/RusturfPass/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 61 "data/maps/RusturfPass/scripts.pory"
	startoverworldencounter 8
# 62 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 63 "data/maps/RusturfPass/scripts.pory"
	removeobject 7
# 64 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 65 "data/maps/RusturfPass/scripts.pory"
	releaseall
	end


RusturfPass_EventScript_OverworldMon3::
# 70 "data/maps/RusturfPass/scripts.pory"
	lock
# 71 "data/maps/RusturfPass/scripts.pory"
	applymovement 8, Route101Ext02_Movement_Ow_MonFacesPlayer
# 72 "data/maps/RusturfPass/scripts.pory"
	callnative GetOverworldMonSpecies
# 73 "data/maps/RusturfPass/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 74 "data/maps/RusturfPass/scripts.pory"
	startoverworldencounter 8
# 75 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 76 "data/maps/RusturfPass/scripts.pory"
	removeobject 8
# 77 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 78 "data/maps/RusturfPass/scripts.pory"
	releaseall
	end


RusturfPass_EventScript_OverworldMon4::
# 83 "data/maps/RusturfPass/scripts.pory"
	lock
# 84 "data/maps/RusturfPass/scripts.pory"
	applymovement 9, Route101Ext02_Movement_Ow_MonFacesPlayer
# 85 "data/maps/RusturfPass/scripts.pory"
	callnative GetOverworldMonSpecies
# 86 "data/maps/RusturfPass/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 87 "data/maps/RusturfPass/scripts.pory"
	startoverworldencounter 8
# 88 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 89 "data/maps/RusturfPass/scripts.pory"
	removeobject 9
# 90 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 91 "data/maps/RusturfPass/scripts.pory"
	releaseall
	end


# 95 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_Ow_MonFacesPlayer:
# 96 "data/maps/RusturfPass/scripts.pory"
	face_player
# 97 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_AzelfFliesByTrigger01::
# 101 "data/maps/RusturfPass/scripts.pory"
	lockall
# 102 "data/maps/RusturfPass/scripts.pory"
	setobjectxy 2, 45, 20
# 103 "data/maps/RusturfPass/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 104 "data/maps/RusturfPass/scripts.pory"
	applymovement 2, RusturfPass_Movement_AzelfFliesBy1
# 105 "data/maps/RusturfPass/scripts.pory"
	waitmovement 2
# 106 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 1
# 107 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_Azelf01_0x04E
# 108 "data/maps/RusturfPass/scripts.pory"
	removeobject 2
# 109 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 112 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_AzelfFliesBy1:
# 113 "data/maps/RusturfPass/scripts.pory"
	face_left
# 114 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 114 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 114 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 115 "data/maps/RusturfPass/scripts.pory"
	face_up
# 116 "data/maps/RusturfPass/scripts.pory"
	walk_up
# 116 "data/maps/RusturfPass/scripts.pory"
	walk_up
# 117 "data/maps/RusturfPass/scripts.pory"
	face_right
# 118 "data/maps/RusturfPass/scripts.pory"
	jump_in_place_right
# 119 "data/maps/RusturfPass/scripts.pory"
	face_left
# 120 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 121 "data/maps/RusturfPass/scripts.pory"
	face_up
# 122 "data/maps/RusturfPass/scripts.pory"
	walk_fast_up
# 122 "data/maps/RusturfPass/scripts.pory"
	walk_fast_up
# 122 "data/maps/RusturfPass/scripts.pory"
	walk_fast_up
# 123 "data/maps/RusturfPass/scripts.pory"
	walk_fast_up
# 123 "data/maps/RusturfPass/scripts.pory"
	walk_fast_up
# 124 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_AzelfFliesByTrigger02::
# 128 "data/maps/RusturfPass/scripts.pory"
	lockall
# 129 "data/maps/RusturfPass/scripts.pory"
	setobjectxy 3, 34, 17
# 130 "data/maps/RusturfPass/scripts.pory"
	applymovement 3, RusturfPass_Movement_AzelfFliesBy2
# 131 "data/maps/RusturfPass/scripts.pory"
	waitmovement 3
# 132 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 2
# 133 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_Azelf02_0x04F
# 134 "data/maps/RusturfPass/scripts.pory"
	removeobject 3
# 135 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 138 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_AzelfFliesBy2:
# 139 "data/maps/RusturfPass/scripts.pory"
	face_left
# 140 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 140 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 140 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 140 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 141 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 141 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 141 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 141 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 142 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_AzelfFliesByTrigger03::
# 146 "data/maps/RusturfPass/scripts.pory"
	lockall
# 147 "data/maps/RusturfPass/scripts.pory"
	setobjectxy 3, 39, 15
# 148 "data/maps/RusturfPass/scripts.pory"
	applymovement 3, RusturfPass_Movement_AzelfFliesBy3
# 149 "data/maps/RusturfPass/scripts.pory"
	waitmovement 3
# 150 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 2
# 151 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_Azelf02_0x04F
# 152 "data/maps/RusturfPass/scripts.pory"
	removeobject 3
# 153 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 156 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_AzelfFliesBy3:
# 157 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 157 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 157 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 158 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 158 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 158 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 159 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_AzelfFliesByTrigger04::
# 163 "data/maps/RusturfPass/scripts.pory"
	lockall
# 164 "data/maps/RusturfPass/scripts.pory"
	clearflag FLAG_Azelf03_0x264
# 165 "data/maps/RusturfPass/scripts.pory"
	addobject 10
# 166 "data/maps/RusturfPass/scripts.pory"
	applymovement 10, RusturfPass_Movement_AzelfFliesBy4
# 167 "data/maps/RusturfPass/scripts.pory"
	waitmovement 10
# 168 "data/maps/RusturfPass/scripts.pory"
	removeobject 10
# 169 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 3
# 170 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 173 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_AzelfFliesBy4:
# 174 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 174 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 174 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 175 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 175 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 175 "data/maps/RusturfPass/scripts.pory"
	walk_fast_down
# 176 "data/maps/RusturfPass/scripts.pory"
	face_left
# 177 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 177 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 178 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_AzelfFliesByTrigger05::
# 182 "data/maps/RusturfPass/scripts.pory"
	lockall
# 183 "data/maps/RusturfPass/scripts.pory"
	clearflag FLAG_AZELF05_0x26B
# 184 "data/maps/RusturfPass/scripts.pory"
	addobject 29
# 185 "data/maps/RusturfPass/scripts.pory"
	applymovement 29, RusturfPass_Movement_AzelfFliesBy5
# 186 "data/maps/RusturfPass/scripts.pory"
	waitmovement 29
# 187 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 3
# 188 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_AZELF05_0x26B
# 189 "data/maps/RusturfPass/scripts.pory"
	removeobject 29
# 190 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 193 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_AzelfFliesBy5:
# 194 "data/maps/RusturfPass/scripts.pory"
	face_left
# 195 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 195 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 195 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 195 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 196 "data/maps/RusturfPass/scripts.pory"
	face_up
# 197 "data/maps/RusturfPass/scripts.pory"
	walk_fast_up
# 197 "data/maps/RusturfPass/scripts.pory"
	walk_fast_up
# 198 "data/maps/RusturfPass/scripts.pory"
	face_left
# 199 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 199 "data/maps/RusturfPass/scripts.pory"
	walk_fast_left
# 200 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_AzelfApproaches_Trigger::
# 204 "data/maps/RusturfPass/scripts.pory"
	lockall
# 205 "data/maps/RusturfPass/scripts.pory"
	setobjectxy 11, 19, 31
# 206 "data/maps/RusturfPass/scripts.pory"
	applymovement 11, RusturfPass_Movement_AzelfApproaches1
# 207 "data/maps/RusturfPass/scripts.pory"
	waitmovement 11
# 208 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 4
# 209 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 212 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_AzelfApproaches1:
# 213 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 213 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 214 "data/maps/RusturfPass/scripts.pory"
	face_up
# 215 "data/maps/RusturfPass/scripts.pory"
	walk_up
# 216 "data/maps/RusturfPass/scripts.pory"
	face_left
# 217 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 218 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_AzelfBattle01::
# 222 "data/maps/RusturfPass/scripts.pory"
	lockall
# 223 "data/maps/RusturfPass/scripts.pory"
	faceplayer
# 224 "data/maps/RusturfPass/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 225 "data/maps/RusturfPass/scripts.pory"
	waitmoncry
# 226 "data/maps/RusturfPass/scripts.pory"
	setwildbattle SPECIES_ZOROARK, 28
# 227 "data/maps/RusturfPass/scripts.pory"
	dowildbattle
# 228 "data/maps/RusturfPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 229 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RusturfPass_EventScript_AzelfBattle01_1
# 232 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RusturfPass_EventScript_AzelfBattle01_2
# 235 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RusturfPass_EventScript_AzelfBattle01_3
	return

RusturfPass_EventScript_AzelfBattle01_1:
# 230 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_Won_or_Caught_Zorroark
	return

RusturfPass_EventScript_AzelfBattle01_2:
# 233 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_Won_or_Caught_Zorroark
	return

RusturfPass_EventScript_AzelfBattle01_3:
# 236 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_RanAwayFromZoroark
	return


RusturfPass_EventScript_Won_or_Caught_Zorroark::
# 241 "data/maps/RusturfPass/scripts.pory"
	lockall
# 242 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_Azelf04_0x265
# 243 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 244 "data/maps/RusturfPass/scripts.pory"
	removeobject 11
# 245 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 246 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 5
# 247 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_RanAwayFromZoroark::
# 251 "data/maps/RusturfPass/scripts.pory"
	lockall
# 252 "data/maps/RusturfPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfPass_movement_PlayerForcedLeft
# 253 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_Azelf04_0x265
# 254 "data/maps/RusturfPass/scripts.pory"
	clearflag FLAG_ZOROARK01_0x266
# 255 "data/maps/RusturfPass/scripts.pory"
	addobject 12
# 256 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 257 "data/maps/RusturfPass/scripts.pory"
	removeobject 11
# 258 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 259 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 262 "data/maps/RusturfPass/scripts.pory"
RusturfPass_movement_PlayerForcedLeft:
# 263 "data/maps/RusturfPass/scripts.pory"
	face_left
# 264 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 265 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_ZoroarkBattle::
# 269 "data/maps/RusturfPass/scripts.pory"
	lockall
# 270 "data/maps/RusturfPass/scripts.pory"
	faceplayer
# 271 "data/maps/RusturfPass/scripts.pory"
	playmoncry SPECIES_ZOROARK, CRY_MODE_ENCOUNTER
# 272 "data/maps/RusturfPass/scripts.pory"
	waitmoncry
# 273 "data/maps/RusturfPass/scripts.pory"
	setwildbattle SPECIES_ZOROARK, 28
# 274 "data/maps/RusturfPass/scripts.pory"
	dowildbattle
# 275 "data/maps/RusturfPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 276 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RusturfPass_EventScript_ZoroarkBattle_1
# 279 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RusturfPass_EventScript_ZoroarkBattle_2
# 282 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RusturfPass_EventScript_ZoroarkBattle_3
	return

RusturfPass_EventScript_ZoroarkBattle_1:
# 277 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_Won_or_Caught_Zorroark2
	return

RusturfPass_EventScript_ZoroarkBattle_2:
# 280 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_Won_or_Caught_Zorroark2
	return

RusturfPass_EventScript_ZoroarkBattle_3:
# 283 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_RanAwayFromZoroark2
	return


RusturfPass_EventScript_Won_or_Caught_Zorroark2::
# 288 "data/maps/RusturfPass/scripts.pory"
	lockall
# 289 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_ZOROARK01_0x266
# 290 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 291 "data/maps/RusturfPass/scripts.pory"
	removeobject 12
# 292 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 293 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 5
# 294 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_RanAwayFromZoroark2::
# 298 "data/maps/RusturfPass/scripts.pory"
	lockall
# 299 "data/maps/RusturfPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfPass_movement_PlayerForcedLeft
# 300 "data/maps/RusturfPass/scripts.pory"
	clearflag FLAG_ZOROARK01_0x266
# 301 "data/maps/RusturfPass/scripts.pory"
	addobject 12
# 302 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 303 "data/maps/RusturfPass/scripts.pory"
	delay 8
# 304 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 305 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_AzelfApproaches_Trigger2::
# 309 "data/maps/RusturfPass/scripts.pory"
	lockall
# 310 "data/maps/RusturfPass/scripts.pory"
	setobjectxy 30, 37, 35
# 311 "data/maps/RusturfPass/scripts.pory"
	applymovement 30, RusturfPass_Movement_AzelfApproaches2
# 312 "data/maps/RusturfPass/scripts.pory"
	waitmovement 30
# 313 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 4
# 314 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 317 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_AzelfApproaches2:
# 318 "data/maps/RusturfPass/scripts.pory"
	face_right
# 319 "data/maps/RusturfPass/scripts.pory"
	walk_right
# 320 "data/maps/RusturfPass/scripts.pory"
	face_up
# 321 "data/maps/RusturfPass/scripts.pory"
	walk_up
# 322 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_AzelfBattle02::
# 326 "data/maps/RusturfPass/scripts.pory"
	lockall
# 327 "data/maps/RusturfPass/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 328 "data/maps/RusturfPass/scripts.pory"
	waitmoncry
# 329 "data/maps/RusturfPass/scripts.pory"
	setwildbattle SPECIES_ZOROARK, 28
# 330 "data/maps/RusturfPass/scripts.pory"
	dowildbattle
# 331 "data/maps/RusturfPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 332 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RusturfPass_EventScript_AzelfBattle02_1
# 335 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RusturfPass_EventScript_AzelfBattle02_2
# 338 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RusturfPass_EventScript_AzelfBattle02_3
	return

RusturfPass_EventScript_AzelfBattle02_1:
# 333 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_Won_or_Caught_ZorroarkRight
	return

RusturfPass_EventScript_AzelfBattle02_2:
# 336 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_Won_or_Caught_ZorroarkRight
	return

RusturfPass_EventScript_AzelfBattle02_3:
# 339 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_RanAwayFromZoroarkRight
	return


RusturfPass_EventScript_Won_or_Caught_ZorroarkRight::
# 344 "data/maps/RusturfPass/scripts.pory"
	lockall
# 345 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_AZELF06_0x26C
# 346 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 347 "data/maps/RusturfPass/scripts.pory"
	removeobject 30
# 348 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 349 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 5
# 350 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_RanAwayFromZoroarkRight::
# 354 "data/maps/RusturfPass/scripts.pory"
	lockall
# 355 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_AZELF06_0x26C
# 356 "data/maps/RusturfPass/scripts.pory"
	clearflag FLAG_ZOROARK02_0x267
# 357 "data/maps/RusturfPass/scripts.pory"
	addobject 13
# 358 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 359 "data/maps/RusturfPass/scripts.pory"
	removeobject 30
# 360 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 361 "data/maps/RusturfPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfPass_movement_PlayerForcedUp
# 362 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 365 "data/maps/RusturfPass/scripts.pory"
RusturfPass_movement_PlayerForcedUp:
# 366 "data/maps/RusturfPass/scripts.pory"
	face_up
# 367 "data/maps/RusturfPass/scripts.pory"
	walk_up
# 368 "data/maps/RusturfPass/scripts.pory"
	step_end

RusturfPass_EventScript_ZoroarkBattle2::
# 372 "data/maps/RusturfPass/scripts.pory"
	lockall
# 373 "data/maps/RusturfPass/scripts.pory"
	playmoncry SPECIES_ZOROARK, CRY_MODE_ENCOUNTER
# 374 "data/maps/RusturfPass/scripts.pory"
	waitmoncry
# 375 "data/maps/RusturfPass/scripts.pory"
	setwildbattle SPECIES_ZOROARK, 28
# 376 "data/maps/RusturfPass/scripts.pory"
	dowildbattle
# 377 "data/maps/RusturfPass/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 378 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RusturfPass_EventScript_ZoroarkBattle2_1
# 381 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RusturfPass_EventScript_ZoroarkBattle2_2
# 384 "data/maps/RusturfPass/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RusturfPass_EventScript_ZoroarkBattle2_3
	return

RusturfPass_EventScript_ZoroarkBattle2_1:
# 379 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_Won_or_Caught_Zorroark3
	return

RusturfPass_EventScript_ZoroarkBattle2_2:
# 382 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_Won_or_Caught_Zorroark3
	return

RusturfPass_EventScript_ZoroarkBattle2_3:
# 385 "data/maps/RusturfPass/scripts.pory"
	call RusturfPass_EventScript_RanAwayFromZoroark3
	return


RusturfPass_EventScript_Won_or_Caught_Zorroark3::
# 390 "data/maps/RusturfPass/scripts.pory"
	lockall
# 391 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_ZOROARK02_0x267
# 392 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 393 "data/maps/RusturfPass/scripts.pory"
	removeobject 13
# 394 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 395 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 5
# 396 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_RanAwayFromZoroark3::
# 400 "data/maps/RusturfPass/scripts.pory"
	lockall
# 401 "data/maps/RusturfPass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfPass_movement_PlayerForcedUp
# 402 "data/maps/RusturfPass/scripts.pory"
	clearflag FLAG_ZOROARK02_0x267
# 403 "data/maps/RusturfPass/scripts.pory"
	addobject 13
# 404 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 405 "data/maps/RusturfPass/scripts.pory"
	delay 8
# 406 "data/maps/RusturfPass/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 407 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_AzelfActualBattle::
# 411 "data/maps/RusturfPass/scripts.pory"
	lockall
# 412 "data/maps/RusturfPass/scripts.pory"
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
# 413 "data/maps/RusturfPass/scripts.pory"
	waitmoncry
# 414 "data/maps/RusturfPass/scripts.pory"
	setwildbattle SPECIES_AZELF, 35, ITEM_LIFE_ORB
# 415 "data/maps/RusturfPass/scripts.pory"
	dowildbattle
# 416 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_AZELF_0x04D
# 417 "data/maps/RusturfPass/scripts.pory"
	removeobject 1
# 418 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 8
# 419 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WingullFlyBy::
# 423 "data/maps/RusturfPass/scripts.pory"
	lockall
# 424 "data/maps/RusturfPass/scripts.pory"
	setobjectxy 27, 35, 28
# 425 "data/maps/RusturfPass/scripts.pory"
	setobjectxy 28, 35, 29
# 426 "data/maps/RusturfPass/scripts.pory"
	applymovement 27, RusturfPass_Movement_WingullFliesby
# 427 "data/maps/RusturfPass/scripts.pory"
	applymovement 28, RusturfPass_Movement_WingullFliesby
# 428 "data/maps/RusturfPass/scripts.pory"
	waitmovement 27
# 429 "data/maps/RusturfPass/scripts.pory"
	waitmovement 28
# 430 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_Wingull1_0x269
# 431 "data/maps/RusturfPass/scripts.pory"
	setflag FLAG_Wingull2_0x26A
# 432 "data/maps/RusturfPass/scripts.pory"
	removeobject 27
# 433 "data/maps/RusturfPass/scripts.pory"
	removeobject 28
# 434 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPass_STATE, 7
# 435 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


# 438 "data/maps/RusturfPass/scripts.pory"
RusturfPass_Movement_WingullFliesby:
# 439 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 439 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 439 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 439 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 439 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 440 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 440 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 440 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 440 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 440 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 441 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 441 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 441 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 441 "data/maps/RusturfPass/scripts.pory"
	walk_left
# 441 "data/maps/RusturfPass/scripts.pory"
	walk_left
	step_end

RusturfPass_EventScript_WeatherTrigger0::
# 445 "data/maps/RusturfPass/scripts.pory"
	lockall
# 446 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 1
# 447 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_SHADE
# 448 "data/maps/RusturfPass/scripts.pory"
	doweather
# 449 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger01::
# 453 "data/maps/RusturfPass/scripts.pory"
	lockall
# 454 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 0
# 455 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_NONE
# 456 "data/maps/RusturfPass/scripts.pory"
	doweather
# 457 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger1::
# 461 "data/maps/RusturfPass/scripts.pory"
	lockall
# 462 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 2
# 463 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_RAIN
# 464 "data/maps/RusturfPass/scripts.pory"
	doweather
# 465 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger1_0::
# 469 "data/maps/RusturfPass/scripts.pory"
	lockall
# 470 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 1
# 471 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_NONE
# 472 "data/maps/RusturfPass/scripts.pory"
	doweather
# 473 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger2::
# 477 "data/maps/RusturfPass/scripts.pory"
	lockall
# 478 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 3
# 479 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_NONE
# 480 "data/maps/RusturfPass/scripts.pory"
	doweather
# 481 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger2_0::
# 485 "data/maps/RusturfPass/scripts.pory"
	lockall
# 486 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 2
# 487 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_RAIN
# 488 "data/maps/RusturfPass/scripts.pory"
	doweather
# 489 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger3::
# 493 "data/maps/RusturfPass/scripts.pory"
	lockall
# 494 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 4
# 495 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_RAIN
# 496 "data/maps/RusturfPass/scripts.pory"
	doweather
# 497 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger3_0::
# 501 "data/maps/RusturfPass/scripts.pory"
	lockall
# 502 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 3
# 503 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_NONE
# 504 "data/maps/RusturfPass/scripts.pory"
	doweather
# 505 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger4::
# 509 "data/maps/RusturfPass/scripts.pory"
	lockall
# 510 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 5
# 511 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_SHADE
# 512 "data/maps/RusturfPass/scripts.pory"
	doweather
# 513 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger4_0::
# 517 "data/maps/RusturfPass/scripts.pory"
	lockall
# 518 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 4
# 519 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_RAIN
# 520 "data/maps/RusturfPass/scripts.pory"
	doweather
# 521 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger5::
# 525 "data/maps/RusturfPass/scripts.pory"
	lockall
# 526 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 6
# 527 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_RAIN
# 528 "data/maps/RusturfPass/scripts.pory"
	doweather
# 529 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger5_0::
# 533 "data/maps/RusturfPass/scripts.pory"
	lockall
# 534 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 5
# 535 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_SHADE
# 536 "data/maps/RusturfPass/scripts.pory"
	doweather
# 537 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger6::
# 541 "data/maps/RusturfPass/scripts.pory"
	lockall
# 542 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 7
# 543 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_SHADE
# 544 "data/maps/RusturfPass/scripts.pory"
	doweather
# 545 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger6_0::
# 549 "data/maps/RusturfPass/scripts.pory"
	lockall
# 550 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 6
# 551 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_RAIN
# 552 "data/maps/RusturfPass/scripts.pory"
	doweather
# 553 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger7::
# 557 "data/maps/RusturfPass/scripts.pory"
	lockall
# 558 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 8
# 559 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_SUNNY
# 560 "data/maps/RusturfPass/scripts.pory"
	doweather
# 561 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return


RusturfPass_EventScript_WeatherTrigger7_0::
# 565 "data/maps/RusturfPass/scripts.pory"
	lockall
# 566 "data/maps/RusturfPass/scripts.pory"
	setvar VAR_RusturfPassWeather_STATE, 7
# 567 "data/maps/RusturfPass/scripts.pory"
	setweather WEATHER_SHADE
# 568 "data/maps/RusturfPass/scripts.pory"
	doweather
# 569 "data/maps/RusturfPass/scripts.pory"
	releaseall
	return

