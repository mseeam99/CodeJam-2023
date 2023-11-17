// clear && g++ -o exe levelTwo.cpp && ./exe

#include <iostream>

using namespace std;

vector< vector<int> > findTriplets(vector <int> recievecVector, int recievedTargetSum){

    vector< vector<int> > temp;

    vector<int> littleTemp;
    for(int i=0;i<recievecVector.size();i++){
        for(int j=i+1;j<recievecVector.size();j++){
            for(int k=j+1;k<recievecVector.size();k++){
                    if(recievecVector.at(i) + recievecVector.at(j) + recievecVector.at(k) == recievedTargetSum){{
                        littleTemp.push_back(recievecVector.at(i));
                        littleTemp.push_back(recievecVector.at(j));
                        littleTemp.push_back(recievecVector.at(k));
                    }
                }
            }
            sort(temp.begin(),temp.end());
            temp.push_back(littleTemp);
            littleTemp.clear();
        }
    }

    for (int i=0;i<temp.size();i++) { 
        for (int j=0;j<temp[i].size();j++) 
            cout << temp[i][j]<< " "; 
        cout<<endl;
    } 

    return temp;
}

int main(){

    vector <int> testCaseThree;
    testCaseThree.push_back(1);
    testCaseThree.push_back(-2);
    testCaseThree.push_back(2);
    testCaseThree.push_back(0);
    testCaseThree.push_back(1);

    int targetSumThree = 1 ;

    findTriplets(testCaseThree,targetSumThree);
    
}
