#include <stdio.h>

int main()
{
system("xmodmap -e \"pointer = 1 9 8 7 6 5 4 3 2\"");
system("sh createoriginal.sh");
system("gcc -g -o testobj test.c");
system("./testobj");
system("sh loadmodified.sh");
system("sh print_screen_disable.sh");
system("sh processcheck.sh");
system("gcc -g -o processcheckobj processcheck.c");
system("./processcheckobj");
//system("find /usr/bin -type f -name \"gnome-panel-screenshot\" -exec chmod 600 {} \\;");
return 0;
}

