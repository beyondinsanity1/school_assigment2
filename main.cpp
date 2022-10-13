
#include <iostream>
#include <string>
using namespace std;

const int gameCount = 5;
string gameTitles[gameCount];
int graphicScores[gameCount] = {1,2,3,4,5};
int replayValue[gameCount] = {1,2,3,4,5};


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

//shows game title and graphic scores for debugging
void showGraphicScores(){
    for (int i = 0; i < gameCount; ++i) {
        cout << gameTitles[i] << " : " << graphicScores[i] <<endl;
    }
}

int enterReplayInfo(){
    for (int x = 0; x < gameCount; x++){
        cout << "Enter the replay value on a scale of 1 to 5, for " << gameTitles[x] <<":"<<endl;
        cin >> replayValue[x];
    }
    return 0;
}
//shows game title and graphic scores for debugging
void showReplayScores(){
    for (int i = 0; i < gameCount; ++i) {
        cout << gameTitles[i] << " : " << replayValue[i] <<endl;
    }
}

void getHighestGraphic(){
    int highestGraphic = 0;
    string highestGraphicTitle;
    for(int x = 0; x <gameCount; x++ ){
        if(graphicScores[x] > highestGraphic){
            highestGraphic = graphicScores[x];
            highestGraphicTitle = gameTitles[x];
        }else if(graphicScores[x] == highestGraphic){
            highestGraphicTitle = gameTitles[x];
        }
    }
    cout << "The highest rated graphics game is " <<highestGraphicTitle << " with a score of " << highestGraphic <<endl;
}

void getHighestReplay(){
    int highestReplay = 0;
    string highestReplayTitle;
    for(int x = 0; x <gameCount; x++ ){

        if(replayValue[x] > highestReplay){

            highestReplay = replayValue[x];
            highestReplayTitle = gameTitles[x];

        } else if(replayValue[x] == highestReplay){

            highestReplayTitle = gameTitles[x];
        }
    }

    cout << "The highest rated replay game is " <<highestReplayTitle << " with a score of " << highestReplay <<endl;
}

void getHighestCombined(){
    int combinedScore[gameCount];
    int highestCombined = 0;
    string highestCombinedTitle;

    for(int x = 0; x <gameCount; x++ ){

        combinedScore[x] = replayValue[x] + graphicScores[x];
        cout << combinedScore[x] <<endl;
    }

    for(int x = 0; x <gameCount; x++ ){

        if( combinedScore[x] > highestCombined){

            highestCombined = combinedScore[x];
            highestCombinedTitle = gameTitles[x];

        }else if (combinedScore[x] == highestCombined){

            highestCombinedTitle = gameTitles[x];
        }
    }
    cout<< "The highest rated combined score game is " << highestCombinedTitle << " with a score of " << highestCombined <<endl;
}

int main(){
    enterGameInfo();
    enterGraphicInfo();
    getHighestGraphic();
    enterReplayInfo();
    getHighestReplay();
    getHighestCombined();
}