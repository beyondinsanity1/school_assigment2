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
    int x = 0;
    int highest;
    highest = graphicScores[0];
    for (x = 0;x < gameCount; x++){
        if (graphicScores[x] > highest){
            highest = graphicScores[x];
        }
        cout << x <<endl;
    }
    cout << "The highest rated graphics game is "<< gameTitles[x] << " with a score of " << highest <<endl;
}

////creating the sequential search algorithm
//int getSpecificScore(){
//    bool found;
//    int x = 0;
//    while (found == 0 && index < gameCount){
//        if (graphicScores[x] == 5){
//            found = true;
//        }
//        else{
//            x++;
//        }
//    }
//}


int main(){
    enterGameInfo();
    enterGraphicInfo();
    showGraphicScores();
//    enterReplayInfo();
//    showReplayScores();
    getHighestGraphicScore();
    return 0;
}
