PartnersHouse_MapScripts::
# 2 "data/maps/PartnersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PartnersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PartnersHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PartnersHouse/scripts.pory"
	map_script_2 VAR_PARTNERSHOUSE_STATE, 1, PartnersHouse_EventScript_LEAFIntroducesYou
	.2byte 0


PartnersHouse_EventScript_LEAFIntroducesYou::
# 12 "data/maps/PartnersHouse/scripts.pory"
	lockall
# 13 "data/maps/PartnersHouse/scripts.pory"
	addobject 1
# 14 "data/maps/PartnersHouse/scripts.pory"
	addobject 2
# 15 "data/maps/PartnersHouse/scripts.pory"
	addobject 4
# 16 "data/maps/PartnersHouse/scripts.pory"
	setobjectxy 1, 6, 10
# 17 "data/maps/PartnersHouse/scripts.pory"
	setobjectxy 2, 5, 2
# 18 "data/maps/PartnersHouse/scripts.pory"
	setobjectxy 4, 2, 9
# 19 "data/maps/PartnersHouse/scripts.pory"
	applymovement 1, PartnersHouse_movement_LeafWalkstoGrandpa
# 20 "data/maps/PartnersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PartnersHouse_movement_PlayerFacesGrandpa
# 21 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 22 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFIntroducesYou_Text_0
# 23 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 24 "data/maps/PartnersHouse/scripts.pory"
	applymovement 4, PartnersHouse_movement_GrandpaTurnsToLeaf
# 25 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 26 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFIntroducesYou_Text_1
# 27 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 28 "data/maps/PartnersHouse/scripts.pory"
	applymovement 4, PartnersHouse_movement_GrandpaTurnsBackAway
# 29 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 30 "data/maps/PartnersHouse/scripts.pory"
	applymovement 1, PartnersHouse_movement_LeafWalksUpToMom
# 31 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 32 "data/maps/PartnersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PartnersHouse_movement_PlayerWalksUpToLeafsMom
# 33 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 34 "data/maps/PartnersHouse/scripts.pory"
	applymovement 2, PartnersHouse_movement_LeafsMomApproaches
# 35 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFIntroducesYou_Text_2
# 36 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 37 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFIntroducesYou_Text_3
# 38 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 39 "data/maps/PartnersHouse/scripts.pory"
	applymovement 2, PartnersHouse_movement_LeafsMomSitsBackDown
# 40 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 41 "data/maps/PartnersHouse/scripts.pory"
	applymovement 1, PartnersHouse_movement_LEAFSitsDown
# 42 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 43 "data/maps/PartnersHouse/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 2
# 44 "data/maps/PartnersHouse/scripts.pory"
	releaseall
	return


# 47 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LeafWalkstoGrandpa:
# 48 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 49 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 50 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 51 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 51 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 52 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 55 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_PlayerFacesGrandpa:
# 56 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 57 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 58 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 59 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 60 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 63 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_GrandpaTurnsToLeaf:
# 64 "data/maps/PartnersHouse/scripts.pory"
	face_right
# 65 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 68 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_GrandpaTurnsBackAway:
# 69 "data/maps/PartnersHouse/scripts.pory"
	face_down
	step_end

# 72 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LeafWalksUpToMom:
# 73 "data/maps/PartnersHouse/scripts.pory"
	face_right
# 74 "data/maps/PartnersHouse/scripts.pory"
	walk_right
# 75 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 76 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 76 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 76 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 76 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 77 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 78 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 79 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 80 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 83 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_PlayerWalksUpToLeafsMom:
# 84 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 85 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 85 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 85 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 85 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 85 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 86 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 89 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LeafsMomApproaches:
# 90 "data/maps/PartnersHouse/scripts.pory"
	face_down
# 91 "data/maps/PartnersHouse/scripts.pory"
	walk_down
# 91 "data/maps/PartnersHouse/scripts.pory"
	walk_down
# 92 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 95 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LeafsMomSitsBackDown:
# 96 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 97 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 97 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 98 "data/maps/PartnersHouse/scripts.pory"
	face_down
# 99 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 102 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LEAFSitsDown:
# 103 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 104 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 105 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 106 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 107 "data/maps/PartnersHouse/scripts.pory"
	face_down
# 108 "data/maps/PartnersHouse/scripts.pory"
	walk_down
# 109 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 110 "data/maps/PartnersHouse/scripts.pory"
	step_end

PartnersHouse_EventScript_LEAFIntroducesYou_Text_0:
# 22 "data/maps/PartnersHouse/scripts.pory"
	.string "Hey Grandpa! Look who came to visit!$"

PartnersHouse_EventScript_LEAFIntroducesYou_Text_1:
# 26 "data/maps/PartnersHouse/scripts.pory"
	.string "Oh, {PLAYER}! I havent seen you, since\n"
	.string "you both were knee high to a\l"
	.string "Kricketune!$"

PartnersHouse_EventScript_LEAFIntroducesYou_Text_2:
# 35 "data/maps/PartnersHouse/scripts.pory"
	.string "Hey Mom, {PLAYER} stopped by!\n"
	.string "{PLAYER} got a pokemon from Prof.\l"
	.string "Birch!$"

PartnersHouse_EventScript_LEAFIntroducesYou_Text_3:
# 37 "data/maps/PartnersHouse/scripts.pory"
	.string "That's awesome! Maybe now the two of\n"
	.string "you could venture together!$"
