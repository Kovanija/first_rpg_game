#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



/*---------------------*/

/* RACES
 * 1 - Human
 * 2 - Wood elf
 * 3 - Dark elf
 * 4 - Orc
 */

#define RACE_HUMAN (1)
#define RACE_WOOD_ELF (2)
#define RACE_DARK_ELF (3)
#define RACE_ORC (4)



#define RACE_MAX (4)
/*---------------------*/




/* PROFFESSION
 * 1 - Warrior
 * 2 - Rogue
 * 3 - Mage
 * 4 - Paladin
 */

 #define PROFFESSION_WARRIOR (1)
 #define PROFFESSION_ROGUE (2)
 #define PROFFESSION_BARBARIAN (3)
 #define PROFFESSION_PALADIN (4)

 #define PROFFESSION_MAX (4)

 /*--------------------*/









 /* WEAPONS
  * 1 - Long Sword
  * 2 - War Axe
  * 3 - Dagger
  * 4 - Short Sword
  * 5 - Bow
  */
  #define WEAPON_WOODEN (1)
  #define WEAPON_LONGSWORD (2)
  #define WEAPON_WARAXE (3)
  #define WEAPON_DAGGER (4)
  #define WEAPON_SHORTSWORD (5)
  #define WEAPON_BOW (6)

  #define WEAPON_MAX (7)

  /*--------------------*/









  /* ARMORS
    * 1 - Ebony Armor
    * 2 - Deadric Armor
    * 3 - Armor of dragon bones

  */
  #define ARMOR_WOODEN (1)
  #define ARMOR_EBONY (2)
  #define ARMOR_DAEDRIC (3)
  #define ARMOR_DRAGONBONES (4)
  #define ARMOR_MAX (5)


  /*--------------------*/
 /*U procesu*/
 #define MAP_SHOP (1)
 #define MAP_BLACKSMITH (2)
 #define MAP_FOREST (3)
 #define MAP_HOME (4)
 #define MAP_TAVERN (5)

const char * getMap(int map)
{
    if(map == MAP_SHOP)
        return "Shop";
    else if(map == MAP_BLACKSMITH)
        return "Blacksmith";
    else if(map == MAP_FOREST)
        return "Forest";
    else if(map == MAP_HOME)
        return "Home";
    else if(map == MAP_TAVERN)
        return "Tavern";
}

const char * getArmor(int a)
{
    if(a == ARMOR_WOODEN)
        return "Wooden Armor";
    else if(a == ARMOR_EBONY)
        return "Ebony Armor";
    else if(a == ARMOR_DAEDRIC)
        return "Daedric Armor";
    else if(a == ARMOR_DRAGONBONES)
        return "Dragon Bones Armor";

    else if(a >= ARMOR_MAX)
        return "Armorless";
}



const char * getRace(int r)
{
  if(r == RACE_HUMAN)
    return "Human";
  else if(r == RACE_DARK_ELF)
    return "Dark Elf";
  else if(r == RACE_WOOD_ELF)
    return "Wood Elf";
  else if(r == RACE_ORC)
    return "Orc";
  else if(r >=RACE_MAX)

        printf( "Failed, u did not choose from 1 to 4.");

}

const char * getProffession(int p)
{
    if(p == PROFFESSION_WARRIOR)
        return "Warrior";
    else if(p == PROFFESSION_ROGUE)
        return "Rogue";
    else if(p == PROFFESSION_BARBARIAN)
        return "Barbarian";
    else if(p == PROFFESSION_PALADIN)
        return "Paladin";
    else if(p >= PROFFESSION_MAX)

        printf("Failed, u did not choose from 1 to 4.\n\n");


}



const char * getWeapon(int w)
{
    if(w == WEAPON_WOODEN)
        return "Wooden Stick";
    else if (w == WEAPON_LONGSWORD)
        return "Long Sword";
    else if(w == WEAPON_WARAXE)
        return "War Axe";
    else if(w == WEAPON_DAGGER)
        return "Dagger";
    else if(w == WEAPON_SHORTSWORD)
        return "Short Sword";
    else if(w == WEAPON_BOW)
        return "Bow";
    else if(w >= WEAPON_MAX)
        return "Weaponless";
}


struct Character
{
    char name[20];
    int strength;
    int dexterity;
    int defence;
    int health;
    int cth;
    int experience;
    int gold;
    int race;
    int proffession;
    int weapon;
    int armor;
    //inventory

};

struct Enemy
{
    char name[20];

   int strength;
   int defence;
   int health;
   int cth;

};


/*RAND-----------------------------------------------*/
int randRange(int min, int max)
{
    return rand() % (max - min + 1) + min;
}



/*RAND-------------------------------------------------*/




void inputCharacter(struct Character * c)
{
    fflush(stdin);
    printf("\nEnter character name : ");
    gets(c->name);
    printf("\n\n--------------------\n\n");
    printf("1.Human\n");
    printf("2.Wood Elf\n");
    printf("3.Dark Elf\n");
    printf("4.Orc\n");
    printf("\n\n--------------------");
    printf("\n\nChoose your race with number from 1 to 4 : ");
    scanf("%d", &(c->race));
    if  (c->race == 1)

        printf( "Your race : Human" );
    else
    if  (c->race == 2)

        printf( "Your race : Wood Elf" );
    else
    if  (c->race == 3)

        printf( "Your race : Dark Elf" );
    else
    if  (c->race == 4)

        printf( "Your race : Orc" );
    else
    if
    (c->race >= 5)
       {

    printf("UNKNOWN, CHOOSE FROM 1 TO 4");

}
    printf("\n\n--------------------\n\n");
    printf("1.Warrior\n");
    printf("2.Rogue\n");
    printf("3.Barbarian\n");
    printf("4.Paladin\n");
    printf("\n\n--------------------");
    printf("\n\nChoose your proffession with number from 1 to 4 : ");
    scanf("%d", &(c->proffession));
    if (c->proffession == 1)

        printf("Your proffession : Warrior\n");

    else
    if (c->proffession == 2)

        printf("Your proffession : Rogue\n");

    else
    if (c->proffession == 3)

        printf("Your proffession : Barbarian\n");

    else
    if (c->proffession == 4)

        printf("Your proffession : Paladin\n");

    else
    if
     (c->proffession >= 5)
    {
        printf("UNKNOWN, CHOOSE FROM 1 TO 4");
    }
}

void chooseWeapons(struct Character * wp)
{


/*WEAPONS------------------------------------------------------*/
    printf("\nYour inventory : \n");
    printf("1.Wooden Stick\n");
    printf("2.Long Sword\n");
    printf("3.War Axe\n");
    printf("4.Dagger\n");
    printf("5.Short Sword\n");
    printf("6.Bow\n");
    printf("\n\nChoose weapon from your inventory : ");
    scanf ("%d", &(wp->weapon));
    if (wp->weapon == 1)

        printf("Your weapon : Wooden Stick");

    else
    if (wp->weapon == 2)

        printf("Your weapon : Long Sword");

    else
    if (wp->weapon == 3)

        printf("Your weapon : War Axe");
    else
    if (wp->weapon == 4)

        printf("Your weapon : Dagger");
    else
    if (wp->weapon == 5)

        printf("Your weapon : Short Sword");
    else
    if (wp->weapon == 6)

        printf("Your weapon : Bow");

    else
    if (wp->weapon >= 7)

{
printf("NONE");
}
/*WEAPONS------------------------------------------------------*/

/*ARMORS-------------------------------------------------------*/
printf("\nYour inventory: \n");
printf("1.Wooden Armor\n");
printf("2.Deadric Armor\n");
printf("3.Ebony Armor\n");
printf("4.Dragon Bones Armor");

printf("\n\nChoose armor from your inventory  : ");

    scanf ("%d", &(wp->armor));
    if (wp->armor == ARMOR_WOODEN)

        printf("Your armor : Wooden Armor");

    else
    if (wp->armor == ARMOR_EBONY)

        printf("Your armor : Ebony Armor");

    else
    if (wp->armor == ARMOR_DAEDRIC)

        printf("Your armor : Daedric Armor");

    else
    if (wp->armor == ARMOR_DRAGONBONES)

        printf("Your armor : DragonBones Armor");
    else
        if(wp->armor >=ARMOR_MAX )


{
printf("NONE");
}
/*ARMORS-------------------------------------------------------*/



    printf("\n\n--------------------\n\n");

}









void printHero(struct Character * c)
{
    printf("==========================\n");
    printf(" Name            : %s\n", c->name);
    printf(" Strength        : %d\n", c->strength);
    printf(" Dexterity       : %d\n", c->dexterity);
    printf(" Armor           : %d\n", c->defence);
    printf(" Health          : %d\n", c->health);
    printf(" Chance to hit   : %d\n", c->cth);
    printf(" Race            : %s\n", getRace(c->race));
    printf(" Proffession     : %s\n", getProffession(c->proffession));
    printf(" Experience      : %d\n", c->experience);
    printf(" Gold            : %d\n", c->gold);
    printf("==========================\n\n");
}

void printEnemy(struct Enemy * m)
{
    printf("==========================\n");
    printf(" Name            : %s\n", m->name);
    printf(" Strength        : %d\n", m->strength);
    printf(" Armor           : %d\n", m->defence );
    printf(" Health          : %d\n", m->health  );
    printf(" Chance to hit   : %d\n", m->cth );
    printf("==========================\n\n");

}

void printEquip(struct Character * eq)
{
    printf("======================\n");
    printf(" Weapon          : %s\n", getWeapon(eq->weapon));
    printf(" Armor           : %s\n", getArmor(eq->armor));
    printf("======================\n");
}

void printHealthHero(struct Character * hc)
{
    printf("\n        %s's health : %d", hc->name, hc->health);
}
void printHealthEnemy(struct Enemy * he)
{
    printf("          %s's health : %d\n", he->name, he->health);

}




void attack(struct Character * Hero, struct Enemy * Monster)




{
    if(randRange(1, Hero->cth * 2) > randRange(1, Monster->cth))

    {
        int damage = randRange(Hero->strength, Hero->strength * 2) - Monster->defence;



/*WEAPONS-----------------------------------------*/
{

        if(Hero->weapon == WEAPON_WOODEN)

        damage=damage+1;

        else if (Hero->weapon == WEAPON_LONGSWORD)

        damage=damage+4;

        else if (Hero->weapon == WEAPON_DAGGER)

        damage=damage+2;

        else if (Hero->weapon == WEAPON_SHORTSWORD)

        damage=damage+3;

        else if (Hero->weapon == WEAPON_WARAXE)

        damage=damage+5;

        else if (Hero->weapon == WEAPON_BOW)

        damage=damage+3;

        else if (Hero->weapon >= WEAPON_MAX)

            damage=damage;


}


/*WEAPONS------------------------------------------------------*/



            if(damage > 0)
        {
            printf("%s has hit %s for %d damage!\n", Hero->name, Monster->name, damage);
            Monster->health -= damage;
            if(Monster->health <= 0)
            {
                Monster->health = 0;
                printf("%s has killed %s!\n", Hero->name, Monster->name);
                printf("%s says : Owned, easy\n", Hero->name);
                {

                }
            }
        }

    }
    else
    {
        printf("%s has missed!\n", Hero->name);
    }




}





void attack2(struct Enemy * Monster, struct Character * Hero)


{
    if(randRange(1, Monster->cth *2) > randRange(1, Hero->cth))
    {



        int damage2 = randRange(Monster->strength, Monster->strength *2) - Hero->defence;


        /*ARMORS----------------------------------------------*/



{


        if(Hero->armor == ARMOR_WOODEN)

        damage2=damage2-(12*damage2/100);

        else if (Hero->armor == ARMOR_DAEDRIC)

        damage2=damage2-(29*damage2/100);

        else if (Hero->armor == ARMOR_DRAGONBONES)

        damage2=damage2-(36*damage2/100);

        else if (Hero->armor == ARMOR_EBONY)

        damage2=damage2-(23*damage2/100);

        else
        {
            damage2=damage2;
        }


}







        /*ARMORS-----------------------------------------------*/



        if(damage2 > 0)
        {
            printf("\n%s has hit %s for %d damage!\n", Monster->name, Hero->name, damage2);
            Hero->health -= damage2;

            if(Hero->health <= 0)
            {
                Hero->health = 0;
                printf("%s has killed %s!\n", Monster->name, Hero->name);
                printf("%s says : hahaha, calculated\n", Monster->name);
            }
        }

    }
    else{
        printf("%s has missed!\n", Monster->name);
    }
    }








/*GLAVNA FUNKCIJA*/





int main()




{


    printf("\n\nWelcome to the hood! \n\n");

    struct Character Hero = { "name", /*strength*/5, /*dexterity*/ 5,/*defence*/ 5,/*health*/ 20,/*chance to hit*/ 5,/*experrience*/ 170,/*gold*/ 14 };
    struct Enemy enemy = { "Monster",/*strength*/ 7,/*defence*/ 7,/*health*/ 20,/*chance to hit*/ 6};


    int potez = 0;

    srand(time(0));



inputCharacter(&Hero);
printf("\nCharacter  : \n\n\n");



printHero(&Hero);










/*----------------ABOVE IS CHARACTER BUILD AND LOCATION CHOOSE-----------UNDER IS FOREST-----------------------------------*/
















chooseWeapons(&Hero);
printEquip(&Hero);

printf("\n\nbattle : \n\n");




    while(Hero.health > 0 && enemy.health > 0)
    {



        if(potez == 0)
        {
            printf("\n\nIts %s turn\n", Hero.name);
system("pause");
            attack(&Hero, &enemy);
            potez = 1;
        }
        else
        {
            printf("\n\nIts %s turn\n", enemy.name);

system("pause");
            attack2(&enemy, &Hero);
            potez = 0;
        }

        printHealthHero(&Hero);
        printHealthEnemy(&enemy);

    }

    /*WON TEXT-----------------------------------------------------*/

    if(Hero.health == 0)
    {

        printf("\nU need to practice more!\n\n");

    }
    else
    {
        printf("\nCongratulations %s, you won!\n\n", Hero.name);
    }

    printf("\n----------------------");

    /*WON TEXT-----------------------------------------------------*/



/*EXPERIENCE------------------------------------------*/

    if(enemy.health == 0)
{


        Hero.experience = Hero.experience+20;
        printf("\nYou got 20 experience. You have %d experience!", Hero.experience);

}
    else
{

        Hero.experience = Hero.experience+5;
    printf("\nYou got 5 experience. You have %d experience!", Hero.experience);
    }


/*EXPERIENCE----------------------------------------*/

/*GOLD----------------------------------------------*/


    if(enemy.health == 0)
{


        Hero.gold = Hero.gold+15;
        printf("\nYou got 15 gold. You have %d gold!\n\n", Hero.gold);
}
    else
    {
        Hero.gold = Hero.gold;
        printf("\nYou got 0 gold. You have %d gold!\n\n", Hero.gold);
    }


printHero(&Hero);
printEnemy(&enemy);

/*GOLD----------------------------------------------*/

    system("pause");


}


/*NEXT IS :
UVESTI BLACKSMITH, PVE FOREST,  INVENTORY ...*/
