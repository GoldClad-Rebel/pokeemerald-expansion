# 1 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 2 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_OnTransition
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
.set LOCALID_OW_MON, 20
# 6 "data/maps/Route102/scripts.pory"

# 7 "data/maps/Route102/scripts.pory"
Route102_OnTransition::
# 8 "data/maps/Route102/scripts.pory"
    setobjectaswildencounter LOCALID_OW_MON, ENCOUNTER_LAND
# 9 "data/maps/Route102/scripts.pory"
    end
# 10 "data/maps/Route102/scripts.pory"

# 11 "data/maps/Route102/scripts.pory"
Route102_EventScript_OverworldMon::
# 12 "data/maps/Route102/scripts.pory"
    lock
# 13 "data/maps/Route102/scripts.pory"
	faceplayer
# 14 "data/maps/Route102/scripts.pory"
    callnative GetOverworldMonSpecies
# 15 "data/maps/Route102/scripts.pory"
    bufferspeciesname STR_VAR_1, VAR_0x8004
# 16 "data/maps/Route102/scripts.pory"
    startoverworldencounter 8
# 17 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/Route102/scripts.pory"
    removeobject 6
# 19 "data/maps/Route102/scripts.pory"
    fadescreen FADE_FROM_BLACK
# 20 "data/maps/Route102/scripts.pory"
    release
# 21 "data/maps/Route102/scripts.pory"
    end
# 22 "data/maps/Route102/scripts.pory"

# 23 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 24 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 25 "data/maps/Route102/scripts.pory"
	end
# 26 "data/maps/Route102/scripts.pory"

# 27 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 28 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 29 "data/maps/Route102/scripts.pory"
	end
# 30 "data/maps/Route102/scripts.pory"

# 31 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 32 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 33 "data/maps/Route102/scripts.pory"
	end
# 34 "data/maps/Route102/scripts.pory"

# 35 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 36 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 37 "data/maps/Route102/scripts.pory"
	end
# 38 "data/maps/Route102/scripts.pory"

# 39 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 40 "data/maps/Route102/scripts.pory"
	setflag FLAG_houndourroute102_0x030
# 41 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 42 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 43 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 44 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 45 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 46 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 47 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 48 "data/maps/Route102/scripts.pory"
	release
# 49 "data/maps/Route102/scripts.pory"
	end
# 50 "data/maps/Route102/scripts.pory"

# 51 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 52 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 53 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 55 "data/maps/Route102/scripts.pory"
	release
# 56 "data/maps/Route102/scripts.pory"
	end
# 57 "data/maps/Route102/scripts.pory"

# 58 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 59 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 60 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 61 "data/maps/Route102/scripts.pory"
	release
# 62 "data/maps/Route102/scripts.pory"
	end
# 63 "data/maps/Route102/scripts.pory"

# 64 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 65 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 66 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 67 "data/maps/Route102/scripts.pory"
	release
# 68 "data/maps/Route102/scripts.pory"
	end
# 69 "data/maps/Route102/scripts.pory"

# 70 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 71 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 72 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 73 "data/maps/Route102/scripts.pory"
	release
# 74 "data/maps/Route102/scripts.pory"
	end
# 75 "data/maps/Route102/scripts.pory"

# 76 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 77 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 78 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route102/scripts.pory"
	end
# 80 "data/maps/Route102/scripts.pory"

# 81 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 82 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 83 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route102/scripts.pory"
	end
# 85 "data/maps/Route102/scripts.pory"

# 86 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 87 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 88 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route102/scripts.pory"
	end
# 90 "data/maps/Route102/scripts.pory"

# 91 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 92 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 93 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route102/scripts.pory"
	end
# 95 "data/maps/Route102/scripts.pory"

# 96 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 97 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 98 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 99 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 100 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 101 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 102 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 103 "data/maps/Route102/scripts.pory"

# 104 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 105 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 106 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 107 "data/maps/Route102/scripts.pory"

# 108 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 109 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 110 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 111 "data/maps/Route102/scripts.pory"

# 112 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 113 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 114 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 115 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 116 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 117 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 118 "data/maps/Route102/scripts.pory"

# 119 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 120 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 121 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 122 "data/maps/Route102/scripts.pory"

# 123 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 124 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 125 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 126 "data/maps/Route102/scripts.pory"

# 127 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 128 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 129 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_EventScript_Murkrow::
# 135 "data/maps/Route102/scripts.pory"
	lockall
# 136 "data/maps/Route102/scripts.pory"
	applymovement 18, Route102_Movement_MurkrowFacesPlayer
# 137 "data/maps/Route102/scripts.pory"
	setflag FLAG_Murkrow_0x028
# 138 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_MURKROW, CRY_MODE_ENCOUNTER
# 139 "data/maps/Route102/scripts.pory"
	delay 40
# 140 "data/maps/Route102/scripts.pory"
	waitmoncry
# 141 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_MURKROW, 8
# 142 "data/maps/Route102/scripts.pory"
	dowildbattle
# 143 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 144 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route102_EventScript_Murkrow_2
# 148 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route102_EventScript_Murkrow_3
# 151 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route102_EventScript_Murkrow_4
Route102_EventScript_Murkrow_1:
# 154 "data/maps/Route102/scripts.pory"
	releaseall
	return

Route102_EventScript_Murkrow_2:
# 145 "data/maps/Route102/scripts.pory"
	call Won_or_Caught_2
# 146 "data/maps/Route102/scripts.pory"
	setflag FLAG_Murkrow_0x028
	goto Route102_EventScript_Murkrow_1

Route102_EventScript_Murkrow_3:
# 149 "data/maps/Route102/scripts.pory"
	call Won_or_Caught_2
	goto Route102_EventScript_Murkrow_1

Route102_EventScript_Murkrow_4:
# 152 "data/maps/Route102/scripts.pory"
	call Won_or_Caught_2
	goto Route102_EventScript_Murkrow_1


Won_or_Caught_2::
# 158 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 159 "data/maps/Route102/scripts.pory"
	removeobject 18
# 160 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 163 "data/maps/Route102/scripts.pory"
Route102_Movement_MurkrowFacesPlayer:
# 164 "data/maps/Route102/scripts.pory"
	face_player
# 165 "data/maps/Route102/scripts.pory"
	step_end

Route102_EventScript_SudowoodoShakes::
# 169 "data/maps/Route102/scripts.pory"
	lockall
# 170 "data/maps/Route102/scripts.pory"
	waitse
# 171 "data/maps/Route102/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 172 "data/maps/Route102/scripts.pory"
	applymovement 19, Route102_movement_SudowoodoShakes
# 173 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route102/scripts.pory"
	releaseall
	return


Route102_EventScript_WaterSudowoodo::
# 178 "data/maps/Route102/scripts.pory"
	lockall
# 179 "data/maps/Route102/scripts.pory"
	faceplayer
# 180 "data/maps/Route102/scripts.pory"
	special DoWateringBerryTreeAnim
# 181 "data/maps/Route102/scripts.pory"
	waitstate
# 182 "data/maps/Route102/scripts.pory"
	waitse
# 183 "data/maps/Route102/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 184 "data/maps/Route102/scripts.pory"
	applymovement 19, Route102_movement_SudowoodoShakes
# 185 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_WaterSudowoodo_Text_0
# 187 "data/maps/Route102/scripts.pory"
	closemessage
# 188 "data/maps/Route102/scripts.pory"
	waitse
# 189 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 190 "data/maps/Route102/scripts.pory"
	delay 40
# 191 "data/maps/Route102/scripts.pory"
	waitmoncry
# 192 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_Route102_SUDOWOODO
# 193 "data/maps/Route102/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 40
# 194 "data/maps/Route102/scripts.pory"
	dowildbattle
# 195 "data/maps/Route102/scripts.pory"
	fadescreen FADE_TO_BLACK
# 196 "data/maps/Route102/scripts.pory"
	removeobject 19
# 197 "data/maps/Route102/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 198 "data/maps/Route102/scripts.pory"
	return
# 199 "data/maps/Route102/scripts.pory"
	releaseall
	return


# 202 "data/maps/Route102/scripts.pory"
Route102_movement_SudowoodoShakes:
# 203 "data/maps/Route102/scripts.pory"
	face_right
# 204 "data/maps/Route102/scripts.pory"
	delay_8
# 205 "data/maps/Route102/scripts.pory"
	face_down
# 206 "data/maps/Route102/scripts.pory"
	delay_8
# 207 "data/maps/Route102/scripts.pory"
	face_left
# 208 "data/maps/Route102/scripts.pory"
	delay_8
# 209 "data/maps/Route102/scripts.pory"
	face_down
# 210 "data/maps/Route102/scripts.pory"
	delay_8
# 211 "data/maps/Route102/scripts.pory"
	face_right
# 212 "data/maps/Route102/scripts.pory"
	delay_8
# 213 "data/maps/Route102/scripts.pory"
	face_down
# 214 "data/maps/Route102/scripts.pory"
	delay_8
# 215 "data/maps/Route102/scripts.pory"
	face_left
# 216 "data/maps/Route102/scripts.pory"
	delay_8
# 217 "data/maps/Route102/scripts.pory"
	face_down
# 218 "data/maps/Route102/scripts.pory"
	step_end

Route102_EventScript_SignToPetalburgForestLeft::
# 222 "data/maps/Route102/scripts.pory"
	lockall
# 223 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_SignToPetalburgForestLeft_Text_0
# 224 "data/maps/Route102/scripts.pory"
	waitmessage
# 225 "data/maps/Route102/scripts.pory"
	releaseall
	return


Route102_EventScript_WaterSudowoodo_Text_0:
# 186 "data/maps/Route102/scripts.pory"
	.string "The weird tree doesn't like the WAILMER\n"
	.string "PAIL! The weird tree attacked!$"

Route102_EventScript_SignToPetalburgForestLeft_Text_0:
# 223 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} To Petalburg Forest$"
