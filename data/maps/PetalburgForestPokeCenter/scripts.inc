PetalburgForestPokeCenter_MapScripts::
# 2 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgForestPokeCenter_On_Transition
# 3 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PetalburgForestPokeCenter_On_Transition::
# 9 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_FOREST
	return


Pokecenter_Employee::
# 13 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	lock
# 14 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	faceplayer
# 15 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	msgbox Pokecenter_Employee_Text_0, MSGBOX_YESNO
# 16 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pokecenter_Employee_1
# 31 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	msgbox Pokecenter_Employee_Text_2, MSGBOX_NPC
	return

Pokecenter_Employee_1:
# 17 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 18 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterLeft
# 19 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	waitmovement 0
# 20 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 21 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 22 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 23 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	waitmovement 0
# 24 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	special HealPlayerParty
# 25 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	msgbox Pokecenter_Employee_Text_1
# 26 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	waitmessage
# 27 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	release
	end


Pokecenter_Employee_Text_0:
# 15 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	.string "Would you like me to heal your party?$"

Pokecenter_Employee_Text_1:
# 25 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	.string "Come again soon.$"

Pokecenter_Employee_Text_2:
# 31 "data/maps/PetalburgForestPokeCenter/scripts.pory"
	.string "Have a nice day$"
