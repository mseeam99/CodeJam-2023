// clear && g++ -o exe levelOne.cpp && ./exe

#include <iostream>

using namespace std;

bool palindromeCheck(string recievedString){
    bool answer = false;
    string temp = "";
    for(int i=recievedString.size()-1;i>=0;i--){
        temp+=recievedString.at(i);
    }
    if(temp==recievedString){
        answer=true;
    }
    return answer;
}

int main(){
    string testCaseOne = "racecar";
    string testCaseTwo = "radar";
    string testCaseThree = "google";
    bool temp = palindromeCheck(testCaseOne);
    if(temp == true){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}

