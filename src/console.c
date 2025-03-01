#include <drunkfly/vm.h>
#include <stdio.h>
#include <stdarg.h>

void Console_print(lua_State* L, va_list args)
{
    const char* str = va_arg(args, const char*);
    fprintf(stderr, "Console_print: %s\n", str);
}
