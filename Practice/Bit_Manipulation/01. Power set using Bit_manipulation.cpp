vector<string> result;
        int n = s.size();

        for (int num = 1; num < (1 << n); num++) { // Start from 1 to exclude the empty string
            string sub = "";
            for (int i = 0; i < n; i++) {
                if (num & (1 << i)) {
                    sub += s[i];
                }
            }
            result.push_back(sub);
        }

        sort(result.begin(), result.end()); // Sort the final result vector

        return result;
    }
