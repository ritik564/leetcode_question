class Solution {
public:
    vector<long long> sumOfThree(long long num) {
         vector<long long>answer;

         long long x = num - 3;
         long long ans = x/3;
         long long sum = ans;
         answer.push_back(ans);

         for(int i=1;i<3;i++)
         {            
            ans = ans+1;
            answer.push_back(ans);
            sum = sum+ans;
         }
         
         if(sum == num)
         {
            return answer;
         }
        return {} ;
    }
};