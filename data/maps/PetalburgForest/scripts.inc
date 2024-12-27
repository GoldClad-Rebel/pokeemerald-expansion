PetalburgForest_MapScripts::
# 3 "data/maps/PetalburgForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgForest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PetalburgForest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/PetalburgForest/scripts.pory"
	setobjectaswildencounter 8, 1
	return


PetalburgForest_EventScript_leaf1::
# 18 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 19 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 20 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 21 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices1
# 22 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 23 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 24 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 25 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 26 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 27 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside1
# 28 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse1
# 29 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 30 "data/maps/PetalburgForest/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 31 "data/maps/PetalburgForest/scripts.pory"
	waitdooranim
# 32 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LeafEnterHouse
# 33 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse01
# 34 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 35 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 36 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 37 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 38 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 39 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 2
# 40 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 41 "data/maps/PetalburgForest/scripts.pory"
	waitstate
	return


# 44 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LeafEnterHouse:
# 45 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 46 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 49 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse01:
# 50 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 51 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 54 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices1:
# 55 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 56 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 57 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 58 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 59 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 60 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 60 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 60 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 60 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 61 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 62 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 66 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside1:
# 67 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 68 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 69 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 70 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 70 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 70 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 70 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 71 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 72 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 72 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 72 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 73 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 74 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 74 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 75 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 76 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 76 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 77 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 78 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 79 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 82 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse1:
# 83 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 84 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 84 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 85 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 86 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 86 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 86 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 86 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 87 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 88 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 88 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 88 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 89 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 90 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 90 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 91 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 92 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 92 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 93 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 94 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 95 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf2::
# 99 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 100 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 101 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 102 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices2
# 103 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 105 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 106 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 107 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside2
# 108 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse2
# 109 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 110 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 111 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 112 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 113 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 114 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 2
# 115 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 116 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 119 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices2:
# 120 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 121 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 122 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 123 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 124 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 125 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 126 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 127 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 128 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 131 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside2:
# 132 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 133 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 134 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 135 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 137 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 137 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 137 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 138 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 139 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 140 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 141 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 141 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 142 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 143 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 147 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse2:
# 148 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 149 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 149 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 150 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 151 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 153 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 153 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 153 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 154 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 155 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 155 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 156 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 157 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 157 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 158 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 159 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 160 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf3::
# 164 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 165 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 166 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 167 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices3
# 168 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 169 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 170 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 171 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 172 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside3
# 173 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse3
# 174 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 175 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 176 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 177 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 178 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 179 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 2
# 180 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 181 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 184 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices3:
# 185 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 186 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 187 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 188 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 190 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 192 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 195 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside3:
# 196 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 197 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 197 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 199 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 201 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 201 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 202 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 203 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 205 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 206 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 209 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse3:
# 210 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 211 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 213 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 213 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 213 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 213 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 213 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 213 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 214 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 215 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 217 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 217 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 218 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 219 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 221 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 222 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf4::
# 227 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 228 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 229 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 230 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices4
# 231 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 232 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 233 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 234 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 235 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside4
# 236 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse4
# 237 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 238 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 239 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 240 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 241 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 242 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 2
# 243 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 244 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 247 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices4:
# 248 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 249 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 250 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 251 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 252 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 253 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 253 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 253 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 253 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 253 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 254 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 257 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside4:
# 258 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 259 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 259 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 259 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 259 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 259 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 260 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 261 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 261 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 261 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 263 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 263 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 264 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 265 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 265 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 266 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 267 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 268 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 271 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse4:
# 272 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 273 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 273 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 273 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 273 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 273 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 273 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 274 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 275 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 275 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 275 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 276 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 277 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 277 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 278 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 279 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 280 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 281 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 282 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf5::
# 288 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 289 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 290 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 291 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices5
# 292 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 293 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 294 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 295 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 296 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside5
# 297 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse5
# 298 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 300 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 301 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 302 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 303 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 2
# 304 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 305 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 308 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices5:
# 309 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 310 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 311 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 312 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 313 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 314 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 315 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 316 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 319 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside5:
# 320 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 321 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 321 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 321 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 321 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 321 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 322 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 323 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 323 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 323 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 324 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 325 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 325 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 326 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 327 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 327 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 328 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 329 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 330 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 333 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse5:
# 334 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 335 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 336 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 337 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 337 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 337 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 337 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 337 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 338 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 339 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 339 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 339 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 340 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 341 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 341 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 342 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 343 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 343 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 344 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 345 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 346 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf6::
# 351 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 352 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 353 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 354 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices6
# 355 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 356 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 357 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 358 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 359 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside6
# 360 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse6
# 361 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 362 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 363 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 364 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 365 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 366 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 2
# 367 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 368 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 371 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices6:
# 372 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 373 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 374 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 375 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 377 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 377 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 377 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 378 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 379 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 382 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside6:
# 383 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 384 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 384 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 384 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 385 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 386 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 388 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 388 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 389 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 390 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 392 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 393 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 396 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse6:
# 397 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 398 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 399 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 400 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 400 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 400 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 401 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 402 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 404 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 404 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 405 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 406 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 408 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 409 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_OverworldMon0::
# 413 "data/maps/PetalburgForest/scripts.pory"
	lock
# 414 "data/maps/PetalburgForest/scripts.pory"
	applymovement 8, PetalburgForest_Movement_Ow_MonFacesPlayer
# 415 "data/maps/PetalburgForest/scripts.pory"
	callnative GetOverworldMonSpecies
# 416 "data/maps/PetalburgForest/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 417 "data/maps/PetalburgForest/scripts.pory"
	startoverworldencounter 5
# 418 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 419 "data/maps/PetalburgForest/scripts.pory"
	removeobject 8
# 420 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 421 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	end


# 425 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_Ow_MonFacesPlayer:
# 426 "data/maps/PetalburgForest/scripts.pory"
	face_player
# 427 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_Scyther::
# 431 "data/maps/PetalburgForest/scripts.pory"
	lock
# 432 "data/maps/PetalburgForest/scripts.pory"
	applymovement 5, PetalburgForest_Movement_ScytherFacesPlayer
# 433 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_ENCOUNTER
# 434 "data/maps/PetalburgForest/scripts.pory"
	delay 40
# 435 "data/maps/PetalburgForest/scripts.pory"
	waitmoncry
# 436 "data/maps/PetalburgForest/scripts.pory"
	setwildbattle SPECIES_SCYTHER, 20
# 437 "data/maps/PetalburgForest/scripts.pory"
	dowildbattle
# 438 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 439 "data/maps/PetalburgForest/scripts.pory"
	removeobject 5
# 440 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 441 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 444 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_ScytherFacesPlayer:
# 445 "data/maps/PetalburgForest/scripts.pory"
	face_player
# 446 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_Scizor::
# 450 "data/maps/PetalburgForest/scripts.pory"
	lock
# 451 "data/maps/PetalburgForest/scripts.pory"
	applymovement 12, PetalburgForest_Movement_ScizorFacesPlayer
# 452 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_SCIZOR, CRY_MODE_ENCOUNTER
# 453 "data/maps/PetalburgForest/scripts.pory"
	delay 40
# 454 "data/maps/PetalburgForest/scripts.pory"
	waitmoncry
# 455 "data/maps/PetalburgForest/scripts.pory"
	setwildbattle SPECIES_SCIZOR, 38
# 456 "data/maps/PetalburgForest/scripts.pory"
	dowildbattle
# 457 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 458 "data/maps/PetalburgForest/scripts.pory"
	removeobject 12
# 459 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_Scizor_0x035
# 460 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 461 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 464 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_ScizorFacesPlayer:
# 465 "data/maps/PetalburgForest/scripts.pory"
	face_player
# 466 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_Butterfree::
# 470 "data/maps/PetalburgForest/scripts.pory"
	lock
# 471 "data/maps/PetalburgForest/scripts.pory"
	applymovement 5, PetalburgForest_Movement_ButterfreeFacesPlayer
# 472 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_ENCOUNTER
# 473 "data/maps/PetalburgForest/scripts.pory"
	delay 40
# 474 "data/maps/PetalburgForest/scripts.pory"
	waitmoncry
# 475 "data/maps/PetalburgForest/scripts.pory"
	setwildbattle SPECIES_BUTTERFREE, 15
# 476 "data/maps/PetalburgForest/scripts.pory"
	dowildbattle
# 477 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 478 "data/maps/PetalburgForest/scripts.pory"
	removeobject 6
# 479 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 480 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 483 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_ButterfreeFacesPlayer:
# 484 "data/maps/PetalburgForest/scripts.pory"
	face_player
# 485 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_Vivillon::
# 489 "data/maps/PetalburgForest/scripts.pory"
	lock
# 490 "data/maps/PetalburgForest/scripts.pory"
	applymovement 7, PetalburgForest_Movement_VivillonFacesPlayer
# 491 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_VIVILLON, CRY_MODE_ENCOUNTER
# 492 "data/maps/PetalburgForest/scripts.pory"
	delay 40
# 493 "data/maps/PetalburgForest/scripts.pory"
	waitmoncry
# 494 "data/maps/PetalburgForest/scripts.pory"
	setwildbattle SPECIES_VIVILLON, 15
# 495 "data/maps/PetalburgForest/scripts.pory"
	dowildbattle
# 496 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_TO_BLACK
# 497 "data/maps/PetalburgForest/scripts.pory"
	removeobject 7
# 498 "data/maps/PetalburgForest/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 499 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 502 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_VivillonFacesPlayer:
# 503 "data/maps/PetalburgForest/scripts.pory"
	face_player
# 504 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_WildBattleTrigger::
# 508 "data/maps/PetalburgForest/scripts.pory"
	lock
# 509 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_HERACROSS, CRY_MODE_ENCOUNTER
# 510 "data/maps/PetalburgForest/scripts.pory"
	applymovement 4, PetalburgForest_Movement_HeracrossAttacksPinsir
# 511 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 4
# 512 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_PINSIR, CRY_MODE_ENCOUNTER
# 513 "data/maps/PetalburgForest/scripts.pory"
	applymovement 3, PetalburgForest_Movement_PinsirAttacksHeracross
# 514 "data/maps/PetalburgForest/scripts.pory"
	addobject 9
# 515 "data/maps/PetalburgForest/scripts.pory"
	delay 8
# 516 "data/maps/PetalburgForest/scripts.pory"
	applymovement 9, PetalburgForest_Movement_CorviknightApproaches
# 517 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 9
# 518 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_CORVIKNIGHT, CRY_MODE_ENCOUNTER
# 519 "data/maps/PetalburgForest/scripts.pory"
	applymovement 9, PetalburgForest_Movement_CorviknightAttacksPokemon
# 520 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 9
# 521 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_HERACROSS, CRY_MODE_ENCOUNTER
# 522 "data/maps/PetalburgForest/scripts.pory"
	delay 8
# 523 "data/maps/PetalburgForest/scripts.pory"
	playmoncry SPECIES_PINSIR, CRY_MODE_ENCOUNTER
# 524 "data/maps/PetalburgForest/scripts.pory"
	delay 8
# 525 "data/maps/PetalburgForest/scripts.pory"
	applymovement 4, PetalburgForest_Movement_HeracrossRunsAway
# 526 "data/maps/PetalburgForest/scripts.pory"
	applymovement 3, PetalburgForest_Movement_PinsirRunsAway
# 527 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 528 "data/maps/PetalburgForest/scripts.pory"
	removeobject 4
# 529 "data/maps/PetalburgForest/scripts.pory"
	removeobject 3
# 530 "data/maps/PetalburgForest/scripts.pory"
	applymovement 9, PetalburgForest_Movement_CorviknightFlaysAway
# 531 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 9
# 532 "data/maps/PetalburgForest/scripts.pory"
	removeobject 9
# 533 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_Heracross_0x031
# 534 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_Pinsir_0x032
# 535 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_Corviknight_0x033
# 536 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 1
# 537 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 541 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_HeracrossAttacksPinsir:
# 542 "data/maps/PetalburgForest/scripts.pory"
	jump_right
# 543 "data/maps/PetalburgForest/scripts.pory"
	jump_left
# 544 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 545 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 548 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PinsirAttacksHeracross:
# 549 "data/maps/PetalburgForest/scripts.pory"
	jump_left
# 550 "data/maps/PetalburgForest/scripts.pory"
	jump_right
# 551 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 552 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 555 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_CorviknightApproaches:
# 556 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 557 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 557 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 557 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 558 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 559 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 559 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 559 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 560 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 560 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 560 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 561 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 561 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 561 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 562 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 563 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_down
# 563 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_down
# 564 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 565 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 565 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 566 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 567 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 571 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_CorviknightAttacksPokemon:
# 572 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 573 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 574 "data/maps/PetalburgForest/scripts.pory"
	jump_down
# 575 "data/maps/PetalburgForest/scripts.pory"
	jump_up
# 576 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 577 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 580 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_HeracrossRunsAway:
# 581 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_right
# 582 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 583 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 583 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 583 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 584 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 584 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 584 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 585 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 586 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 589 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PinsirRunsAway:
# 590 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_left
# 591 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 592 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_right
# 592 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_right
# 593 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 594 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_up
# 595 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 598 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_CorviknightFlaysAway:
# 599 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 600 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_up
# 601 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 602 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 604 "data/maps/PetalburgForest/scripts.pory"
	walk_fast_left
# 605 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_Jimmy::
# 609 "data/maps/PetalburgForest/scripts.pory"
	trainerbattle_single TRAINER_JIMMY, Jimmy_Intro, Jimmy_Outro
# 610 "data/maps/PetalburgForest/scripts.pory"
	msgbox PostBattle_Jimmy, MSGBOX_AUTOCLOSE
# 611 "data/maps/PetalburgForest/scripts.pory"
	waitmessage
# 612 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


PetalburgForest_EventScript_SignToRoute102Up::
# 628 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 629 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_SignToRoute102Up_Text_0
# 630 "data/maps/PetalburgForest/scripts.pory"
	waitmessage
# 631 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


PetalburgForest_EventScript_SignToPetalburgUp::
# 635 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 636 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_SignToPetalburgUp_Text_0
# 637 "data/maps/PetalburgForest/scripts.pory"
	waitmessage
# 638 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


PetalburgForest_EventScript_LeafsHouseSign::
# 642 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 643 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_LeafsHouseSign_Text_0
# 644 "data/maps/PetalburgForest/scripts.pory"
	waitmessage
# 645 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


PetalburgForest_EventScript_leaf1_Text_0:
# 25 "data/maps/PetalburgForest/scripts.pory"
	.string "Hey, {PLAYER}! You made it! It's been\n"
	.string "a while, why don't you come say hi to my\l"
	.string "family!$"

PetalburgForest_EventScript_SignToRoute102Up_Text_0:
# 629 "data/maps/PetalburgForest/scripts.pory"
	.string "{UP_ARROW} To Route 102$"

PetalburgForest_EventScript_SignToPetalburgUp_Text_0:
# 636 "data/maps/PetalburgForest/scripts.pory"
	.string "{UP_ARROW} To Petalburg City$"

PetalburgForest_EventScript_LeafsHouseSign_Text_0:
# 643 "data/maps/PetalburgForest/scripts.pory"
	.string "Leafs House$"

Jimmy_Intro::
# 615 "data/maps/PetalburgForest/scripts.pory"
	.string "I got you now, Scyther!$"

Jimmy_Outro::
# 619 "data/maps/PetalburgForest/scripts.pory"
	.string "Well, you weren't scyther...$"

PostBattle_Jimmy::
# 623 "data/maps/PetalburgForest/scripts.pory"
	.string "I need to get my eyes checked...$"
