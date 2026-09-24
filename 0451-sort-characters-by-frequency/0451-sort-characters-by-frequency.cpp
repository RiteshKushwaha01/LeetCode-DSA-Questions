class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>> maxHeap;
        unordered_map<char, int> countFreq;

        for (char ch : s) {
            countFreq[ch]++;
        }

        for (auto const& [ch, freq] : countFreq) {
            maxHeap.push({freq, ch});
        }

        string ans = "";

        while (!maxHeap.empty()) {
            char c = maxHeap.top().second;
            int cnt = maxHeap.top().first;
            maxHeap.pop();

            // ans.append(cnt, c);
            // ans += string(cnt, c);
            for (int i = 0; i < cnt; i++) {
                ans += c;
            }
        }
        return ans;
    }
};