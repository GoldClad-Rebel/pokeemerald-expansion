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
	waitmovement 0
# 36 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFIntroducesYou_Text_2
# 37 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 38 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFIntroducesYou_Text_3
# 39 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 40 "data/maps/PartnersHouse/scripts.pory"
	applymovement 2, PartnersHouse_movement_LeafsMomSitsBackDown
# 41 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 42 "data/maps/PartnersHouse/scripts.pory"
	applymovement 1, PartnersHouse_movement_LEAFSitsDown
# 43 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 44 "data/maps/PartnersHouse/scripts.pory"
	setvar VAR_PARTNERSHOUSE_STATE, 2
# 45 "data/maps/PartnersHouse/scripts.pory"
	releaseall
	return


# 48 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LeafWalkstoGrandpa:
# 49 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 50 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 51 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 52 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 52 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 53 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 56 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_PlayerFacesGrandpa:
# 57 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 58 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 59 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 60 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 61 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 64 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_GrandpaTurnsToLeaf:
# 65 "data/maps/PartnersHouse/scripts.pory"
	face_right
# 66 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 69 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_GrandpaTurnsBackAway:
# 70 "data/maps/PartnersHouse/scripts.pory"
	face_down
	step_end

# 73 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LeafWalksUpToMom:
# 74 "data/maps/PartnersHouse/scripts.pory"
	face_right
# 75 "data/maps/PartnersHouse/scripts.pory"
	walk_right
# 76 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 77 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 77 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 77 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 77 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 78 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 79 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 80 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 81 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 84 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_PlayerWalksUpToLeafsMom:
# 85 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 86 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 86 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 86 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 86 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 86 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 87 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 90 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LeafsMomApproaches:
# 91 "data/maps/PartnersHouse/scripts.pory"
	face_down
# 92 "data/maps/PartnersHouse/scripts.pory"
	walk_down
# 92 "data/maps/PartnersHouse/scripts.pory"
	walk_down
# 93 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 96 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LeafsMomSitsBackDown:
# 97 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 98 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 98 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 99 "data/maps/PartnersHouse/scripts.pory"
	face_down
# 100 "data/maps/PartnersHouse/scripts.pory"
	step_end

# 103 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LEAFSitsDown:
# 104 "data/maps/PartnersHouse/scripts.pory"
	face_up
# 105 "data/maps/PartnersHouse/scripts.pory"
	walk_up
# 106 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 107 "data/maps/PartnersHouse/scripts.pory"
	walk_left
# 108 "data/maps/PartnersHouse/scripts.pory"
	face_down
# 109 "data/maps/PartnersHouse/scripts.pory"
	walk_down
# 110 "data/maps/PartnersHouse/scripts.pory"
	face_left
# 111 "data/maps/PartnersHouse/scripts.pory"
	step_end

PartnersHouse_EventScript_LEAFAsksToJoin::
# 115 "data/maps/PartnersHouse/scripts.pory"
	faceplayer
# 116 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFAsksToJoin_Text_0
# 117 "data/maps/PartnersHouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, PartnersHouse_EventScript_LEAFAsksToJoin_Text_1, PartnersHouse_EventScript_LEAFAsksToJoin_Text_2
# 119 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 120 "data/maps/PartnersHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PartnersHouse_EventScript_LEAFAsksToJoin_1
# 125 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFAsksToJoin_Text_3
# 126 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 127 "data/maps/PartnersHouse/scripts.pory"
	turnobject 1, DIR_WEST
	return

PartnersHouse_EventScript_LEAFAsksToJoin_1:
# 121 "data/maps/PartnersHouse/scripts.pory"
	setfollower 1, FOLLOWER_NO_RUN, LEAFonYourteamChat_Eventscript_CustomFollowerScript
	return


LEAFonYourteamChat_Eventscript_CustomFollowerScript::
# 132 "data/maps/PartnersHouse/scripts.pory"
	facefollower
# 133 "data/maps/PartnersHouse/scripts.pory"
	msgbox PartnersHouse_EventScript_LEAFAsksToJoin_Text_0
# 134 "data/maps/PartnersHouse/scripts.pory"
	dynmultichoice 1, 1, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, LEAFonYourteamChat_Eventscript_CustomFollowerScript_Text_0, LEAFonYourteamChat_Eventscript_CustomFollowerScript_Text_1, PartnersHouse_EventScript_LEAFAsksToJoin_Text_2
# 136 "data/maps/PartnersHouse/scripts.pory"
	closemessage
# 137 "data/maps/PartnersHouse/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/PartnersHouse/scripts.pory"
	case 0, LEAFonYourteamChat_Eventscript_CustomFollowerScript_2
# 143 "data/maps/PartnersHouse/scripts.pory"
	case 1, LEAFonYourteamChat_Eventscript_CustomFollowerScript_3
# 147 "data/maps/PartnersHouse/scripts.pory"
	case 2, LEAFonYourteamChat_Eventscript_CustomFollowerScript_4
	return

LEAFonYourteamChat_Eventscript_CustomFollowerScript_2:
# 139 "data/maps/PartnersHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, PartnersHouse_movement_LEAFheadshome
# 140 "data/maps/PartnersHouse/scripts.pory"
	waitmovement 0
# 141 "data/maps/PartnersHouse/scripts.pory"
	destroyfollower
# 142 "data/maps/PartnersHouse/scripts.pory"
	clearflag FLAG_leafsittinginhouse_0x02E
	return

LEAFonYourteamChat_Eventscript_CustomFollowerScript_3:
# 144 "data/maps/PartnersHouse/scripts.pory"
	special HealPlayerParty
# 145 "data/maps/PartnersHouse/scripts.pory"
	msgbox LEAFonYourteamChat_Eventscript_CustomFollowerScript_Text_2
# 146 "data/maps/PartnersHouse/scripts.pory"
	closemessage
	return

LEAFonYourteamChat_Eventscript_CustomFollowerScript_4:
# 148 "data/maps/PartnersHouse/scripts.pory"
	msgbox LEAFonYourteamChat_Eventscript_CustomFollowerScript_Text_3
# 149 "data/maps/PartnersHouse/scripts.pory"
	closemessage
	return


# 153 "data/maps/PartnersHouse/scripts.pory"
PartnersHouse_movement_LEAFheadshome:
# 154 "data/maps/PartnersHouse/scripts.pory"
	face_down
# 155 "data/maps/PartnersHouse/scripts.pory"
	walk_down
# 156 "data/maps/PartnersHouse/scripts.pory"
	walk_down
# 157 "data/maps/PartnersHouse/scripts.pory"
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
# 36 "data/maps/PartnersHouse/scripts.pory"
	.string "Hey Mom, {PLAYER} stopped by!\n"
	.string "{PLAYER} got a pokemon from Prof.\l"
	.string "Birch!$"

PartnersHouse_EventScript_LEAFIntroducesYou_Text_3:
# 38 "data/maps/PartnersHouse/scripts.pory"
	.string "That's awesome! Maybe now the two of\n"
	.string "you could venture together!$"

PartnersHouse_EventScript_LEAFAsksToJoin_Text_0:
# 116 "data/maps/PartnersHouse/scripts.pory"
	.string "What would you like to do?$"

PartnersHouse_EventScript_LEAFAsksToJoin_Text_1:
# 118 "data/maps/PartnersHouse/scripts.pory"
	.string "Have LEAF join your team$"

PartnersHouse_EventScript_LEAFAsksToJoin_Text_2:
# 118 "data/maps/PartnersHouse/scripts.pory"
	.string "Chat with LEAF$"

PartnersHouse_EventScript_LEAFAsksToJoin_Text_3:
# 125 "data/maps/PartnersHouse/scripts.pory"
	.string "Stop by any time {PLAYER}, I'm always\n"
	.string "down for an adventure!$"

LEAFonYourteamChat_Eventscript_CustomFollowerScript_Text_0:
# 135 "data/maps/PartnersHouse/scripts.pory"
	.string "Have LEAF head home$"

LEAFonYourteamChat_Eventscript_CustomFollowerScript_Text_1:
# 135 "data/maps/PartnersHouse/scripts.pory"
	.string "Have LEAF heal your party$"

LEAFonYourteamChat_Eventscript_CustomFollowerScript_Text_2:
# 145 "data/maps/PartnersHouse/scripts.pory"
	.string "Here {PLAYER}, I healed your pokemon\n"
	.string "back to full health for you!$"

LEAFonYourteamChat_Eventscript_CustomFollowerScript_Text_3:
# 148 "data/maps/PartnersHouse/scripts.pory"
	.string "Let me know if your pokemon need healed\n"
	.string "{PLAYER}, i have medicine with me.$"
