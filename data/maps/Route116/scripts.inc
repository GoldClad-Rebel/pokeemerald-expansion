# 1 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 11
# 2 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 3 "data/maps/Route116/scripts.pory"

# 4 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 5 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 6 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 7 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 8 "data/maps/Route116/scripts.pory"
	.byte 0
# 9 "data/maps/Route116/scripts.pory"

# 10 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 11 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 12 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 13 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 14 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route116/scripts.pory"
	end
# 16 "data/maps/Route116/scripts.pory"

# 17 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 18 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 19 "data/maps/Route116/scripts.pory"
	return
# 20 "data/maps/Route116/scripts.pory"

# 21 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 22 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 23 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 24 "data/maps/Route116/scripts.pory"
	end
# 25 "data/maps/Route116/scripts.pory"

# 26 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 27 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 28 "data/maps/Route116/scripts.pory"
	.2byte 0
# 29 "data/maps/Route116/scripts.pory"

# 30 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 31 "data/maps/Route116/scripts.pory"
	lock
# 32 "data/maps/Route116/scripts.pory"
	faceplayer
# 33 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 34 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 35 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 36 "data/maps/Route116/scripts.pory"
	release
# 37 "data/maps/Route116/scripts.pory"
	end
# 38 "data/maps/Route116/scripts.pory"

# 39 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 40 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 41 "data/maps/Route116/scripts.pory"
	release
# 42 "data/maps/Route116/scripts.pory"
	end
# 43 "data/maps/Route116/scripts.pory"

# 44 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 45 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 46 "data/maps/Route116/scripts.pory"
	release
# 47 "data/maps/Route116/scripts.pory"
	end
# 48 "data/maps/Route116/scripts.pory"

# 49 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 50 "data/maps/Route116/scripts.pory"
	lock
# 51 "data/maps/Route116/scripts.pory"
	faceplayer
# 52 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 53 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 54 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 55 "data/maps/Route116/scripts.pory"
	end
# 56 "data/maps/Route116/scripts.pory"

# 57 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 58 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 59 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 60 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 61 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 62 "data/maps/Route116/scripts.pory"
	closemessage
# 63 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 64 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 65 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 66 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 67 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 68 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 69 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 70 "data/maps/Route116/scripts.pory"
	release
# 71 "data/maps/Route116/scripts.pory"
	end
# 72 "data/maps/Route116/scripts.pory"

# 73 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 74 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 75 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route116/scripts.pory"
	return
# 77 "data/maps/Route116/scripts.pory"

# 78 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 79 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 80 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route116/scripts.pory"
	return
# 82 "data/maps/Route116/scripts.pory"

# 83 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 84 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 85 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 86 "data/maps/Route116/scripts.pory"
	end
# 87 "data/maps/Route116/scripts.pory"

# 88 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 89 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 90 "data/maps/Route116/scripts.pory"
	release
# 91 "data/maps/Route116/scripts.pory"
	end
# 92 "data/maps/Route116/scripts.pory"

# 93 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 94 "data/maps/Route116/scripts.pory"
	walk_left
# 95 "data/maps/Route116/scripts.pory"
	walk_left
# 96 "data/maps/Route116/scripts.pory"
	walk_left
# 97 "data/maps/Route116/scripts.pory"
	walk_left
# 98 "data/maps/Route116/scripts.pory"
	walk_left
# 99 "data/maps/Route116/scripts.pory"
	walk_left
# 100 "data/maps/Route116/scripts.pory"
	walk_left
# 101 "data/maps/Route116/scripts.pory"
	walk_left
# 102 "data/maps/Route116/scripts.pory"
	step_end
# 103 "data/maps/Route116/scripts.pory"

# 104 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 105 "data/maps/Route116/scripts.pory"
	walk_down
# 106 "data/maps/Route116/scripts.pory"
	walk_left
# 107 "data/maps/Route116/scripts.pory"
	walk_left
# 108 "data/maps/Route116/scripts.pory"
	walk_left
# 109 "data/maps/Route116/scripts.pory"
	walk_left
# 110 "data/maps/Route116/scripts.pory"
	walk_left
# 111 "data/maps/Route116/scripts.pory"
	walk_left
# 112 "data/maps/Route116/scripts.pory"
	walk_left
# 113 "data/maps/Route116/scripts.pory"
	walk_left
# 114 "data/maps/Route116/scripts.pory"
	walk_left
# 115 "data/maps/Route116/scripts.pory"
	step_end
# 116 "data/maps/Route116/scripts.pory"

# 117 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 118 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 119 "data/maps/Route116/scripts.pory"
	end
# 120 "data/maps/Route116/scripts.pory"

# 121 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 122 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 123 "data/maps/Route116/scripts.pory"
	end
# 124 "data/maps/Route116/scripts.pory"

# 125 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 126 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 127 "data/maps/Route116/scripts.pory"
	end
# 128 "data/maps/Route116/scripts.pory"

# 129 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 130 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 131 "data/maps/Route116/scripts.pory"
	end
# 132 "data/maps/Route116/scripts.pory"

# 133 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 134 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 135 "data/maps/Route116/scripts.pory"
	end
# 136 "data/maps/Route116/scripts.pory"

# 137 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 138 "data/maps/Route116/scripts.pory"
	lock
# 139 "data/maps/Route116/scripts.pory"
	faceplayer
# 140 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 141 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 142 "data/maps/Route116/scripts.pory"
	release
# 143 "data/maps/Route116/scripts.pory"
	end
# 144 "data/maps/Route116/scripts.pory"

# 145 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 146 "data/maps/Route116/scripts.pory"
	lockall
# 147 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 148 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 149 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 151 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 152 "data/maps/Route116/scripts.pory"
	releaseall
# 153 "data/maps/Route116/scripts.pory"
	end
# 154 "data/maps/Route116/scripts.pory"

# 155 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 156 "data/maps/Route116/scripts.pory"
	lock
# 157 "data/maps/Route116/scripts.pory"
	faceplayer
# 158 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 159 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 160 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 161 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 162 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 163 "data/maps/Route116/scripts.pory"
	release
# 164 "data/maps/Route116/scripts.pory"
	end
# 165 "data/maps/Route116/scripts.pory"

# 166 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 167 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 168 "data/maps/Route116/scripts.pory"
	closemessage
# 169 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 170 "data/maps/Route116/scripts.pory"
	end
# 171 "data/maps/Route116/scripts.pory"

# 172 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 173 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 174 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 175 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 176 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 177 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 178 "data/maps/Route116/scripts.pory"
	release
# 179 "data/maps/Route116/scripts.pory"
	end
# 180 "data/maps/Route116/scripts.pory"

# 181 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 182 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 183 "data/maps/Route116/scripts.pory"
	closemessage
# 184 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 185 "data/maps/Route116/scripts.pory"
	end
# 186 "data/maps/Route116/scripts.pory"

# 187 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 188 "data/maps/Route116/scripts.pory"
	delay 20
# 189 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 190 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 191 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 192 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 193 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 194 "data/maps/Route116/scripts.pory"
	release
# 195 "data/maps/Route116/scripts.pory"
	end
# 196 "data/maps/Route116/scripts.pory"

# 197 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 198 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 199 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route116/scripts.pory"
	return
# 201 "data/maps/Route116/scripts.pory"

# 202 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 203 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 204 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route116/scripts.pory"
	return
# 206 "data/maps/Route116/scripts.pory"

# 207 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 208 "data/maps/Route116/scripts.pory"
	walk_left
# 209 "data/maps/Route116/scripts.pory"
	walk_left
# 210 "data/maps/Route116/scripts.pory"
	walk_left
# 211 "data/maps/Route116/scripts.pory"
	walk_left
# 212 "data/maps/Route116/scripts.pory"
	walk_left
# 213 "data/maps/Route116/scripts.pory"
	walk_left
# 214 "data/maps/Route116/scripts.pory"
	walk_left
# 215 "data/maps/Route116/scripts.pory"
	walk_left
# 216 "data/maps/Route116/scripts.pory"
	walk_left
# 217 "data/maps/Route116/scripts.pory"
	step_end
# 218 "data/maps/Route116/scripts.pory"

# 219 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 220 "data/maps/Route116/scripts.pory"
	walk_up
# 221 "data/maps/Route116/scripts.pory"
	walk_left
# 222 "data/maps/Route116/scripts.pory"
	walk_left
# 223 "data/maps/Route116/scripts.pory"
	walk_left
# 224 "data/maps/Route116/scripts.pory"
	walk_left
# 225 "data/maps/Route116/scripts.pory"
	walk_left
# 226 "data/maps/Route116/scripts.pory"
	walk_left
# 227 "data/maps/Route116/scripts.pory"
	walk_left
# 228 "data/maps/Route116/scripts.pory"
	walk_left
# 229 "data/maps/Route116/scripts.pory"
	walk_left
# 230 "data/maps/Route116/scripts.pory"
	step_end
# 231 "data/maps/Route116/scripts.pory"

# 232 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 233 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 234 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route116/scripts.pory"
	end
# 236 "data/maps/Route116/scripts.pory"

# 237 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 238 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 239 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/Route116/scripts.pory"
	end
# 241 "data/maps/Route116/scripts.pory"

# 242 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 243 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 244 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 245 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchJerry
# 246 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 247 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 248 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterJerry
# 249 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 250 "data/maps/Route116/scripts.pory"
	release
# 251 "data/maps/Route116/scripts.pory"
	end
# 252 "data/maps/Route116/scripts.pory"

# 253 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 254 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 255 "data/maps/Route116/scripts.pory"
	release
# 256 "data/maps/Route116/scripts.pory"
	end
# 257 "data/maps/Route116/scripts.pory"

# 258 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 259 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 260 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 262 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 263 "data/maps/Route116/scripts.pory"
	release
# 264 "data/maps/Route116/scripts.pory"
	end
# 265 "data/maps/Route116/scripts.pory"

# 266 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 267 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 268 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 269 "data/maps/Route116/scripts.pory"
	release
# 270 "data/maps/Route116/scripts.pory"
	end
# 271 "data/maps/Route116/scripts.pory"

# 272 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 273 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 274 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 275 "data/maps/Route116/scripts.pory"
	release
# 276 "data/maps/Route116/scripts.pory"
	end
# 277 "data/maps/Route116/scripts.pory"

# 278 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 279 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 280 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route116/scripts.pory"
	end
# 282 "data/maps/Route116/scripts.pory"

# 283 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 284 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 285 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route116/scripts.pory"
	end
# 287 "data/maps/Route116/scripts.pory"

# 288 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 289 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 290 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route116/scripts.pory"
	end
# 292 "data/maps/Route116/scripts.pory"

# 293 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 294 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 295 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 296 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 297 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 298 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 299 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 300 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 301 "data/maps/Route116/scripts.pory"
	release
# 302 "data/maps/Route116/scripts.pory"
	end
# 303 "data/maps/Route116/scripts.pory"

# 304 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 305 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 306 "data/maps/Route116/scripts.pory"
	release
# 307 "data/maps/Route116/scripts.pory"
	end
# 308 "data/maps/Route116/scripts.pory"

# 309 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 310 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 311 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 313 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 314 "data/maps/Route116/scripts.pory"
	release
# 315 "data/maps/Route116/scripts.pory"
	end
# 316 "data/maps/Route116/scripts.pory"

# 317 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 318 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 319 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 320 "data/maps/Route116/scripts.pory"
	release
# 321 "data/maps/Route116/scripts.pory"
	end
# 322 "data/maps/Route116/scripts.pory"

# 323 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 324 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 325 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 326 "data/maps/Route116/scripts.pory"
	release
# 327 "data/maps/Route116/scripts.pory"
	end
# 328 "data/maps/Route116/scripts.pory"

# 329 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 330 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 331 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 332 "data/maps/Route116/scripts.pory"
	end
# 333 "data/maps/Route116/scripts.pory"

# 334 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 335 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 336 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/Route116/scripts.pory"
	end
# 338 "data/maps/Route116/scripts.pory"

# 339 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 340 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 341 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/Route116/scripts.pory"
	end
# 343 "data/maps/Route116/scripts.pory"

# 344 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 345 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 346 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 347 "data/maps/Route116/scripts.pory"
	end
# 348 "data/maps/Route116/scripts.pory"

# 349 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 350 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 351 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 352 "data/maps/Route116/scripts.pory"
	end
# 353 "data/maps/Route116/scripts.pory"

# 354 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 355 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 356 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, PEEKO and I, when\n"
# 357 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 358 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 359 "data/maps/Route116/scripts.pory"
	.string "darling PEEKO!\p"
# 360 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! PEEKO!$"
# 361 "data/maps/Route116/scripts.pory"

# 362 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 363 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 364 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 365 "data/maps/Route116/scripts.pory"

# 366 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 367 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 368 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 369 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 370 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 371 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with POKéMON\n"
# 372 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 373 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 374 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 375 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 376 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 377 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 378 "data/maps/Route116/scripts.pory"
	.string "POKéMON into an uproar.$"
# 379 "data/maps/Route116/scripts.pory"

# 380 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 381 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 382 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 383 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 384 "data/maps/Route116/scripts.pory"

# 385 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 386 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 387 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 388 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 389 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 390 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 391 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 392 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 393 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 394 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 395 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 396 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 397 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 398 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 399 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 400 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 401 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 402 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 403 "data/maps/Route116/scripts.pory"

# 404 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 405 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 406 "data/maps/Route116/scripts.pory"
	.string "at the POKéMON MART in RUSTBORO.\p"
# 407 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 408 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 409 "data/maps/Route116/scripts.pory"

# 410 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 411 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 412 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 413 "data/maps/Route116/scripts.pory"

# 414 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 415 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 416 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 417 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 418 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 419 "data/maps/Route116/scripts.pory"

# 420 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 421 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 422 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 423 "data/maps/Route116/scripts.pory"

# 424 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 425 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 426 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 427 "data/maps/Route116/scripts.pory"

# 428 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 429 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 430 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 431 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 432 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 433 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 434 "data/maps/Route116/scripts.pory"

# 435 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 436 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 437 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 438 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 439 "data/maps/Route116/scripts.pory"

# 440 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 441 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 442 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 443 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 444 "data/maps/Route116/scripts.pory"

# 445 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 446 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 447 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 448 "data/maps/Route116/scripts.pory"

# 449 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 450 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 451 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 452 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 453 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 454 "data/maps/Route116/scripts.pory"

# 455 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 456 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 457 "data/maps/Route116/scripts.pory"

# 458 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 459 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 460 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a POKéMON from\n"
# 461 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 462 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 463 "data/maps/Route116/scripts.pory"
	.string "The startled POKéMON will stop.\p"
# 464 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 465 "data/maps/Route116/scripts.pory"

# 466 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 467 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 468 "data/maps/Route116/scripts.pory"
	.string "Your BAG has several POCKETS.\p"
# 469 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 470 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate POCKETS.\p"
# 471 "data/maps/Route116/scripts.pory"
	.string "No TRAINER can afford to be without\n"
# 472 "data/maps/Route116/scripts.pory"
	.string "a BAG of their own.$"

Route116_EventScript_AzelfFliesByTrigger06::
# 478 "data/maps/Route116/scripts.pory"
	lockall
# 479 "data/maps/Route116/scripts.pory"
	clearflag FLAG_FinalAzelf_0x268
# 480 "data/maps/Route116/scripts.pory"
	addobject 32
# 481 "data/maps/Route116/scripts.pory"
	setobjectxy 32, 64, 2
# 482 "data/maps/Route116/scripts.pory"
	applymovement 32, Route116_Movement_AzelfFliesBy6
# 483 "data/maps/Route116/scripts.pory"
	waitmovement 32
# 484 "data/maps/Route116/scripts.pory"
	setflag FLAG_FinalAzelf_0x268
# 485 "data/maps/Route116/scripts.pory"
	removeobject 32
# 486 "data/maps/Route116/scripts.pory"
	setvar VAR_RusturfPass_STATE, 6
# 487 "data/maps/Route116/scripts.pory"
	clearflag FLAG_AZELF_0x04D
# 488 "data/maps/Route116/scripts.pory"
	releaseall
	return


# 491 "data/maps/Route116/scripts.pory"
Route116_Movement_AzelfFliesBy6:
# 492 "data/maps/Route116/scripts.pory"
	face_left
# 493 "data/maps/Route116/scripts.pory"
	walk_left
# 493 "data/maps/Route116/scripts.pory"
	walk_left
# 493 "data/maps/Route116/scripts.pory"
	walk_left
# 494 "data/maps/Route116/scripts.pory"
	face_up
# 495 "data/maps/Route116/scripts.pory"
	walk_up
# 495 "data/maps/Route116/scripts.pory"
	walk_up
# 496 "data/maps/Route116/scripts.pory"
	face_right
# 497 "data/maps/Route116/scripts.pory"
	walk_right
# 498 "data/maps/Route116/scripts.pory"
	face_down
# 499 "data/maps/Route116/scripts.pory"
	walk_down
# 500 "data/maps/Route116/scripts.pory"
	face_left
# 501 "data/maps/Route116/scripts.pory"
	walk_left
# 502 "data/maps/Route116/scripts.pory"
	face_up
# 503 "data/maps/Route116/scripts.pory"
	walk_up
# 504 "data/maps/Route116/scripts.pory"
	face_right
# 505 "data/maps/Route116/scripts.pory"
	walk_right
# 506 "data/maps/Route116/scripts.pory"
	face_down
# 507 "data/maps/Route116/scripts.pory"
	walk_down
# 508 "data/maps/Route116/scripts.pory"
	face_left
# 509 "data/maps/Route116/scripts.pory"
	walk_left
# 510 "data/maps/Route116/scripts.pory"
	face_up
# 511 "data/maps/Route116/scripts.pory"
	walk_up
# 512 "data/maps/Route116/scripts.pory"
	face_right
# 513 "data/maps/Route116/scripts.pory"
	walk_right
# 514 "data/maps/Route116/scripts.pory"
	face_down
# 515 "data/maps/Route116/scripts.pory"
	walk_down
# 516 "data/maps/Route116/scripts.pory"
	face_left
# 517 "data/maps/Route116/scripts.pory"
	walk_left
# 518 "data/maps/Route116/scripts.pory"
	face_up
# 519 "data/maps/Route116/scripts.pory"
	walk_up
# 520 "data/maps/Route116/scripts.pory"
	face_left
# 521 "data/maps/Route116/scripts.pory"
	jump_in_place_left
# 522 "data/maps/Route116/scripts.pory"
	face_up
# 523 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 523 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 523 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 524 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 524 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 524 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 525 "data/maps/Route116/scripts.pory"
	step_end

Route116_EventScript_AzelfFliesByTriggerRight::
# 529 "data/maps/Route116/scripts.pory"
	lockall
# 530 "data/maps/Route116/scripts.pory"
	clearflag FLAG_FinalAzelf2_0x26D
# 531 "data/maps/Route116/scripts.pory"
	addobject 33
# 532 "data/maps/Route116/scripts.pory"
	setobjectxy 33, 59, 2
# 533 "data/maps/Route116/scripts.pory"
	applymovement 33, Route116_Movement_AzelfFliesByRight
# 534 "data/maps/Route116/scripts.pory"
	waitmovement 33
# 535 "data/maps/Route116/scripts.pory"
	setflag FLAG_FinalAzelf2_0x26D
# 536 "data/maps/Route116/scripts.pory"
	removeobject 33
# 537 "data/maps/Route116/scripts.pory"
	setvar VAR_RusturfPass_STATE, 6
# 538 "data/maps/Route116/scripts.pory"
	clearflag FLAG_AZELF_0x04D
# 539 "data/maps/Route116/scripts.pory"
	releaseall
	return


# 542 "data/maps/Route116/scripts.pory"
Route116_Movement_AzelfFliesByRight:
# 543 "data/maps/Route116/scripts.pory"
	face_right
# 544 "data/maps/Route116/scripts.pory"
	walk_right
# 544 "data/maps/Route116/scripts.pory"
	walk_right
# 544 "data/maps/Route116/scripts.pory"
	walk_right
# 545 "data/maps/Route116/scripts.pory"
	face_up
# 546 "data/maps/Route116/scripts.pory"
	walk_up
# 546 "data/maps/Route116/scripts.pory"
	walk_up
# 547 "data/maps/Route116/scripts.pory"
	face_left
# 548 "data/maps/Route116/scripts.pory"
	walk_left
# 549 "data/maps/Route116/scripts.pory"
	face_down
# 550 "data/maps/Route116/scripts.pory"
	walk_down
# 551 "data/maps/Route116/scripts.pory"
	face_right
# 552 "data/maps/Route116/scripts.pory"
	walk_right
# 553 "data/maps/Route116/scripts.pory"
	face_up
# 554 "data/maps/Route116/scripts.pory"
	walk_up
# 555 "data/maps/Route116/scripts.pory"
	face_left
# 556 "data/maps/Route116/scripts.pory"
	walk_left
# 557 "data/maps/Route116/scripts.pory"
	face_down
# 558 "data/maps/Route116/scripts.pory"
	walk_down
# 559 "data/maps/Route116/scripts.pory"
	face_right
# 560 "data/maps/Route116/scripts.pory"
	walk_right
# 561 "data/maps/Route116/scripts.pory"
	face_up
# 562 "data/maps/Route116/scripts.pory"
	walk_up
# 563 "data/maps/Route116/scripts.pory"
	face_left
# 564 "data/maps/Route116/scripts.pory"
	walk_left
# 565 "data/maps/Route116/scripts.pory"
	face_down
# 566 "data/maps/Route116/scripts.pory"
	walk_down
# 567 "data/maps/Route116/scripts.pory"
	face_right
# 568 "data/maps/Route116/scripts.pory"
	walk_right
# 569 "data/maps/Route116/scripts.pory"
	face_up
# 570 "data/maps/Route116/scripts.pory"
	walk_up
# 571 "data/maps/Route116/scripts.pory"
	face_right
# 572 "data/maps/Route116/scripts.pory"
	jump_in_place_right
# 573 "data/maps/Route116/scripts.pory"
	face_up
# 574 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 574 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 574 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route116/scripts.pory"
	walk_fast_up
# 576 "data/maps/Route116/scripts.pory"
	step_end
