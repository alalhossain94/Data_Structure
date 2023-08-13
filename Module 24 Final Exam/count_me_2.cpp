#include <bits/stdc++.h>

using namespace std;




int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;

        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        std::map<int, int> countMap;
        int maxCount = 0;
        int mostFrequentNumber = A[0];

        for (int num : A) {
            countMap[num]++;
            if (countMap[num] > maxCount || (countMap[num] == maxCount && num > mostFrequentNumber)) {
                maxCount = countMap[num];
                mostFrequentNumber = num;
            }
        }

        std::cout << mostFrequentNumber << " " << maxCount << std::endl;
    }

    return 0;
}





// Other solution

#include <bits/stdc++.h>

using namespace std;



int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;

        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        std::unordered_map<int, int> countMap;
        int maxOccurrences = 0;

        // Count the occurrences of each number and keep track of the maximum occurrences
        for (int num : A) {
            countMap[num]++;
            maxOccurrences = std::max(maxOccurrences, countMap[num]);
        }

        int mostFrequentNumber = A[0];

        // Find the most frequent number from the countMap
        for (int num : A) {
            if (countMap[num] == maxOccurrences && num > mostFrequentNumber) {
                mostFrequentNumber = num;
            }
        }

        std::cout << mostFrequentNumber << " " << maxOccurrences << std::endl;
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    for(int i=0; i<T; i++)
    {
        string s;
        getline(cin,s);
        map<string, int> mp;
        string word;
        string mostRepeatedWord;
        int max=0;
        stringstream ss(s);
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word]>max)
            {
                max=mp[word];
                mostRepeatedWord=word;
            }
        }
        cout<<mostRepeatedWord<<" "<<max<<endl;
    }
    return 0;
}
