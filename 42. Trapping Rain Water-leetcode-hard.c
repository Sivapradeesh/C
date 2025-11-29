#define min(a,b) ((a>b)?b:a)    
int trap(int* height, int heightSize){
    int max1 = 0;
    int left[heightSize];
    for(int i = 0; i < heightSize; i++) { 
        if(max1 < height[i]) {
            max1 = height[i];
        }
        left[i] = max1;
    }
        
    int max2 = 0;
    int right[heightSize];
    for(int i = heightSize-1; i >= 0; i--) {
        if(max2 < height[i]) {
            max2 = height[i];
        }
        right[i] = max2;
    }
        
    int trap = 0;
    for(int i = 0; i  < heightSize; i++) {
        trap += min(left[i], right[i]) - height[i];
    }
    return trap;       
}
