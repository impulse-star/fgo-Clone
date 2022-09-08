#include <stdio.h>

typedef struct {
    int atk;
    int hp;
    int crit_chan;
} character;

double crit_bool = 1;

int random_gen(int lower_bnd, int upper_bnd) {

    // for now, we will make it spit out the same number to make it easier to debug,
    // feel free to comment out the bottom line when you want to make it a real rng generator.
    srand(time(0));
    int prob = (rand() % (upper_bnd - lower_bnd + 1)) + lower_bnd;
    return prob;

}

double crit_gen(int crit_chan, int crit_mult) {

    int crit_pick = random_gen(1, 10);

    if (crit_pick <= crit_chan)
        crit_bool = 1.5;
    // **replace 1.5 with crit_mult to customize critical multiplier * *
    else
        crit_bool = 1;

    return crit_bool;

}

void atk_single(character char1, character enem1, int crit_chan) {

    int atk_mult = random_gen(-350, 350);

    int damage = char1.atk * (1.0 + atk_mult / 1000) * crit_bool;
    enem1.hp = enem1.hp - damage;
}

/* i have no clue what is past this.
void target_switch() {

    if (enem1.hp > 0) {
        target_index = enem1;
    }
    else if (enem2.hp > 0) {
        target_index = enem2;
    }
    else if (enem3.hp > 0) {
        target_index = enem3;
    }
    else {
        battle_end();
    }

}

void player_turn() {

    atk_single(char1, target_index);
    target_switch();
    atk_single(char1, target_index);
    target_switch();
    atk_single(char1, target_index);
    target_switch();

}
*/

int main(){
    printf("Program Runs successfully!");

    return 0;
}

