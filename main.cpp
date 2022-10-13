//
//  main.cpp
//  assigment_2
//
//  Created by Eren Sonmez on 10/5/22.
//

#include <iostream>
#include <string>
using namespace std;

const int gameCount = 5;
string gameTitles[gameCount];
int graphicScores[gameCount] = {1,2,3,4,5};
int replayValue[gameCount] = {1,2,3,4,5};


//shows game title and graphic score
void showGameTitles(){
    for (int i = 0; i < gameCount; ++i) {
        cout << gameTitles[i] << " : " << graphicScores[i] <<endl;
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

//int getHighestGraphics(){
//    for(int x = 0; x < gameCount; x++){
//
//    }
//}


int main(){
    enterGameInfo();
    enterGraphicInfo();
    showGameTitles();
    enterReplayInfo();
    return 0;
}
