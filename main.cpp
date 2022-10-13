//
//  main.cpp
//  assigment_2
//
//  Created by Eren Sonmez on 10/5/22.
//

#include <iostream>
#include <string>
#include <printf.h>
using namespace std;

const int gameCount = 5;
string gameTitles[gameCount];
int graphicScores[gameCount] = {1,2,3,4,5};
int replayValue[gameCount] = {1,2,3,4,5};


//shows game title and graphic score
void showGraphicScores(){
    for (int i = 0; i < gameCount; ++i) {
        cout << gameTitles[i] << " : " << graphicScores[i] <<endl;
    }
}

//shows game title and graphic score
void showReplayScores(){
    for (int i = 0; i < gameCount; ++i) {
        cout << gameTitles[i] << " : " << replayValue[i] <<endl;
    }
}

int enterGameInfo() {
    for (int x = 0; x < gameCount; x++){
        cout << "Enter game title "<< x+1 <<":"<<endl;
        getline(cin,gameTitles[x]);
    }
    return 0;
}

int enterGraphicInfo(){
    for (int x = 0; x < gameCount; x++){
        cout << "Enter the graphic score on a scale of 1 to 5 for '"<< gameTitles[x] <<"':"<<endl;
        cin >> graphicScores[x];
    }
    return 0;
}

int enterReplayInfo(){
    for (int x = 0; x < gameCount; x++){
        cout << "Enter the replay value on a scale of 1 to 5, for " << gameTitles[x] <<":"<<endl;
        cin >> replayValue[x];
    }
    return 0;
}


//figure out why gametitles[x] is out of bounds - how to fix it
void getHighestGraphicScore(){
    int highestGraphic;
    int x;
    highestGraphic = graphicScores[0];
    string HighestGraphicTitle;
    for (x = 1; x < gameCount; x++){
        if (graphicScores[x] > highestGraphic){
            highestGraphic = graphicScores[x];
            HighestGraphicTitle = gameTitles[x];
        }
    }
    cout << "The highest rated graphics game is "<< HighestGraphicTitle << " with a score of " << highestGraphic <<endl;
}


//HighestReplayTitle is out of bounds - fix that
void getHighestReplayScore(){
    int highestReplay;
    int x;
    highestReplay = replayValue[0];
    string HighestReplayTitle;
    for (x = 1; x < gameCount; x++){
        if (replayValue[x] > highestReplay){
            highestReplay = replayValue[x];
            HighestReplayTitle = gameTitles[x];
        }
    }
    cout << "The highest rated graphics game is "<< HighestReplayTitle << " with a score of " << highestReplay <<endl;
}

int main(){
    enterGameInfo();
    enterGraphicInfo();
    showGraphicScores();
    getHighestGraphicScore();
    enterReplayInfo();
    showReplayScores();
    getHighestReplayScore();
    return 0;
}
