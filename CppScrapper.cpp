#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <map>
#include <limits.h>
#include <sys/stat.h>
#include <sys/types.h>

//include third-party
#include "include/nlohmann/json.hpp"

//modules
#include "modules/main/welcome/welcome.cpp"
#include "modules/main/init/init.cpp"
#include "modules/main/getOperation/getOperation.cpp"
#include "modules/main/runOperation/runOperation.cpp"

using namespace std;
using json = nlohmann::json;

int main() {    
	
	int operation;
	string URL;
	
	std::ifstream f("settings.json");
	json settings = json::parse(f);
	
	Modules_main mMain;
	    
    mMain.welcome(settings);
    mMain.init(settings);
    operation = mMain.getOperation();
    
    mMain.runOperation(operation, settings["folder_output"]);
    
    return 0;
}
