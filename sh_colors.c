#include <stdio.h>
#include <stdlib.h>
#include "sh_colors.h"

void color(const char * color) {
	printf("%s", color);
}

void reset_color() {
	printf("%s", SH_DEFAULT);
}
