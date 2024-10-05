#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

#include "HW02.h"

void GamblingGame::setNum(int n){
    for(int i=0;i<3;i++)
        player[n].num[i]=rand()%3;
}

void GamblingGame::setPlay(){
    cout<<"***** 갬블링 게임을 시작합니다. *****"<<"\n";
    cout<<"첫번째 선수 이름>>";
    cin>>player[0].playerName;
    cout<<"두번째 선수 이름>>";
    cin>>player[1].playerName;
    getchar();
}

void GamblingGame::playGame(){
    int pNum=0;
    while(true){
        setNum(pNum%2);
        cout<<player[pNum%2].playerName<<":<enter>"<<"\n";
        getchar();
        if(player[pNum%2].num[0]==player[pNum%2].num[1]&&player[pNum%2].num[0]==player[pNum%2].num[2]){
            cout<<"\t\t";
            for(int i=0;i<3;i++)
                cout<<player[pNum%2].num[i]<<"\t";
            cout<<player[pNum%2].playerName<<"님 승리!!"<<"\n";
            break;
        }
        else{
            cout<<"\t\t";
            for(int i=0;i<3;i++)
                cout<<player[pNum%2].num[i]<<"\t";
            cout<<"아쉽군요!"<<"\n";
        }
        pNum++;
    }
}