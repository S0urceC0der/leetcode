char * removeDuplicates(char * S){
    int i = -1;
    int j = 0;
    while (S[j] != '\0') {
        if (i == -1) {
            S[++i] = S[j++];
            continue;
        }
        if (S[i] == S[j]) {
            i--;
            j++;
        } else {
            S[++i] = S[j++];
        }
        
    }
    while (S[++i] != '\0'){
        S[i] = '\0';
    }
    return S;
}
