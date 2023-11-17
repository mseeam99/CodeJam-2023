// clear && g++ -o exe levelThree.cpp && ./exe

#include<iostream>
 
using namespace std;
 
string encryptText(string recievedText, int shift){
	string answerText="";	
	for(int i=0;i< recievedText.size(); i++){
		if(isupper(recievedText[i])){
			answerText+= char(int(recievedText[i]+ shift- 65)%26+65);
		}else{
			answerText+=  char(int(recievedText[i]+ shift- 97)%26+ 97);
		}
	}
	return answerText;
}

int main(){
	string plain_text = "Go kbo xy cdbkxqobc dy vyfo Iye uxyg dro bevoc kxn cy ny S  K pevv mywwsdwoxd'c grkd S'w drsxusxq yp Iye gyevnx'd qod drsc pbyw kxi ydrob qei S tecd gkxxk dovv iye ryg S'w poovsxq Qyddk wkuo iye exnobcdkxn Xofob qyxxk qsfo iye ez Xofob qyxxk vod iye nygx Xofob qyxxk bex kbyexn kxn nocobd iye Xofob qyxxk wkuo iye mbi Xofob qyxxk cki qyynlio Xofob qyxxk dovv k vso kxn rebd iye";
	int key = 16; //I figured it out
	string cipher_text= encryptText(plain_text, key);

    for(int i=0;i<cipher_text.length();i++){
        if(cipher_text.at(i) == 'J'){
            cipher_text.at(i) = ' ';
        }
    }
	cout<<"Answer: "<<cipher_text<<endl;
}

/*
Answer: We are no strangers to love You know the rules and so do I  A full commitmentQs what IQm thinking of You wouldnQt get this from any other guy I just wanna tell you how IQm feeling Gotta make you understand Never gonna give you up Never gonna let you down Never gonna run around and desert you Never gonna make you cry Never gonna say goodbye Never gonna tell a lie and hurt you
*/