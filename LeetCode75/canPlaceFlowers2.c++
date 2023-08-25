class Solution {
public:
    bool canPlaceFlowers(vector<int>& flower, int n) {
        if(n==0)return true;

        if(flower.size()==1){
            if((flower[0]==0&&n==1)||n==0){
                return true;
            }
            else{
                return false;
            }
        }
           
        if(flower.size()==2){
            if(n==0||(n==1&&(flower[0]==0&&flower[1]==0))){
                return true;
            }
            else{
                return false;
            }
        }

        if(flower[0]==0&&flower[1]==0){
            flower[0]=1;
            n--;
        }if(n==0)return true;
        for(int i = 1; i < flower.size()-1; i++){
            if(flower[i-1]==1)continue;
            if(flower[i]==0&&flower[i+1]==0){
                flower[i] = 1;
                n--;
            }
                if(n==0)return true;
        }
                if(n==0)return true;
        if(n==1){
            if(flower[flower.size()-2]==0&&flower[flower.size()-1]==0){
                return true;
            }
            return false;
        }
        return false;
    }
};