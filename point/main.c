#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

// #include "point.h"
extern int native_distance(lua_State* L);

int main (int argc, char *argv[])
{
    lua_State* L;

	/* initialize Lua */
	L = (lua_State*) lua_open();

	/* load Lua base libraries */
	luaL_openlibs(L);

	/* register our function */
	lua_register(L, "native_distance", native_distance);

	/* run the script */
    if (luaL_loadfile(L, "main.lua") || lua_pcall(L, 0, 0, 0))
        error(L, "cannot run configuration file: %s", lua_tostring(L, -1));
    

	/* cleanup Lua */
	lua_close(L);

	return 0;
}

