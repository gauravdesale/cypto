#include <stdio.h>
#include <string.h>
#define MAXLENGTH 10
void boiEncryption(char[], char[]);
void bioDecryption(char[], char[]);


int main() {
    char input[MAXLENGTH] = "ahsgdfhjkl";
    char key[MAXLENGTH] = "tryeuwiqpo";
    boiEncryption(input, key);
    return 0;
}

void boiEncryption(char message[], char key[])
{
    char cipherText[MAXLENGTH];
    for(int i = 0; i < MAXLENGTH; i++) {
        cipherText[i] = message[i] ^ key[i];
    }
    printf("%s", cipherText);

}
void boiDecryption(char key[], char ciphertext[]) {
    char message[MAXLENGTH];
    for(int i = 0; i < MAXLENGTH; i++) {
        message[i] = key[i] ^ ciphertext[i];
    }
    printf("%s", message);
}