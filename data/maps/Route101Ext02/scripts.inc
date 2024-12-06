Route101Ext02_MapScripts::
	.byte 0


Route101Ext02_EventScript_SeviperBatllesZangoose::
# 5 "data/maps/Route101Ext02/scripts.pory"
	lockall
# 6 "data/maps/Route101Ext02/scripts.pory"
	setflag FLAG_SeviperBattle_0x027
# 7 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	return


Route101Ext02_EventScript_leaf::
# 13 "data/maps/Route101Ext02/scripts.pory"
	lockall
# 14 "data/maps/Route101Ext02/scripts.pory"
	clearflag FLAG_LEAFRoute101Ext02_0x02C
# 15 "data/maps/Route101Ext02/scripts.pory"
	addobject 4
# 16 "data/maps/Route101Ext02/scripts.pory"
	setobjectxy 4, 7, 2
# 17 "data/maps/Route101Ext02/scripts.pory"
	applymovement 4, Route101Ext02_Movement_LEAFAproaches
# 18 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route101Ext02/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 20 "data/maps/Route101Ext02/scripts.pory"
	msgbox Route101Ext02_EventScript_leaf_Text_0
# 21 "data/maps/Route101Ext02/scripts.pory"
	closemessage
# 22 "data/maps/Route101Ext02/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 23 "data/maps/Route101Ext02/scripts.pory"
	msgbox Route101Ext02_EventScript_leaf_Text_1
# 24 "data/maps/Route101Ext02/scripts.pory"
	closemessage
# 25 "data/maps/Route101Ext02/scripts.pory"
	applymovement 4, Route101Ext02_Movement_LEAFRunsAway
# 26 "data/maps/Route101Ext02/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route101Ext02/scripts.pory"
	removeobject 4
# 28 "data/maps/Route101Ext02/scripts.pory"
	setflag FLAG_LEAFRoute101Ext02_0x02C
# 29 "data/maps/Route101Ext02/scripts.pory"
	releaseall
	return


# 32 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_LEAFAproaches:
# 33 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 33 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 33 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 33 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 33 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 33 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 33 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 33 "data/maps/Route101Ext02/scripts.pory"
	walk_right
# 34 "data/maps/Route101Ext02/scripts.pory"
	face_down
# 35 "data/maps/Route101Ext02/scripts.pory"
	walk_down
# 36 "data/maps/Route101Ext02/scripts.pory"
	step_end

# 39 "data/maps/Route101Ext02/scripts.pory"
Route101Ext02_Movement_LEAFRunsAway:
# 40 "data/maps/Route101Ext02/scripts.pory"
	face_left
# 41 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 41 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 41 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 41 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 41 "data/maps/Route101Ext02/scripts.pory"
	walk_left
# 42 "data/maps/Route101Ext02/scripts.pory"
	face_up
# 43 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 43 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 43 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 43 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 43 "data/maps/Route101Ext02/scripts.pory"
	walk_up
# 44 "data/maps/Route101Ext02/scripts.pory"
	step_end

Route101Ext02_EventScript_leaf_Text_0:
# 20 "data/maps/Route101Ext02/scripts.pory"
	.string "Hey, {PLAYER}! I was just grabbing\n"
	.string "some supplies and seen you run by\l"
	.string "earlier. so i waited up, to give you\l"
	.string "these, Heres some pokeballs!$"

Route101Ext02_EventScript_leaf_Text_1:
# 23 "data/maps/Route101Ext02/scripts.pory"
	.string "im going to head home now, you should\n"
	.string "stop by sometime!$"
