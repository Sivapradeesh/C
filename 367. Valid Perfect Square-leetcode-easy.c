bool isPerfectSquare(int num) {
    long long int i;
    if(num==0||num==1||num==4||num==9){
        return 1;
    }
    for( i=1;i<num/2;i++){
          if(i*i==num){
            return true;
          }       
    }
return false;
}
