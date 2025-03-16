#ifndef DND_CHARACTER_H
#define DND_CHARACTER_H

#include <stdlib.h>

#define DICE_ROLLS 4
#define MIN_VAL 1
#define MAX_VAL 6

typedef struct {
   int strength;
   int dexterity;
   int constitution;
   int intelligence;
   int wisdom;
   int charisma;
   int hitpoints;
} dnd_character_t;

int round_down(double num);
int ability(void);
int modifier(int score);
dnd_character_t make_dnd_character(void);

#endif
