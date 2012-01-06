- A simple aplication to test OO programming in Lua.
It also tests the Lua C API (by native_distance function).

- This is a C application embedding Lua lib.
The main.c (application entry point) just calls the main function of Lua.
Then Lua runs and also calls a C function (in the case of native_distance).
