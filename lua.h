struct lua_State;

typedef double lua_Number;

typedef ptrdiff_t lua_Integer;

struct lua_Debug
{
  int event;
  const char *name;
  const char *namewhat;
  const char *what;
  const char *source;
  int currentline;
  int nups;
  int linedefined;
  int lastlinedefined;
  char short_src[60];
  int i_ci;
};


enum LUA_Enums
{
  LUA_REGISTRYINDEX = 18446744073709541616,
};

enum LuaType
{
  LUA_TNIL = 0,
  LUA_TBOOLEAN = 1,
  LUA_TLIGHTUSERDATA = 2,
  LUA_TNUMBER = 3,
  LUA_TSTRING = 4,
  LUA_TTABLE = 5,
  LUA_TFUNCTION = 6,
  LUA_TUSERDATA = 7,
  LUA_TTHREAD = 8,
};
