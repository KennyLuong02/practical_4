#include "Finder.h"
// Swapnil(a1848855), Dil(a1825200), Minh Dai(a1837470)

    using namespace std;

Finder::Finder() {

}

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;

        // for(size_t i = 1; i <= s2.size(); i++) {
        //     size_t found = s1.find(s2.substr(0, i));
        //     if (found != string::npos) {
        //         result.push_back(found);
        //     } else {
        //         result.push_back(-1);
        //     }
        // }

        int size_2 = s2.size();
        size_t index = 0;

        for(size_t i = 1; i <= size_2; i++) {
            size_t found = s1.find(s2.substr(0, i), index);

            if (found != string::npos) {
                index = found;
                result.push_back(found);

            } else {
                // cout << found << "Here" << endl;
                index = i + 1;
                result.push_back(-1);
                break;
            }
        }

        for(size_t j = index; j < size_2; j++) {
            result.push_back(-1);
        }
        

        return result;
    }

   