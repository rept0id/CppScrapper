#ifndef MODULE_MAIN_HEADER
#define MODULE_MAIN_HEADER

#include <string.h>
#include "../../include/nlohmann/json.hpp"

#endif

using namespace std;
using json = nlohmann::json;

class Modules_main
{
	public:
		void welcome(json settings);
		int getOperation();
		int runOperation(int operation, string fOutput);
		int init(json settings);
};
