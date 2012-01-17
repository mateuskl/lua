#include <lua.h>
#include <stdio.h>

int native_sum(lua_State* L)
{
    int a = lua_tonumber(L, 1);
    int b = lua_tonumber(L, 2);
    
    lua_pushnumber(L, a + b);  /* push result */
    return 1;  /* number of results */
}

