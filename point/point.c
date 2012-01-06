/*
function Point:distance(other)
    return (self.x - other.x) + (self.y - other.y)
end
*/
#include <lua.h>
#include <stdio.h>

int native_distance(lua_State* L)
{
#if 0
    int r = lua_istable(L, 1);  /* get argument */
    printf("r: %i\n", r);
    int s = lua_istable(L, 2);  /* get argument */
    printf("s: %i\n", s);

    lua_getfield(L, 1, "x"); // self
    // int r = lua_isnumber(L, lua_gettop(L));
    int self_x = lua_tonumber(L, lua_gettop(L));
    printf("self.x: %i\n", self_x);

    lua_getfield(L, 1, "y");
    int self_y = lua_tonumber(L, lua_gettop(L));
    printf("self.y: %i\n", self_y);


    //lua_pushnumber(L, (self.x - other.x) + (self.y - other.y));  /* push result */
    return 1;  /* number of results */
#endif

    lua_getfield(L, 1, "x"); // self
    int self_x = lua_tonumber(L, lua_gettop(L));
    lua_getfield(L, 1, "y");
    int self_y = lua_tonumber(L, lua_gettop(L));
    
    lua_getfield(L, 2, "x");
    int other_x = lua_tonumber(L, lua_gettop(L));
    lua_getfield(L, 2, "y");
    int other_y = lua_tonumber(L, lua_gettop(L));

    lua_pushnumber(L, (self_x - other_x) + (self_y - other_y));  /* push result */
    return 1;  /* number of results */
}

