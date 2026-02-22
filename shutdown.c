#include "types.h"
#include "stat.h"
#include "user.h"

/* Remove the following code when heading to next task */
/********** start **********/
#include "x86.h"
int shutdown (void)
{
    // This is the restricted hardware instruction
    outw(0xB004, 0x0 | 0x2000);
    outw(0x604, 0x0 | 0x2000);
    return 0;
}
/********** end **********/

int main (int argc, char *argv[])
{
    printf (1, "\nBYEBYE XV6\n\n");
    shutdown();
    exit();
}