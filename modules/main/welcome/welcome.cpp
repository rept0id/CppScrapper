#ifndef MODULE_MAIN_HEADER_IMPORT
#define MODULE_MAIN_HEADER_IMPORT

#include "../main.h"

#endif

#ifndef MODULE_MAIN_WELCOME
#define MODULE_MAIN_WELCOME

#endif

void Modules_main::welcome(json settings) {
	string cmd;
	cmd += "zenity";
	cmd += " --title=";
	cmd += "'";  //apostrophe
	cmd += settings["info"]["title"];
	cmd += "'"; //apostrophe
	cmd += " --info";
	/* text - START */
	cmd += " --text=";
	cmd += "'";  //apostrophe
	cmd += "Welcome to CppScrapper.";
	cmd += "\n";
	cmd += "Version : ";
	cmd += settings["info"]["version"];
	cmd += "\n";
	cmd += "\n";
	cmd += "Author : ";
	cmd += settings["info"]["author"];
	cmd += "\n";
	cmd += "Mail : ";
	cmd += settings["info"]["email"];
	cmd += "\n";
	cmd += "Git : ";
	cmd += settings["info"]["git"];
	cmd += "'";  //apostrophe
	/* text - END */
	system(cmd.c_str());
}
