/****************************************************************
ARMA Mission Development Framework
ADF version: 1.41 / JULY 2015

Script: Cfg entries
Author: Whiztler
Script version: 1.3

Game type: n/a
File: missionConfig.hpp
****************************************************************
Config entry registration goes in here.
****************************************************************/

class CfgUnitInsignia {
	class CLANPATCH {
		displayName = "SHAPE"; // Name displayed in Arsenal
		author = "ADF / Whiztler";
		texture = "Img\clan_patch_Nopryl.paa";
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};

class CfgRespawnTemplates { // F3 Spectator Script
	class f_Spectator {
		onPlayerRespawn = "f_fnc_CamInit";
	};
    class Seagull { //Overwrite Vanilla Seagull
        onPlayerRespawn = "";
    };
};

class cfgNotifications { // Preconfigured messages
	class ADF_noticeMsg
	{
		title = "NOTICE";
		description = "%1";
		iconPicture = "\A3\ui_f\data\map\markers\military\warning_ca.paa";
		iconText = "";
		color[] = {1,1,0,1};		
		duration = 4;
		priority = 7;
	};
};

// End Screen / Debriefing
class CfgDebriefing
{  
	class End1
	{
		title = "Mission Completed";
		subtitle = "Mission Name";
		description = "Success message goes here";
		pictureBackground = ""; // eg. "img\yourpicture.jpg" no picture? use "";
		picture = "b_HQ"; // Marker icon
		pictureColor[] = {0.0,0.3,0.6,1}; // Overlay color
	};
	class End2
	{
		title = "Mission Failed";
		subtitle = "Mission Name";
		description = "Failure message goes here";
		pictureBackground = "Img\intro_day1.paa"; // eg. "img\yourpicture.jpg" no picture? use "";
		pictureColor[] = {0.0,0.3,0.6,1}; // Overlay color
	};
	class Killed
	{
		title = "All players K.I.A.";
		subtitle = "Mission Name";
		description = "Failure message goes here";
		pictureBackground = "Img\intro_day1.paa"; // eg. "img\yourpicture.jpg" no picture? use "";
		pictureColor[] = {0.0,0.3,0.6,1}; // Overlay color
	};
};
