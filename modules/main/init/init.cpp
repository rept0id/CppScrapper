#ifndef MODULE_MAIN_HEADER_IMPORT
#define MODULE_MAIN_HEADER_IMPORT

#include "../main.h"

#endif

#ifndef MODULE_MAIN_WELCOME
#define MODULE_MAIN_WELCOME

#endif

int Modules_main::init(json settings) {
	string cmd;
	
	cmd = "mkdir -p";
	cmd += " ";
	cmd += "\"";
	cmd += settings["folder_output"];
	cmd += "\"";
	cmd += ";";
	
	system(cmd.c_str());
	
	return 0;
}
