//Modify this file to change what commands output to your statusbar, and recompile using the make command.


static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "uname -r", 							0,		0},
	{"", "~/.config/scripts/network.sh",					60,             0}, 
	{"Mem:", "~/.config/scripts/memory.sh",         			30,		0},
	{"vol:", "~/.config/scripts/volume_get.sh",				0,		10},
	{"", "date '+%a %d %b %R'",					        1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
