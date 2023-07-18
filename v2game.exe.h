struct Game
{
  char unknown[2856];
  int speed;
};

struct Country
{
  char unknown[28];
  char tag[3];
  char unknown2[393];
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

class Pop {
    char unknown[12];
    int id;
    char unknown2[0x4c];
    int size;
};
