bool isAnagram(char* s, char* t) {
    int n1 = strlen(s);
    int n2 = strlen(t);
    int isvalid;
    int key;
    if( n1 != n2){
        return false;
    }
    else{

        for(int i = 0 ; i< n1 ; i++){
            key = s[i];
            isvalid = 0;

            for(int j = 0 ; j<n2; j++){
                if(key == t[j]){
                    if(t[j] != t[n2-1]){
                        t[j] = t[n2-1];
                    }
                    t[n2-1] = '\0';
                    n2--;
                    isvalid = 1;
                    break;
                }
            }
            if(!isvalid){
                break;
            }
        }

    }
    if(!isvalid){
        return false;
    }
    return true;
}
