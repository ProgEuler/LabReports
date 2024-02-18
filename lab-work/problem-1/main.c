#include <stdio.h>

int main() {
    char input;
    printf("Enter your alphabet : ");
    scanf("%c", &input);

    switch(input){
    	case 'A' :
    	case 'a' :
    		printf("Its a vowel.\n");
    		break;
    	case 'O' :
    	case 'o' :
    		printf("Its a vowel.\n");
    		break;
    	case 'I' :
    	case 'i' :
    		printf("Its a vowel.\n");
    		break;
    	case 'E' :
    	case 'e' :
    		printf("Its a vowel.\n");
    		break;
    	case 'U' :
    	case 'u' :
    		printf("Its a vowel.\n");
    		break;
    	default :
    		printf("The alphabet is a consonant\n");
    }
    return 0;
}