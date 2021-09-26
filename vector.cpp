#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> lotteryNumVect(10);
    int lotteryNumArray[5] = {4, 13, 14, 24, 34};

    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
    cout << lotteryNumVect.at(2) << endl;

    lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44); 
    cout << lotteryNumVect.at(4) << endl; 
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);

    lotteryNumVect.push_back(64); 

    lotteryNumVect.back(); 
    lotteryNumVect.front();

    lotteryNumVect.size();

    lotteryNumVect.pop_back();

}