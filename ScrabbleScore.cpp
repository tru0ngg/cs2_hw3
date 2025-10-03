#include <iostream>
#include <string>
using namespace std;

int main(){
        int letter_scores[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
        int total_points = 0;
        int current_letter_points = 0;
        int word_mult = 1;
        string token;
        while (cin >> token && token != "$"){
                if (token.length() == 1){
                        total_points += current_letter_points;
                        char letter = token[0];
                        int index = letter - 'A';
                        current_letter_points = letter_scores[index];
                }
                else if (token == "(DLS)") {
                        current_letter_points *= 2;
                } else if (token == "(TLS)") {
                        current_letter_points *= 3;
                } else if (token == "(DWS)") {
                        word_mult *= 2;
                } else if (token == "(TWS)") {
                        word_mult *= 3;
                }
                }
        total_points += current_letter_points;
        total_points *= word_mult;
        cout << total_points << endl;
        return 0;
}
