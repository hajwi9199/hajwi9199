#include <turboc.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ESC 27
#define SPACE 32
#define COURSE 224
#define ENTER 13
enum { BLACK,  DARK_BLUE,  DARK_GREEN, DARK_SKY_BLUE, DARK_RED,DARK_VOILET, DARK_YELLOW, GRAY,
  DARK_GRAY, BLUE, GREEN, SKY_BLUE, RED, VOILET,  YELLOW, WHITE, };

typedef struct _namecard
{
char namecard_name[20];  
char namecard_sosok[40]; 
char namecard_phone[15];
int  namecard_age;   
struct _namecard *next;  
struct _namecard *prev;  
}namecard; 
 