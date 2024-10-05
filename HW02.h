#ifndef HW0102_H
#define HW0102_H

#include <string>

class Player{
public:
    string playerName;
    int num[3];
};

class GamblingGame{
public:
    Player player[2];
    void setNum(int n); 
    void setPlay();
    void playGame();
};

#endif
