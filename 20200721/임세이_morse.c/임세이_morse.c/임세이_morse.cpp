#include <iostream>
using namespace std;
#include <string>
class Morse {
    string alpahbet[26]; // 알파벳의 모스 부호 저장
    string digit[10]; // 숫자의 모스 부호 저장
    string slash, question, comma, period, plus, equal; // 특수 문자의 모스 부호 저장
public:
    Morse(); // alphabet[], digit[] 배열 및 특수 문자의 모스 부호 초기화
    void text2Mores(string text, string& morse); // 영문 텍스트를 모스 부호로 변환
    /*bool mores2text(string morese, string& text); // 모스 부호를 영문 텍스트로 변환*/
};
Morse::Morse() {
    alpahbet[0] = ".-"; alpahbet[1] = "-..."; alpahbet[2] = "-.-."; alpahbet[3] = "-..";
    alpahbet[4] = "."; alpahbet[5] = "..-."; alpahbet[6] = "--."; alpahbet[7] = "....";
    alpahbet[8] = ".."; alpahbet[9] = ".---"; alpahbet[10] = "-.-"; alpahbet[11] = ".-..";
    alpahbet[12] = "--"; alpahbet[13] = "-."; alpahbet[14] = "---"; alpahbet[15] = ".--.";
    alpahbet[16] = "--.-"; alpahbet[17] = ".-."; alpahbet[18] = "..."; alpahbet[19] = "-";
    alpahbet[20] = "..-"; alpahbet[21] = "...-"; alpahbet[22] = ".--"; alpahbet[23] = "-..-";
    alpahbet[24] = "-.--"; alpahbet[25] = "--.."; digit[0] = "-----"; digit[1] = ".----";
    digit[2] = "..---"; digit[3] = "...--"; digit[4] = "....-"; digit[5] = ".....";
    digit[6] = "-...."; digit[7] = "--..."; digit[8] = "---.."; digit[9] = "----.";
    slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-";
    plus = ".-.-"; equal = "-...-";
}
void Morse::text2Mores(string text, string& morse) {
    for (int i = 0; i < text.size(); ++i) {
        char c = text.at(i);
        if (c >= 65 && c <= 90) c = tolower(c);
        if (c >= 97 && c <= 122) {
            morse = morse + alpahbet[c - 97] + " ";
        }
        else if (c >= 48 && c <= 57) {
            morse = morse + digit[c - 48] + " ";
        }
        else {
            switch (c)
            {
            case '/':morse = morse + slash + " "; break;
            case '?':morse = morse + question + " "; break;
            case ',':morse = morse + comma + " "; break;
            case '.':morse = morse + period + " "; break;
            case '+':morse = morse + plus + " "; break;
            case '=':morse = morse + equal + " "; break;
            case ' ':morse += "  "; break;
            }
        }
    }
}/*
bool Morse::mores2text(string morse, string& text) {
    string alpah[26] = { "a","b","c","d","e","f", "g","h","i", "j","k","l", "m","n","o",
        "p","q","r", "s","t","u", "v","w","x", "y","z" };
    string di[10] = { "0","1","2", "3","4","5", "6","7","8", "9" };
    string retext = "";
    for (int j = 0; j < morse.size(); ) {
        int pos = morse.find(" ", j);
        bool sw = true;
        string s = morse.substr(j, pos - j);
        for (int i = 0; i < 26; ++i) {
            if (s == alpahbet[i]) {
                retext.append(alpah[i]);
                sw = false;
                break;
            }
        }
        if (sw) {
            for (int i = 0; i < 10; ++i) {
                if (s == digit[i]) {
                    retext.append(di[i]);
                    sw = false;
                    break;
                }
            }
        }
        if (sw) {
            if (s == slash) retext += "/";
            else if (s == question) retext += "?";
            else if (s == comma) retext += ",";
            else if (s == period) retext += ".";
            else if (s == plus) retext += "+";
            else if (s == equal) retext += "=";
        }
        if (morse[pos] == ' ' && morse[pos + 1] == ' ' && morse[pos + 2] == ' ') {
            retext += " ";
            pos += 2;
        }
        j = pos + 1;
    }
    if (retext == text) return true;
    else return false;
}*/
int main() {
    string text, morse;
    Morse m;
    cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
    getline(cin, text);
    m.text2Mores(text, morse);
    cout << morse << endl << endl;
    /*
    cout << "모스 부호를 다시 형문 텍스트로 바꿉니다." << endl;
    if (m.mores2text(morse, text))
        cout << text;
    else
        cout << "모스 부호->텍스트 변환 에러" << endl;
*/
}