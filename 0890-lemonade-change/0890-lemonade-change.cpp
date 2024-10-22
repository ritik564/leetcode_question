class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5=0;
        int count10=0;
        int count20=0;
        int rem=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i] / 5 == 1)
            {
                count5++;
            }
            else if(bills[i] / 5 == 2)
            {
                if(count5 > 0)
                {
                count5=count5-1;
                count10++;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(count5>0 && count10>0)
                {
                    count20++;
                    count5=count5-1;
                    count10=count10-1;
                }
                else if(count5 >= 3)
                {
                    count20++;
                    count5 = count5-3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};