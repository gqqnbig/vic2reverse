struct Game
{
  char unknown[2856];
  int speed;
};

struct Country
{
  char unknown[424];
  int plurality; //minimum is 1000, maximum is 100000.
};

//First undefine fields in IDA assembly view, then right-click on the first field,
//choose this struct.
struct ConsoleCommand
{
  const char *explanation;
  void *handler;
  char numberOfArguments;
};
