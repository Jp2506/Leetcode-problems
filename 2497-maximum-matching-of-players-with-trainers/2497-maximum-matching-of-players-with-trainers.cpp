class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        
        int count=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        for(int i=0;i<players.size();i++)
        {
            for(int j=0;j<trainers.size();j++)
            {
                if(players[i]<=trainers[j])
                {
                    count++;
                    auto it=find(trainers.begin(),trainers.end(),trainers[j]);
                    trainers.erase(it);
                    break;
                }
            }
        }
        return count;
    }
};