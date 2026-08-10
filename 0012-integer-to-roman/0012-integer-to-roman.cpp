class Solution {
public:
    string Rom(int r){
        if(r == 1000)
            return "M";

        else if(r == 900)
            return "CM";

        else if(r == 500)
            return "D";

        else if(r == 400)
            return "CD";

        
        else if(r == 100)
            return "C";

        else if(r == 90)
            return "XC";

        else if(r == 50)
            return "L";

        else if(r == 40)
            return "XL";

        else if(r == 10)
            return "X";
        
        else if(r == 9)
            return "IX";

        else if(r == 5)
            return "V";

        else if(r == 4)
            return "IV";

        else{
            return "I";
        }
    }
    string intToRoman(int num) {
        int num1 = num;

        string ans;
        
        if(num1 >= 1000){
            int times = num1/1000;
            
            while(times--){
                ans += Rom(1000);
            }
            num1= num1%1000;
        }
        if(num1 >= 900){
            int times = num1/900;
            
            while(times--){
                ans += Rom(900);
            }
            num1= num1%900;
        }
        if(num1 >= 500){
            int times = num1/500;
            
            while(times--){
                ans += Rom(500);
            }
            num1= num1%500;
        }
        if(num1 >= 400){
            int times = num1/400;
            
            while(times--){
                ans += Rom(400);
            }
            num1= num1%400;
        }
        if(num1 >= 100){
            int times = num1/100;
            
            while(times--){
                ans += Rom(100);
            }
            num1= num1%100;
        }
        if(num1 >= 90){
            int times = num1/90;
            
            while(times--){
                ans += Rom(90);
            }
            num1= num1%90;
        }
        if(num1 >= 50){
            int times = num1/50;
            
            while(times--){
                ans += Rom(50);
            }
            num1= num1%50;
        }
        if(num1 >= 40){
            int times = num1/40;
            
            while(times--){
                ans += Rom(40);
            }
            num1= num1%40;
        }
        if(num1 >= 10){
            int times = num1/10;
            
            while(times--){
                ans += Rom(10);
            }
            num1= num1%10;
        }

        if(num1 >= 9){
            int times = num1/9;

            while(times--){
                ans += Rom(9);
            }
            num1 = num1%9;
        }

        if(num1 >= 5){
            int times = num1/5;
            
            while(times--){
                ans += Rom(5);
            }
            num1= num1%5;
        }
        
        if(num1 >= 4){
            int times = num1/4;
            
            while(times--){
                ans += Rom(4);
            }
            num1= num1%4;
        }
        while(num1 > 0){
            ans += Rom(1);
            num1--;
        }

        return ans;
    }
};