/*
 * @lc app=leetcode id=401 lang=cpp
 *
 * [401] Binary Watch
 */

// @lc code=start
class Solution {
public:
    vector<string> n;
    void help(vector<int> bin,int i,int k){
        if(k>i+1)
            return;
        if(k==0){
            string s;
            stringstream ss;
            //convert to string and push it back into ans
            int hrs=0;
            int mins=0;
            for (int i=0;i<4;i++){
                if(bin[i]==1){
                    hrs+=pow(2,i);
                }
            }
            for(int j=4;j<10;j++){
                if(bin[j]==1){
                    mins+=pow(2,j-4);
                }
            }
           if(hrs>11 || mins>59)
               return;
            
            if(mins<10){
                ss<<hrs<<':'<<'0'<<mins;
            }
            else{
                ss<<hrs<<':'<<mins;
            }
            s=ss.str();
            n.push_back(s);
        }
        if(k>0){
            help(bin, i - 1, k);
            bin[i] = 1; 
            help(bin, i - 1,k-1);
        }
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<int> bin(10, 0);
        help(bin,9, turnedOn);
        return n;
    }
};

// @lc code=end

