class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)return true;
        
        int length = flowerbed.size(); 
        int prev = 0, curr =0; 
        int total = 0; 
        int row = 0; 

        for(int i = 0; i<length; i++){
            curr = flowerbed[i]; 
            if(curr == 0) {
                row++; 
            }
            else if (curr == 1){
                cout<<row; 
                total += (row-(row%2==0))/2; 
                row = 0; 
            }

            prev = curr; 

        }
            
        int i = 0 ; 

        if(flowerbed.size()>2){
            if(flowerbed[flowerbed.size()-1]==0&&flowerbed[flowerbed.size()-2]==0){
                total++; 
                cout<<"ending added"; 
                while(flowerbed[flowerbed.size()-i]==0){
                    total += i%2; 
                    i++; 
                }

            }


            if(flowerbed[0]==0&&flowerbed[1]==0){
                total++; 
                cout<<"begining added"; 
            }
        }
        else if (flowerbed.size()==2){
            total += ((flowerbed[0]==0)&&(flowerbed[1]==0)); 
        }
        else {
            total += (flowerbed[0]==0); 
        }

        
        cout<<"total: "<<total<<"i: "<<i; 

        if(total >= n){
            return true; 
        }
        else{
            return false; 
        }
    }
};