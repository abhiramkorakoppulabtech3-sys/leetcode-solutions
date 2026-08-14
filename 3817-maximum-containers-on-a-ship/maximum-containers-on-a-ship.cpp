class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int count=0,i=0;
        n=n*n;
        while(count<maxWeight && n){
           count+=w;
           if(count<=maxWeight){
           i++;
           }
           n--  ;
    }
    return i;
    }
};