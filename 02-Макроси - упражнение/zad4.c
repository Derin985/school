#include <stdio.h>

#define COMMAND(NAME,TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME,TYPE) void COMMAND(NAME,TYPE)()

void main() {
    DEFINE_COMMAND(test,NO) { printf("NO\n");}
    DEFINE_COMMAND(test,YES) { printf("YES\n");}
    NO_test_command();
    YES_test_command();
}