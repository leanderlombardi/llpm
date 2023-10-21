#include <stdlib.h>
#include <stdio.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

void print_help_message(int help_rsn) { // help_rsn (int): e. g. argc = 1; help_rsn = 0;
	switch (help_rsn) {
		case 0:
			printf("Usage: " WHT "llpm " CYN "<arguments> <package>\n\n" RESET);
			printf("Use llpm " CYN "--help " RESET "for more information\n");
			return;
		case 1:
			printf("Install: llpm -i [--force-install | --only-download | --local]\n");
			printf("Uninstall: llpm -d [--force-remove | --force-remove-broken | --only-uninstall]\n");
			printf("Update list: llpm -i --upgrade --force-install llpm\n");
			printf("Upgrade package: llpm -i --upgrade [--force-upgrade] <package>\n");
	}	
}

void install_package(char *package, char **arguments) {

}

void delete_package(char *package, char **arguments) {

}

int main(int argc, char **argv) {
	if (argc < 2) {
		print_help_message(0);
	} else {
		if (argv[1] == "-i") {
			char **rest_arguments;
			for (int i = 1; i < argc; ++i) {
				rest_arguments[i] = argv[i];
			}

			install_package(argv[2], rest_arguments);
		} else if (argv[1] == "-d") {
			char **rest_arguments;
			for (int i = 1; i < argc; ++i) {
				rest_arguments[i] = argv[i];
			}

			delete_package(argv[2], rest_arguments);
		}
	}

	return 0;
}
