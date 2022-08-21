#ifndef MODULE_MAIN_HEADER_IMPORT
#define MODULE_MAIN_HEADER_IMPORT

#include "../main.h"

#endif

#ifndef MODULE_MAIN_GETOPERATION
#define MODULE_MAIN_GETOPERATION

#endif

int Modules_main::getOperation() {
	string cmd;
	
	cmd = R""""(
		zenity --list \
		  --title="Choose the Bugs You Wish to View" \
		  --radiolist \
		  --column="Select" --column="CMD" --column="Description" \
			1 1 "Add Link" \
			2 2 "List Links" \
			3 3 "Settings"	
	)"""";
	
	//cmdRes = system(cmd.c_str());
	
	char cmdRes[CHAR_MAX];
	FILE *f = popen(cmd.c_str(), "r");
	fgets(cmdRes, CHAR_MAX, f);
	
	return atoi(cmdRes);
}
