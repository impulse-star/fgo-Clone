#include <stdio.h>

int main(){ /*

struct char1;
struct enem1;
struct enem2;
struct enem3;
struct target_index = enem1;

struct character{
    int atk;
    int hp;
    int crit_chan;
}char1, enem1;

int random_gen(int lower_bnd, int upper_bnd){
    
    srand(time(0));
    int prob = rand() % (upper - lower + 1)) + lower;
    return prob;
    
}

int crit_gen(int crit_chan, int crit_mult){
    
    int crit_pick = random_gen(1, 10);
    
    if (crit_pick <= crit_chan)
        crit_bool = 1.5;
        **replace 1.5 with crit_mult to customize critical multiplier**
    else
        crit_bool = 1;
        
    return crit_bool;
    
}

void atk_single(struct char1, struct enem1, int crit_chan) {
    
    int atk_mult = random_gen(-350, 350);
    
    int damage = char1.atk * (1.0 + atk_mult/1000) * crit_bool;
    enem1.hp = enem1.hp - damage;
    
    return 0;
}

void target_switch(){
    
    if(enem1.hp > 0){
        target_index = enem1;
    }
    else if(enem2.hp > 0){
        target_index = enem2;
    }
    else if(enem3.hp > 0){
        target_index = enem3;
    }
    else{
        battle_end();
    }
    
}

void player_turn(){
    
    atk_single(char1, target_index);
    target_switch();
    atk_single(char1, target_index);
    target_switch();
    atk_single(char1, target_index);
    target_switch();
    
}

*/

    printf("hello world");


}

