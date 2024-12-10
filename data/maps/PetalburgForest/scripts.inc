PetalburgForest_MapScripts::
	.byte 0


PetalburgForest_EventScript_leaf1::
# 6 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 7 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 8 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 9 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices1
# 10 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 11 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 12 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 13 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 14 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 15 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside1
# 16 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse1
# 17 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 18 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 19 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 20 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 21 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 22 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 1
# 23 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 24 "data/maps/PetalburgForest/scripts.pory"
	waitstate
	return


# 27 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices1:
# 28 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 29 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 30 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 31 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 32 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 33 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 33 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 33 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 33 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 34 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 35 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 36 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 39 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside1:
# 40 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 41 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 42 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 43 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 43 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 43 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 43 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 44 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 45 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 45 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 45 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 46 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 47 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 47 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 48 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 49 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 49 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 50 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 51 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 51 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 52 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 55 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse1:
# 56 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 57 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 58 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 59 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 59 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 59 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 59 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 60 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 61 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 61 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 61 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 62 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 63 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 63 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 64 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 65 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 65 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 66 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 67 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 67 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 68 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf2::
# 72 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 73 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 74 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 75 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices2
# 76 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 78 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 79 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 80 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside2
# 81 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse2
# 82 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 83 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 84 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 85 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 86 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 87 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 1
# 88 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 89 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 92 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices2:
# 93 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 94 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 95 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 96 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 97 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 98 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 98 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 98 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 98 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 98 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 99 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 100 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 101 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 104 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside2:
# 105 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 106 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 107 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 108 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 108 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 108 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 108 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 108 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 109 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 110 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 110 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 110 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 111 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 112 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 112 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 113 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 114 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 114 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 115 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 116 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 116 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 117 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 120 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse2:
# 121 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 122 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 122 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 123 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 124 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 126 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 126 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 126 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 127 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 128 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 128 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 129 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 130 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 130 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 131 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 132 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 132 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 133 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf3::
# 137 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 138 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 139 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 140 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices3
# 141 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 142 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 143 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 144 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 145 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside3
# 146 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse3
# 147 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 148 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 149 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 150 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 151 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 152 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 1
# 153 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 154 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 157 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices3:
# 158 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 159 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 160 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 161 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 162 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 163 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 165 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 168 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside3:
# 169 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 170 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 170 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 170 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 170 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 170 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 170 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 171 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 172 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 174 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 174 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 175 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 176 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 178 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 178 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 179 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 182 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse3:
# 183 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 184 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 186 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 188 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 190 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 191 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 192 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 194 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 194 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf4::
# 200 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 201 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 202 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 203 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices4
# 204 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 205 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 206 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 207 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 208 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside4
# 209 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse4
# 210 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 211 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 212 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 213 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 214 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 215 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 1
# 216 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 217 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 220 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices4:
# 221 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 222 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 223 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 224 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 226 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 226 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 226 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 226 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 226 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 227 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 230 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside4:
# 231 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 232 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 232 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 232 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 232 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 232 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 233 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 234 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 234 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 234 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 235 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 236 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 236 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 237 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 238 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 238 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 239 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 240 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 240 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 241 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 244 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse4:
# 245 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 246 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 247 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 248 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 248 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 248 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 249 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 250 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 250 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 251 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 252 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 252 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 253 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 254 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 254 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 255 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf5::
# 261 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 262 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 263 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 264 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices5
# 265 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 267 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 268 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 269 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside5
# 270 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse5
# 271 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 272 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 273 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 274 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 275 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 276 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 1
# 277 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 278 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 281 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices5:
# 282 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 283 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 284 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 285 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 286 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 287 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 288 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 289 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 292 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside5:
# 293 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 294 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 294 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 294 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 294 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 294 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 295 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 296 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 296 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 296 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 297 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 298 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 298 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 299 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 300 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 300 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 301 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 302 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 302 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 303 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 306 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse5:
# 307 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 308 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 309 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 310 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 310 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 310 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 310 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 310 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 311 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 312 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 313 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 314 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 314 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 315 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 316 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 316 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 317 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 318 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 318 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 319 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf6::
# 324 "data/maps/PetalburgForest/scripts.pory"
	lockall
# 325 "data/maps/PetalburgForest/scripts.pory"
	addobject 1
# 326 "data/maps/PetalburgForest/scripts.pory"
	setobjectxy 1, 15, 8
# 327 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFNotices6
# 328 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 329 "data/maps/PetalburgForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 330 "data/maps/PetalburgForest/scripts.pory"
	msgbox PetalburgForest_EventScript_leaf1_Text_0
# 331 "data/maps/PetalburgForest/scripts.pory"
	closemessage
# 332 "data/maps/PetalburgForest/scripts.pory"
	applymovement 1, PetalburgForest_Movement_LEAFGoesInside6
# 333 "data/maps/PetalburgForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgForest_Movement_PlayerEnterHouse6
# 334 "data/maps/PetalburgForest/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgForest/scripts.pory"
	removeobject 1
# 336 "data/maps/PetalburgForest/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_FOREST
# 337 "data/maps/PetalburgForest/scripts.pory"
	setflag FLAG_LeafHouse_0x02D
# 338 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 1
# 339 "data/maps/PetalburgForest/scripts.pory"
	setvar VAR_PETALBURGFOREST_STATE, 1
# 340 "data/maps/PetalburgForest/scripts.pory"
	warp MAP_PARTNERS_HOUSE, 0
# 341 "data/maps/PetalburgForest/scripts.pory"
	releaseall
	return


# 344 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFNotices6:
# 345 "data/maps/PetalburgForest/scripts.pory"
	disable_jump_landing_ground_effect
# 346 "data/maps/PetalburgForest/scripts.pory"
	jump_in_place_down
# 347 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 348 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 349 "data/maps/PetalburgForest/scripts.pory"
	face_down
# 350 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 350 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 350 "data/maps/PetalburgForest/scripts.pory"
	walk_down
# 351 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 352 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 355 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_LEAFGoesInside6:
# 356 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 357 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 357 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 357 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 358 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 359 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 361 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 361 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 362 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 363 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 365 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 365 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 366 "data/maps/PetalburgForest/scripts.pory"
	step_end

# 369 "data/maps/PetalburgForest/scripts.pory"
PetalburgForest_Movement_PlayerEnterHouse6:
# 370 "data/maps/PetalburgForest/scripts.pory"
	face_left
# 371 "data/maps/PetalburgForest/scripts.pory"
	walk_left
# 372 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 373 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 373 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 373 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 374 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 375 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 377 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 377 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 378 "data/maps/PetalburgForest/scripts.pory"
	face_right
# 379 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgForest/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgForest/scripts.pory"
	face_up
# 381 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 381 "data/maps/PetalburgForest/scripts.pory"
	walk_up
# 382 "data/maps/PetalburgForest/scripts.pory"
	step_end

PetalburgForest_EventScript_leaf1_Text_0:
# 13 "data/maps/PetalburgForest/scripts.pory"
	.string "Hey, {PLAYER}! You made it! It's been\n"
	.string "a while, why don't you come say hi to my\l"
	.string "family!$"
