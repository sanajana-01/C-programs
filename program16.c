#include "header.h"

#include <assert.h>     //The file used for testing purpose - it runs the testing engine after giving the function name and values that function requires
int main()
{
    assert(addition(10,11) == 21);

    assert(addition(-10,20) == 10);
    
    assert(addition(-10,-20) == -30);

    return EXIT_SUCCESS;
}               