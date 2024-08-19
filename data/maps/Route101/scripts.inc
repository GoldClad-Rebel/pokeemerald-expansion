# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_SPECIES_TEDDIURSA, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 7 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 8 "data/maps/Route101/scripts.pory"
	.byte 0
# 9 "data/maps/Route101/scripts.pory"

# 10 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 11 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route101/scripts.pory"
	end
# 13 "data/maps/Route101/scripts.pory"

# 14 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 15 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 16 "data/maps/Route101/scripts.pory"
	.2byte 0
# 17 "data/maps/Route101/scripts.pory"

# 18 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 19 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 21 "data/maps/Route101/scripts.pory"
	end
# 22 "data/maps/Route101/scripts.pory"

# 23 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 24 "data/maps/Route101/scripts.pory"
	lockall
# 25 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 26 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 27 "data/maps/Route101/scripts.pory"
	closemessage
# 28 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 9, 16
# 29 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_SPECIES_TEDDIURSA, 13, 14
# 30 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPECIES_TEDDIURSA, Route101_Movement_ZigzagoonChase1
# 33 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route101/scripts.pory"
	playse(SE_LEDGE)
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPECIES_TEDDIURSA, Route101_Movement_ZigzagoonChase2
# 36 "data/maps/Route101/scripts.pory"
	waitmovement 0	
# 37 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPECIES_TEDDIURSA, Route101_Movement_ZigzagoonChaseInCircles
# 38 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 39 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 41 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_SPECIES_TEDDIURSA, Route101_Movement_ZigzagoonFaceBirch
# 43 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 44 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 46 "data/maps/Route101/scripts.pory"
	closemessage
# 47 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 48 "data/maps/Route101/scripts.pory"
	releaseall
# 49 "data/maps/Route101/scripts.pory"
	end
# 50 "data/maps/Route101/scripts.pory"

# 51 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 52 "data/maps/Route101/scripts.pory"
	lockall
# 53 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 54 "data/maps/Route101/scripts.pory"
	closemessage
# 55 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 56 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route101/scripts.pory"
	releaseall
# 58 "data/maps/Route101/scripts.pory"
	end
# 59 "data/maps/Route101/scripts.pory"

# 60 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 61 "data/maps/Route101/scripts.pory"
	lockall
# 62 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 63 "data/maps/Route101/scripts.pory"
	closemessage
# 64 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 65 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route101/scripts.pory"
	releaseall
# 67 "data/maps/Route101/scripts.pory"
	end
# 68 "data/maps/Route101/scripts.pory"

# 69 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 70 "data/maps/Route101/scripts.pory"
	lockall
# 71 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 72 "data/maps/Route101/scripts.pory"
	closemessage
# 73 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 74 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route101/scripts.pory"
	releaseall
# 76 "data/maps/Route101/scripts.pory"
	end
# 77 "data/maps/Route101/scripts.pory"

# 78 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 79 "data/maps/Route101/scripts.pory"
	walk_up
# 80 "data/maps/Route101/scripts.pory"
	step_end
# 81 "data/maps/Route101/scripts.pory"

# 82 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 83 "data/maps/Route101/scripts.pory"
	walk_right
# 84 "data/maps/Route101/scripts.pory"
	step_end
# 85 "data/maps/Route101/scripts.pory"

# 86 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 87 "data/maps/Route101/scripts.pory"
	walk_down
# 88 "data/maps/Route101/scripts.pory"
	step_end
# 89 "data/maps/Route101/scripts.pory"

# 90 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 92 "data/maps/Route101/scripts.pory"
    walk_fast_left
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 127 "data/maps/Route101/scripts.pory"
	step_end
# 128 "data/maps/Route101/scripts.pory"

# 129 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 130 "data/maps/Route101/scripts.pory"
	walk_left
# 131 "data/maps/Route101/scripts.pory"
	walk_left
# 132 "data/maps/Route101/scripts.pory"
	walk_left
# 133 "data/maps/Route101/scripts.pory"
	face_down
# 134 "data/maps/Route101/scripts.pory"
	delay_8	
# 135 "data/maps/Route101/scripts.pory"
	step_end
# 136 "data/maps/Route101/scripts.pory"

# 137 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase2:
# 138 "data/maps/Route101/scripts.pory"
	jump_2_down
# 139 "data/maps/Route101/scripts.pory"
	delay_8
# 140 "data/maps/Route101/scripts.pory"
	face_left
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 142 "data/maps/Route101/scripts.pory"
	face_down
# 143 "data/maps/Route101/scripts.pory"
	delay_8
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 145 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route101/scripts.pory"
	face_left
# 147 "data/maps/Route101/scripts.pory"
	delay_8
# 148 "data/maps/Route101/scripts.pory"
	disable_jump_landing_ground_effect
# 149 "data/maps/Route101/scripts.pory"
	jump_in_place_left
# 150 "data/maps/Route101/scripts.pory"
	step_end
# 151 "data/maps/Route101/scripts.pory"

# 152 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 153 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 154 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 155 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 156 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 157 "data/maps/Route101/scripts.pory"
	step_end
# 158 "data/maps/Route101/scripts.pory"

# 159 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 164 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 165 "data/maps/Route101/scripts.pory"
	step_end
# 166 "data/maps/Route101/scripts.pory"

# 167 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route101/scripts.pory"
    walk_fast_left
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route101/scripts.pory"
	step_end
# 205 "data/maps/Route101/scripts.pory"

# 206 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 207 "data/maps/Route101/scripts.pory"
	face_down
# 208 "data/maps/Route101/scripts.pory"
	delay_8
# 209 "data/maps/Route101/scripts.pory"
	disable_jump_landing_ground_effect
# 210 "data/maps/Route101/scripts.pory"
	jump_in_place_down
# 211 "data/maps/Route101/scripts.pory"
	delay_8
# 212 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 213 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 214 "data/maps/Route101/scripts.pory"
	face_left
# 215 "data/maps/Route101/scripts.pory"
	delay_8
# 216 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 217 "data/maps/Route101/scripts.pory"
	face_right
# 218 "data/maps/Route101/scripts.pory"
	step_end
# 219 "data/maps/Route101/scripts.pory"

# 220 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 221 "data/maps/Route101/scripts.pory"
	step_end
# 222 "data/maps/Route101/scripts.pory"

# 223 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 224 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 225 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 226 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 227 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 228 "data/maps/Route101/scripts.pory"
	step_end
# 229 "data/maps/Route101/scripts.pory"

# 230 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 231 "data/maps/Route101/scripts.pory"
	walk_up
# 232 "data/maps/Route101/scripts.pory"
	walk_up
# 233 "data/maps/Route101/scripts.pory"
	step_end
# 234 "data/maps/Route101/scripts.pory"

# 235 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 236 "data/maps/Route101/scripts.pory"
	walk_up
# 237 "data/maps/Route101/scripts.pory"
	walk_left
# 238 "data/maps/Route101/scripts.pory"
	walk_up
# 239 "data/maps/Route101/scripts.pory"
	step_end
# 240 "data/maps/Route101/scripts.pory"

# 241 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 242 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 243 "data/maps/Route101/scripts.pory"
	end
# 244 "data/maps/Route101/scripts.pory"

# 245 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 246 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 247 "data/maps/Route101/scripts.pory"
	end
# 248 "data/maps/Route101/scripts.pory"

# 249 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 250 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 251 "data/maps/Route101/scripts.pory"
	end
# 252 "data/maps/Route101/scripts.pory"

# 253 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 254 "data/maps/Route101/scripts.pory"
	lock
# 255 "data/maps/Route101/scripts.pory"
	faceplayer
# 256 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 257 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 258 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 259 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_SPECIES_TEDDIURSA
# 260 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 7, 15
# 261 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 262 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 264 "data/maps/Route101/scripts.pory"
	waitstate
# 265 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 266 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 268 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 269 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 270 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 271 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 272 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 273 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 274 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 275 "data/maps/Route101/scripts.pory"
	checkplayergender
# 276 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 277 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 278 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 279 "data/maps/Route101/scripts.pory"
	waitstate
# 280 "data/maps/Route101/scripts.pory"
	release
# 281 "data/maps/Route101/scripts.pory"
	end
# 282 "data/maps/Route101/scripts.pory"

# 283 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 284 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 285 "data/maps/Route101/scripts.pory"
	return
# 286 "data/maps/Route101/scripts.pory"

# 287 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 288 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 289 "data/maps/Route101/scripts.pory"
	return
# 290 "data/maps/Route101/scripts.pory"

# 291 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 292 "data/maps/Route101/scripts.pory"
	walk_right
# 293 "data/maps/Route101/scripts.pory"
	step_end
# 294 "data/maps/Route101/scripts.pory"

# 295 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 296 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 297 "data/maps/Route101/scripts.pory"

# 298 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 299 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 300 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 301 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 302 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 303 "data/maps/Route101/scripts.pory"

# 304 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 305 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 306 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 307 "data/maps/Route101/scripts.pory"

# 308 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 309 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 310 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 311 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 312 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 313 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 314 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 315 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 316 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 317 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 318 "data/maps/Route101/scripts.pory"

# 319 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 320 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 321 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 322 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 323 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 324 "data/maps/Route101/scripts.pory"

# 325 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 326 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 327 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 328 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 329 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 330 "data/maps/Route101/scripts.pory"

# 331 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 332 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 333 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_EventScript_PlayerApproachesBridge::
# 339 "data/maps/Route101/scripts.pory"
	lockall
# 340 "data/maps/Route101/scripts.pory"
	setobjectxy 14, 18, 2
# 341 "data/maps/Route101/scripts.pory"
	delay 8
# 342 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_CORVIKNIGHT, CRY_MODE_ENCOUNTER
# 343 "data/maps/Route101/scripts.pory"
	delay 8
# 344 "data/maps/Route101/scripts.pory"
	applymovement 14, Route101_Movement_CorviknightFlysAway
# 345 "data/maps/Route101/scripts.pory"
	waitmovement 14
# 346 "data/maps/Route101/scripts.pory"
	removeobject 14
# 347 "data/maps/Route101/scripts.pory"
	setflag FLAG_Aipom_0x026
# 348 "data/maps/Route101/scripts.pory"
	setflag FLAG_CORVIKNIGHT_0x020
# 349 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 5
# 350 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 353 "data/maps/Route101/scripts.pory"
Route101_Movement_CorviknightFlysAway:
# 354 "data/maps/Route101/scripts.pory"
	walk_down
# 354 "data/maps/Route101/scripts.pory"
	walk_down
# 354 "data/maps/Route101/scripts.pory"
	walk_down
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 355 "data/maps/Route101/scripts.pory"
	walk_left
# 356 "data/maps/Route101/scripts.pory"
	face_up
# 357 "data/maps/Route101/scripts.pory"
	delay_8
# 358 "data/maps/Route101/scripts.pory"
	walk_up
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 359 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 360 "data/maps/Route101/scripts.pory"
	step_end

Route101_EventScript_PlayerApproachesLittleroot::
# 366 "data/maps/Route101/scripts.pory"
	lockall
# 367 "data/maps/Route101/scripts.pory"
	setobjectxy 15, 0, 9
# 368 "data/maps/Route101/scripts.pory"
	delay 8
# 369 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_ENCOUNTER
# 370 "data/maps/Route101/scripts.pory"
	delay 8
# 371 "data/maps/Route101/scripts.pory"
	applymovement 15, Route101_Movement_PichuRunsBy
# 372 "data/maps/Route101/scripts.pory"
	waitmovement 15
# 373 "data/maps/Route101/scripts.pory"
	removeobject 15
# 374 "data/maps/Route101/scripts.pory"
	setflag FLAG_PICHU_0x022
# 375 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 4
# 376 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 379 "data/maps/Route101/scripts.pory"
Route101_Movement_PichuRunsBy:
# 380 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 380 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 380 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 380 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 380 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 382 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 383 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 384 "data/maps/Route101/scripts.pory"
	step_end

Route101_EventScript_PlayerApproachesLittleroot2::
# 388 "data/maps/Route101/scripts.pory"
	lockall
# 389 "data/maps/Route101/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_ENCOUNTER
# 390 "data/maps/Route101/scripts.pory"
	setobjectxy 15, 0, 9
# 391 "data/maps/Route101/scripts.pory"
	delay 8
# 392 "data/maps/Route101/scripts.pory"
	applymovement 15, Route101_Movement_PichuRunsBy2
# 393 "data/maps/Route101/scripts.pory"
	waitmovement 15
# 394 "data/maps/Route101/scripts.pory"
	removeobject 15
# 395 "data/maps/Route101/scripts.pory"
	setflag FLAG_PICHU_0x022
# 396 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 4
# 397 "data/maps/Route101/scripts.pory"
	releaseall
	return


# 400 "data/maps/Route101/scripts.pory"
Route101_Movement_PichuRunsBy2:
# 401 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 401 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 401 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 401 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 401 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 402 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 402 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 403 "data/maps/Route101/scripts.pory"
	face_down
# 404 "data/maps/Route101/scripts.pory"
	jump_in_place_down
# 405 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 406 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 406 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 406 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 406 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 406 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 406 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 407 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 408 "data/maps/Route101/scripts.pory"
	step_end

Route101_EventScript_PichuAppears::
# 412 "data/maps/Route101/scripts.pory"
	lockall
# 413 "data/maps/Route101/scripts.pory"
	clearflag FLAG_PichuAppears_0x024
# 414 "data/maps/Route101/scripts.pory"
	releaseall
	return

