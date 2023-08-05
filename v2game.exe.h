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

class Drawer {
    //0 is white; 1 is red.
    bool isError;
    char unknown[30];
};

//Total size is 0x2A8.
class Pop {
	char unknown[12];
	int id;
	char unknown2[72];
	unsigned int size;
	char unknown3[193];
	unsigned int militancy15;
	char unknown4;
	unsigned int consciousness15;
	char unknown5[378];
};

struct DefinedConstants
{
  char unknown[16];
  char *economy;
  char unknown2[12];
  char *military;
  char unknown3[12];
  char *diplomacy;
  char unknown4[10];
  char *country;
  char unknown5[12];
  PopsConstants *pops;
  char unknown6[10];
  char *ai;
  char unknown7[12];
  char *graphics;
};


struct PopsConstants
{
  __int64 BASE_CLERGY_FOR_LITERACY;
  __int64 MAX_CLERGY_FOR_LITERACY;
  __int64 LITERACY_CHANGE_SPEED;
  __int64 ASSIMILATION_SCALE;
  __int64 CONVERSION_SCALE;
  __int64 IMMIGRATION_SCALE;
  __int64 PROMOTION_SCALE;
  __int64 PROMOTION_ASSIMILATION_CHANCE;
  __int64 LUXURY_THRESHOLD;
  __int64 BASE_GOODS_DEMAND;
  __int64 BASE_POPGROWTH;
  __int64 MIN_LIFE_RATING_FOR_GROWTH;
  __int64 LIFE_RATING_GROWTH_BONUS;
  __int64 LIFE_NEED_STARVATION_LIMIT;
  __int64 MIL_LACK_EVERYDAY_NEED;
  __int64 MIL_HAS_EVERYDAY_NEED;
  __int64 MIL_HAS_LUXURY_NEED;
  __int64 MIL_NO_LIFE_NEED;
  __int64 MIL_REQUIRE_REFORM;
  __int64 MIL_IDEOLOGY;
  __int64 MIL_RULING_PARTY;
  __int64 MIL_REFORM_IMPACT;
  __int64 MIL_WAR_EXHAUSTION;
  __int64 MIL_NON_ACCEPTED;
  __int64 CON_LITERACY;
  __int64 CON_LUXURY_GOODS;
  __int64 CON_POOR_CLERGY;
  __int64 CON_MIDRICH_CLERGY;
  __int64 CON_REFORM_IMPACT;
  __int64 CON_COLONIAL_FACTOR;
  __int64 RULING_PARTY_HAPPY_CHANGE;
  __int64 RULING_PARTY_ANGRY_CHANGE;
  __int64 PDEF_BASE_CON;
  __int64 NATIONAL_FOCUS_DIVIDER;
  __int64 POP_SAVINGS;
  __int64 STATE_CREATION_ADMIN_LIMIT;
  __int64 MIL_TO_JOIN_REBEL;
  __int64 MIL_TO_JOIN_RISING;
  __int64 MIL_TO_AUTORISE;
  __int64 REDUCTION_AFTER_RISEING;
  __int64 REDUCTION_AFTER_DEFEAT;
  __int64 POP_TO_LEADERSHIP;
  __int64 ARTISAN_MIN_PRODUCTIVITY;
  __int64 SLAVE_GROWTH_DIVISOR;
  __int64 MIL_HIT_FROM_CONQUEST;
  __int64 LUXURY_CON_CHANGE;
  __int64 INVENTION_IMPACT_ON_DEMAND;
  __int64 ARTISAN_SUPPRESSED_COLONIAL_GOODS_CATEGORY;
  __int64 ISSUE_MOVEMENT_JOIN_LIMIT;
  __int64 ISSUE_MOVEMENT_LEAVE_LIMIT;
  __int64 MOVEMENT_CON_FACTOR;
  __int64 MOVEMENT_LIT_FACTOR;
  __int64 MIL_ON_REB_MOVE;
  __int64 POPULATION_SUPPRESSION_FACTOR;
  __int64 POPULATION_MOVEMENT_RADICAL_FACTOR;
  __int64 NATIONALIST_MOVEMENT_MIL_CAP;
  __int64 MOVEMENT_SUPPORT_UH_FACTOR;
  __int64 REBEL_OCCUPATION_STRENGTH_BONUS;
  __int64 LARGE_POPULATION_LIMIT;
  __int64 LARGE_POPULATION_INFLUENCE_PENALTY_CHUNK;
};
