class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,tw=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10){
                if(five==0){
                    return false;
                }
                five=five-1;
                ten++;
            }
            
            else{
                if(five!=0&&ten!=0){
                    five=five-1;
                    ten=ten-1;
                    tw++;

                }
                else if(five>=3){
                    five=five-3;
                    tw++;}
                else{
                    return false;
                }    


                
            }
        }
        return true ;
    }
};