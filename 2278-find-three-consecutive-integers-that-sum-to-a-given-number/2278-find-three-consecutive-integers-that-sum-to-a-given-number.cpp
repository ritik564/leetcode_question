class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>answer;
        long long ans = (num-3)/3;

        if((num-3) % 3 != 0)
        {
            return{};
        }

        else{
            answer.push_back(ans);
            answer.push_back(ans+1);
            answer.push_back(ans+2);
        }
        return answer;
    }
};