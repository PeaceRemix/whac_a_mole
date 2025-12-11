#ifndef WHAC_A_MOLE_H
#define WHAC_A_MOLE_H


typedef struct {

    int SCORE_P1;
    int SCORE_P2;
    int WHAC_A_MOLE[9];     
    char INPUT;             
    int HIT;               
    int MISS;               
    int NOT_HIT_NOT_MISS;   
    long REMAINING_TIME;    
    int WINNER;             
    unsigned long tick100us; //use this to count
    int PLAYER1_STATE;     
    int PLAYER2_STATE;      
} WHAC_A_MOLE_OUTPUT_TABLE;


#define STATE_IDLE 0
#define STATE_PLAYING 1
#define STATE_GAMEOVER 2



WHAC_A_MOLE_OUTPUT_TABLE WHAC_A_MOLE_UPDATE(WHAC_A_MOLE_OUTPUT_TABLE table, int adc_value);
WHAC_A_MOLE_OUTPUT_TABLE WHAC_A_MOLE_UPDATE_WHO_WIN(WHAC_A_MOLE_OUTPUT_TABLE table);

#endif