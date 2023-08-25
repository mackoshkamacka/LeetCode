class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string temp = ""; 
        if (str1.length() < str2.length()){
            temp = str2; 
            str2 = str1; 
            str1 = temp;
            temp = "";  
        }

        int i = 0; 
        int count = 0; 
        int maxTempLength; 
        
        if(str1.length() % str2.length() == 0){
            maxTempLength =  str2.length();
        }
        else{
            maxTempLength =  str1.length() % str2.length();
        }
        
        for(int i = 0; i < maxTempLength; i++){
            if(str1[i]==str2[i]){
                temp+=str1[i]; 
            }
        }

        int maxSubLength = sqrt(temp); 

        

        cout<<maxTempLength<<" "<<temp;

        string str1Check = ""; 
        string str2Check = "";

        if(temp.length()!=0){
        for(int i = 0; i<str1.length()/temp.length(); i++){
            str1Check += temp; 
        }
        for(int i = 0; i<str2.length()/temp.length(); i++){
            str2Check += temp; 
        }

        if((str1Check == str1)&&(str2Check == str2)){
            return temp; 
        }; 
        }

        return ""; 

    }
};