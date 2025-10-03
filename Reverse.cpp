#include <iostream>
using namespace std;

int main(){
        char word[100];
        cin.get(word, 100);
        int word_length = 0;
        for (int i = 0; word[i] != '\0'; i++){
                word_length++;
        }
        char reversed_word[100];
        int i = 0;
        for (int n = word_length - 1; n >= 0; n--){
                reversed_word[i] = word[n];
                i++;
        }

        cout << reversed_word << endl;
        cout << word_length << endl;
        return 0;
}
