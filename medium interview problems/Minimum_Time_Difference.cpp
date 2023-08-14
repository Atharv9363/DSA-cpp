// https://leetcode.com/problems/minimum-time-difference/description/

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

            for(int i=0; i<timePoints.size(); i++){
                string curr = timePoints[i];

                int hours = stoi( curr.substr(0,2));
                int min = stoi(curr.substr(3,2));
                int totalMinutes = hours * 60 + min;
                minutes.push_back(totalMinutes); 
            }

            sort(minutes.begin(), minutes.end());

            // Finding the difference and minimum difference 
            int mini = INT_MAX;
            int n = minutes.size();

            for(int i=0; i<n-1; i++){
                int diff = minutes[i+1] - minutes[i];
                mini = min(mini, diff);
            }

            // this for the 11:59 and 00:00 case in which 00:00 will be considered as less than 11:59 but here it is 12:00 0r 24:00 So we are adding 1440 which will be considered as 12:00 and subtracting it from the last element.
            int lastDiff = (minutes[0] + 1440) - minutes[n-1];
            // Again checking for the minimum element
            mini = min(mini, lastDiff);  

            return mini;
    }
};
