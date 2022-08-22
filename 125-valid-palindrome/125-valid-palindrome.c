

bool isPalindrome(char * s){
    if (s[0] == ' ' && s[1] == '\0') {
        return true;
    }
    
    int counter = 0;
    int jcounter = 0;
    int i, j;
    int ascii = 0;
    
    for (int i = 0; s[i] != '\0'; ++i) {
        counter += 1;
    }
    
    char newstring[counter];
    char newstring2[counter];
    
    for (i = 0, j = 0; i < counter; ++i) {
        ascii = s[i];
        
        if (ascii >= 65 && ascii <= 90) {
            ascii += 32;
            newstring[j] = ascii;
            j++;
            jcounter++;
        }
        else if (ascii >= 97 && ascii <= 122) {
            newstring[j] = ascii;
            j++;
            jcounter++;
        }
        else if (ascii >= 48 && ascii <= 57) {
            newstring[j] = ascii;
            j++;
            jcounter++;
        }
        
        
    }
    
    for (i = 0; i < jcounter; i++) {
        newstring2[jcounter-i-1] = newstring[i];
    }
    
    for (int i = 0; i < jcounter; ++i) {
        if (newstring[i] != newstring2[i]) {
            return false;
        }
    }
    
    /*for (i = 0; i < jcounter; i++) {
        printf("%c", newstring[i]);
    }
    
    printf("\n");
    
    for (i = 0; i < jcounter; i++) {
        printf("%c", newstring2[i]);
    }*/
    
    // if ascii code is 65 to 90, add 32
    // if ascii code isnt in 65 - 90 or 97 - 122 then i++
    // j++ is for the simplified one
    
    return true;
}