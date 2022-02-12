class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())
            return 0;
        set<string> myset;
        for(auto i:wordList)
            myset.insert(i);
        queue<string> q;
        q.push(beginWord);
        int ans = 0;
        while (!q.empty()){
            ans++;
            int qsize = q.size();
            while (qsize--)
            {
                string curr = q.front();
                q.pop();
                for (int i = 0; i < curr.length(); i++)
                {
                    string temp = curr;
                    for (char c = 'a'; c <= 'z' ; c++)
                    {
                        temp[i] = c;
                        if(curr==temp){
                            continue;
                        }
                        if(temp == endWord){
                            return ans+1;
                        }
                        if(myset.find(temp) != myset.end()){
                            q.push(temp);
                            myset.erase(temp);
                        }
                    }
                    
                }
                
            }
            
        }
        return 0;
    }
};
