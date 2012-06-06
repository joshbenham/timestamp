#include <stdio.h>
#include <time.h>

int main(int argc, char** argv) {

	if (argc == 1) {
		time_t timestamp = time(NULL);

		printf("Current time: %s", ctime(&timestamp));
		printf("Current unix time: %d", (int)timestamp);
	
		return 0;
	}

}
